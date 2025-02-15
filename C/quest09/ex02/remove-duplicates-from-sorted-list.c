#include <stdlib.h>

#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

listnode* remove_duplicates_from_sorted_list(listnode* head) {
    if (head == NULL) return NULL;
    listnode* curr = head;
    while (curr->next != NULL) {
        if (curr->val == curr->next->val) {
            listnode* temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
    return head;
}
