#include "./libarys.h"
#include "./my_string.h"
#include "./linked_list.h"

void open_directory(char* dir_name, et8 option) {
    DIR* d_name;
    d_name = opendir(dir_name);
    struct dirent* open_dir;
    list_page* directory_content = NULL;
    while((open_dir = readdir(d_name))) {
        page_creator(&directory_content, open_dir->d_name);
    }
    alpha_sort(&directory_content);
    if(option == 1 || option == 3) {
        time_sort(&directory_content);
    }
    page_print(directory_content, option);
    page_cleaner(directory_content);
    closedir(d_name);
}

void start_main_work(list_page** head_list, et8 option, et8 num_files) {
    int file_descriptor;
    list_page* files = NULL;
    list_page* directory = NULL;
    struct stat head_stat;
    list_page* header = *head_list;
    while(header) {
        file_descriptor = open(header->name, O_RDONLY);
        stat(header->name, &head_stat);
        if(file_descriptor < 0) {
            printf("ls: cannot access '%s': No such file or directory\n", header->name);
        }
        else if(S_ISDIR(head_stat.st_mode)) {
            page_creator(&directory, header->name);
        }
        else {
            page_creator(&files, header->name);
        }
        close(file_descriptor);
        header = header->next;
    }
    if(files) {
        alpha_sort(&files);
        if(option == 1 || option == 3) {
            time_sort(&files);
        }
        page_print(files, option);
        page_cleaner(files);
    }
    if(directory) {
        et8 dir = 0;
        list_page* dirs = directory;
        alpha_sort(&directory);
        if(option == 1 || option == 3) {
            time_sort(&directory);
        }
        while(directory) {
            if(num_files > 1 && files) {
                printf("\n%s:\n", directory->name);
            }
            else if(num_files > 1 && !files) {
                if(!dir) {
                    printf("%s:\n", directory->name);
                }
                else {
                    printf("\n%s:\n", directory->name);
                }
                dir++;
            }
            open_directory(directory->name, option);
            directory = directory->next;
        }
        page_cleaner(dirs);
    }
}

int main(int ac, char** av) {
    et8 a = 0;
    et8 t = 0;
    et8 option = 0;
    et8 i = 1;
    list_page* files_dirs = NULL;
    et8 num_files = 0;
    while(i < ac) {
        if(my_strcmp(av[i], "-t") == 0) {
            t = 1;
        }
        else if(my_strcmp(av[i], "-a") == 0) {
            a = 1;
        }
        else if(my_strcmp(av[i], "-at") == 0) {
            a = 1;
            t = 1;
        }
        else if(my_strcmp(av[i], "-ta") == 0) {
            a = 1;
            t = 1;
        }
        else {
            page_creator(&files_dirs, av[i]);
            num_files++;
        }
        i++;
    }
    if(t == 1 && a == 0) {
        option = 1;
    }
    else if(a == 1 && t == 0) {
        option = 2;
    }
    else if(a == 1 && t == 1) {
        option = 3;
    }
    if(files_dirs == NULL) {
        open_directory(".", option);
        return 0;
    }
    start_main_work(&files_dirs, option, num_files);
    page_cleaner(files_dirs);
    return 0;
}