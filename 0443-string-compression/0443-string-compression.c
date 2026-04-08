

int compress(char* chars, int charsSize) {
    int read = 0 ;
    int write = 0;
    while(read < charsSize){
        char current_char = chars[read];
        int count = 0 ;
        while(read < charsSize && chars[read] == current_char){
            read ++;
            count++;

        }
        chars[write++] = current_char;
        if(count > 1){
            int start = write;
            while(count > 0){
                chars[write++] = (count % 10) + '0';
                count = count /10;
            }

        int end = write - 1;
        while(start < end){
            char temp = chars[start];
            chars[start++] = chars[end];
            chars[end --] = temp;
            }
        }
    }
    return write;
    
}