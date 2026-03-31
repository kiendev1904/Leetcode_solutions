#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int UCLN(int a,int b)
{
   while(b){
    int tmp = a%b;
    a = b;
    b = tmp;
   } 
   return a;

}
char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *s1s2 = (char*)malloc(len1 + len2 + 1);
    char *s2s1 = (char*)malloc(len1 + len2 + 1);
    strcpy(s1s2,str1);
    strcat(s1s2,str2);
    strcpy(s2s1,str2);
    strcat(s2s1,str1);
    if(strcmp(s1s2,s2s1) != 0){
        free(s1s2);
        free(s2s1);
        char*res = (char*)malloc(1);
        res[0] = '\0';

        return res;
    }
 
    free(s1s2);
    free(s2s1);
    int commonLen = UCLN(len1,len2);
    char*result = (char*)malloc(commonLen + 1);
    strncpy(result,str1,commonLen);
    result[commonLen] = '\0';
    return result;


}