#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char *result = (char*)malloc((len1 + len2 + 1)*sizeof(char));
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < len1 || j < len2)
    {
        if(i < len1)
        {
            result[k++] = word1[i++]; 

        }
        if(j < len2)
        {
            result[k++] = word2[j++];

        }
    }
    result[k] = '\0';
    return result;
}