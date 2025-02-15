#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define CODERING 4
typedef unsigned short flag;

static flag matched[CODERING];

void mystrcpy(char *, char *);
void readinput(char *);
int count_deployed(char *, char *);
int count_mislaid(char *, char *);

int main(int argc, char **argv);



void mystrcpy(char *s1, char *s2){
    while((*s1++ = *s2++));
}

void readinput(char *buf){
    flag invalid;
    int i;
    char c;

    do {
        invalid = 0;
        i = 0;

		while(read(0, &c, 1) > 0 && c != '\n')
            if (c >= '0' && c <= '8' && i < CODERING)
                *(buf + i++) = c;
            else
                invalid = 1;

        *(buf + CODERING) = '\0';

        if (c != '\n')
            printf("\n");
        
        if (!invalid && (i == CODERING))
            break;
        
        if (i == 0) {
            for(i = 0; i < CODERING; i++)
                *(buf + i) = -1;
            break;
        }
        
        printf("Wrong input!\n");

        } while (1);
}

int count_deployed(char *findle, char *codevale){
    int deployed, i;
    for(deployed = 0, i = 0; i < CODERING; i++, findle++, codevale++)
        if(*findle == *codevale){
            matched[i] = 1;
            *findle = -1;
            deployed++;
        }
    return deployed;
}

int count_mislaid(char *findle, char *codevale){
    int mislaid, i;
    for(mislaid = 0; *findle != '\0'; findle++)
        for(i = 0; i < CODERING; i++)
            if(!matched[i] && *(codevale + i) == *findle){
                matched[i] = 1;
                mislaid++;
                break;
            }
    return mislaid;
}

int main(int argc, char **argv){

    if(!(argc % 2)){
        write( 2, "Usage: -t [TRIES] -c [CODE]\n", 31);
        return 1;
    }

    int tries = 10;
    int i;
    char codevale[CODERING + 1] = {};

    while(--argc){
        if(**++argv == '-'){
            argc--;
            switch(*++*argv){
                case 'c':
                    mystrcpy(codevale, *++argv);
                    for(i = 0; codevale[i] && i < CODERING; i++)
                        if(!(codevale[i] >= '0' && codevale[i] <= '8')){
                            write(2, "Error: invalid piece value\n", 27);
                            return 1;
                        }
                    if (i < CODERING || codevale[i]){
                        write(2, "Error: invalid code length\n", 27);
                        return 1;
                    }
                    break;
                case 't':
                    for(i = 0, ++argv; *(*argv + i); i++)
                        if(!(*(*argv + i) >= '0' && *(*argv + i) <= '9')){
                            write(2, "Error: invalid tries value\n", 27);
                            return 1;
                        }
                    if((tries = atoi(*argv)) == 0){
                        write(2, "Error: invalid tries value\n", 27);
                        return 1;
                    }
                    break;
                }
            }
    }

    char findle[CODERING + 1];
    int mislaid, deployed, j;

    if (!codevale[0]){
        srand((unsigned) time(NULL));
        for(i = 0; i < CODERING; i++)
            codevale[i] = '0' + (rand() % 8);
    }

    i = 0;
    //printf("Will you find the secret code?\nPlease enter a valid findle\n---\n");
    printf("Will you find the secret code?\nPlease enter a valid guess\n---\n");
    do {
        printf("---\nRound %d\n", i);
        for (j = 0; j < CODERING; j++)
            matched[j] = 0;
			readinput(findle);        
        
        deployed = count_deployed(findle, codevale);
        mislaid= count_mislaid(findle, codevale);
        
        if(deployed == CODERING)
            break;
        //printf("Deployed pieces: %d\nMislaid pieces: %d\n", deployed, mislaid);
         printf("Well placed pieces: %d\nMisplaced pieces: %d\n", deployed, mislaid);
        if(++i >= tries)
            break;
    } while(1);
    if (deployed == CODERING)
        printf("Congratz! You did it!\n");
    else
       printf("You lost! The code was %s\n", codevale);
    return 0;
}