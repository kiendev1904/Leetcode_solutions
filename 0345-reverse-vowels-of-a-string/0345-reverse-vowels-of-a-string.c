
/* Ý tưởng là sẽ dùng two point để duyệt đầu và cuối, khi gặp được nguyên âm ở cả 2 đầu thì sẽ swap cho nhau.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char s){
    /*char str[] = {'A','E','I','O','U','a','e','i','o','u'};
    int left = 0;
    int right = 9;
    while(left <= right){
        int mid = (left + right )/2;
        if(str[mid] == s) return 1;
        if(str[mid] > s){
            right = mid -1;
        }
        else if(str[mid] < s){
            left = mid + 1;
        }
    
    }
    return 0;
*/
    switch(s){
        case 'A':
            return 1;
            
        case 'E':
            return 1;
        case 'I':
            return 1;
        case 'O':
            return 1;
        case 'U':
            return 1;
        case 'a':
            return 1;
        case 'e':
            return 1;
        case 'i':
            return 1;
        case 'o':
            return 1;
        case 'u':
            return 1;
        default:
            return 0;
    }
}
char* reverseVowels(char* s) {
    int i =0;
    int j = strlen(s) - 1;
    while(i < j){
        while(i < j && !check(s[i])){
            i++;
        } 
        while(j > i && !check(s[j])){
            j --;

        }
        if(i < j){
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i ++;
            j --;

        }
        
    } 
    return s;


}
