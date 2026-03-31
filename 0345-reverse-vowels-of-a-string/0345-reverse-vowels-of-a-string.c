
/* Ý tưởng là sẽ dùng two point để duyệt đầu và cuối, khi gặp được nguyên âm ở cả 2 đầu thì sẽ swap cho nhau.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*int check(char s){
    char str[] = {'A','E','I','O','U','a','e','i','o','u'};
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

    switch(s){
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u': 
            return 1;
        default:
            return 0;

    }

}*/
char* reverseVowels(char* s) {
    // Bước 1: Tạo lookup table (bảng tra cứu) cho 256 ký tự ASCII
    // Cách này giúp kiểm tra s[i] có là nguyên âm hay không trong O(1) mà không cần switch/if
    static int isVowel[256] = {0};
    isVowel['a'] = isVowel['e'] = isVowel['i'] = isVowel['o'] = isVowel['u'] = 1;
    isVowel['A'] = isVowel['E'] = isVowel['I'] = isVowel['O'] = isVowel['U'] = 1;

    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        // Kiểm tra trực tiếp từ mảng, không gọi hàm
        while (i < j && !isVowel[(unsigned char)s[i]]) {
            i++;
        }
        while (i < j && !isVowel[(unsigned char)s[j]]) {
            j--;
        }

        if (i < j) {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++;
            j--;
        }
    }
    return s;
}
