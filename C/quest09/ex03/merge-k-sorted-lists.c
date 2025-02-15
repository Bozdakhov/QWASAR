#include <stdlib.h>


#ifndef STRUCT_LISTNODE
#define STRUCT_LISTNODE
typedef struct s_listnode
{
    int val;
    struct s_listnode* next;
} listnode;
#endif

#ifndef STRUCT_LISTNODE_ARRAY
#define STRUCT_LISTNODE_ARRAY
typedef struct s_listnode_array
{
    int size;
    listnode **array;
} listnode_array;
#endif





// Helper function to merge two sorted linked lists
listnode* merge_two_lists(listnode* l1, listnode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    if (l1->val < l2->val) {
        l1->next = merge_two_lists(l1->next, l2);
        return l1;
    } else {
        l2->next = merge_two_lists(l1, l2->next);
        return l2;
    }
}

listnode* merge_k_sorted_lists(listnode_array* param_1) {
    if (!param_1 || param_1->size == 0) return NULL;

    // Merge the lists pairwise until only one list remains
    int left = 0, right = param_1->size - 1;
    while (right > 0) {
        while (left < right) {
            param_1->array[left] = merge_two_lists(param_1->array[left], param_1->array[right]);
            left++;
            right--;
        }
        left = 0;
    }
    return param_1->array[0];
}
