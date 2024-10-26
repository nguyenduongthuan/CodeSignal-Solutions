char * solution(char * string) {
    for(int i = 0; i <= strlen(string) - 1; i++){
        if(string[i] == 'z'){
            string[i] = 'a';
            continue;
        }
        string[i]++;
    }
    return string;
}
