bool solution(char string[]){
    int frag[57] = {0}, check = 0;
    for(int i = 0; i <= strlen(string) - 1; i++){
        frag[(string[i] - 'A')]++;
    }
    for(int i = 0; i <= 56; i++){
        if(frag[i] % 2 != 0){
            check++;
            if(check > 1){
                return false;
            }
       }
    }
    return true;
}
