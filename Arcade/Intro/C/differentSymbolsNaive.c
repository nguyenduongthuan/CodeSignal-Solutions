int solution(char * s) {
    int frag[26] = {0};
    for(int i = 0; i <= strlen(s) - 1; i++){
        frag[s[i] - 'a']++;
    }
    int count = 0;
    for(int i = 0; i <= 25; i++){
        if(frag[i] != 0){
            count++;
        }
    }
    return count;
}
