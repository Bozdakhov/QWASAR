#include <stdlib.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

listnode* remove_nth_node_from_end_of_list(listnode* param_1, int param_2){
    if (!param_1 || param_2 <= 0) return param_1;

    // Use two pointers to create a gap of length n between them
    listnode* fast = param_1;
    while (param_2-- > 0 && fast) fast = fast->next;
    if (!fast) { // n is equal to the length of the list, so remove the head
        listnode* new_head = param_1->next;
        free(param_1);
        return new_head;
    }
    listnode* slow = param_1;
    while (fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove the nth node from the end
    listnode* to_remove = slow->next;
    slow->next = to_remove->next;
    free(to_remove);

    return param_1;
}

