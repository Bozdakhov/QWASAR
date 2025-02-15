#include "./linked_list.h"

void page_creator(list_page **page, char *name) {
    list_page* new = (list_page*)malloc(sizeof(list_page));
    new->name = name;
    new->next = NULL;
    if(*page == NULL) {
        *page = new;
    }
    else {
        list_page* header = *page;
        while(header->next) {
            header = header->next;
        }
        header->next = new;
    }
}

void page_print(list_page* file, et8 option) {
    for( ; file; file = file->next) {
        if(option == 2 || option == 3) {
            printf("%s\n", file->name);
        }
        else if(file->name[0] != '.') {
            printf("%s\n", file->name);
        }
    }
}

void alpha_sort(list_page** file) {
    list_page* header = *file;
    for(list_page* current; header->next; header = header->next) {
        for(current = header->next; current; current = current->next) {
            if(my_strcmp(header->name, current->name) > 0) {
                swaped(&(header->name), &(current->name));
            }
        }
    }
}

void time_sort(list_page** file) {
    struct stat f_stat1;
    struct stat f_stat2;
    list_page* header = *file;
    for(list_page* temp; header->next; header = header->next) {
        for(temp = header->next; temp; temp = temp->next) {
            stat(header->name, &f_stat1);
            stat(temp->name, &f_stat2);
            if(f_stat1.st_mtim.tv_sec == f_stat2.st_mtim.tv_sec && f_stat1.st_mtim.tv_nsec <= f_stat2.st_mtim.tv_nsec) {
                swaped(&(header->name), &(temp->name));   
            }
            else if(f_stat1.st_mtim.tv_sec <= f_stat2.st_mtim.tv_sec) {
                swaped(&(header->name), &(temp->name));
            }
        }
    }
}

void page_cleaner(list_page* file) {
    list_page* temp;
    for(; file; file = file->next,  free(temp)) {
        temp = file;
        file->name = NULL;
    }
}