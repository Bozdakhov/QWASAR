#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "./my_string.h"

#ifndef LIST_PAGE
#define LIST_PAGE
typedef struct listnode {
    char* name;
    struct listnode* next;
} list_page;
void page_creator(list_page** page, char* name);
void page_print(list_page* file, et8 option);
void alpha_sort(list_page** file);
void page_cleaner(list_page* file);
void time_sort(list_page** file);
#endif
#endif