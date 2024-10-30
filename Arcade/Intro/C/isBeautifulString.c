bool solution(char * string) {
    int frag[26] = {0};
    for(int i = 0; i <= strlen(string) - 1; i++) frag[string[i] - 'a']++;
    for(int i = 1; i <= 25; i++)
        if(frag[i] > frag[i - 1]) return false;
    return true;
}
