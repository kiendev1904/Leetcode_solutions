#include<stdio.h>
#include<string.h>

void reverse(char* s, int left, int right){
    
    while(left < right){
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left ++;
        right --;
    }

}

char* reverseWords(char* s) {
    int len = strlen(s);
    reverse(s,0,len - 1);
    int i = 0;
    int j = 0;
    while(i < len){
        while(i < len && s[i] ==' '){
            i++;
        }
        if(i < len){
            if(j !=  0){
                s[j] = ' ';
                j++;
            }
            int start = j;
            while(i < len && s[i] != ' '){
                s[j++] = s[i ++];
            }
            reverse(s,start,j-1);

        }

   }
   s[j] = '\0';
   return s;

}