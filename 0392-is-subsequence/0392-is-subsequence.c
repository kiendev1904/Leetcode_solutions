bool isSubsequence(char* s, char* t) {
    int first1 = 0;
    int first2 = 0;
    int len1 = strlen(s);
    int len2 = strlen(t);
    while(first1 < len1 && first2 < len2 ){
        if(s[first1] == t[first2]){
            first1 ++;
            first2 ++;
        }else{
            first2 ++;
        }
    }
    if(first1 == len1) return true;
    else return false;


}