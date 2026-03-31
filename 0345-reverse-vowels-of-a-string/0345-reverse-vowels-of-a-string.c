#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char s){// check xem co la nguyen am khong , dung binary search
    char str[] = {'A','E','I','O','U','a','e','i','o','u'};
    int left = 0;
    int right = 9;
    if(s > str[right]) return 0;// bo cac dieu kien truoc
    if(s < str[left]) return 0;

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
