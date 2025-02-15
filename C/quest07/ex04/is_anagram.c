#include <stdio.h>
#include <string.h>

int is_anagram(char* param_1, char* param_2) {
    int freq[256] = {0}; // initialize all values to 0
    int len1 = strlen(param_1);
    int len2 = strlen(param_2);

    // if the lengths of the strings are not equal, they cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // calculate the frequency of each character in the first string
    for (int i = 0; i < len1; i++) {
        freq[param_1[i]]++;
    }

    // subtract the frequency of each character in the second string
    // if the resulting frequency count is not 0, the strings are not anagrams
    for (int i = 0; i < len2; i++) {
        freq[param_2[i]]--;
        if (freq[param_2[i]] < 0) {
            return 0;
        }
    }

    // if we've made it this far, the strings are anagrams
    return 1;
}
