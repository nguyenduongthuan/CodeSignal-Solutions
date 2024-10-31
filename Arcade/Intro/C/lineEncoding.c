char * convertIntToSTring(int number){
    char * str = (char *)malloc(3);
    int size = 0;
    while(number){
        str[size++] = (number % 10) + '0';
        number /= 10; 
    }
    str[size] = '\0';
    for(int i = 0; i < size / 2; i++){
        int tmp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = tmp;
    }
    return str;
    
}
char * solution(char * s) {
    char* sub = (char *)malloc(strlen(s));
    int sizeSub = 0, i = 0, j = 0, count = 0;
    for(int i = 0; i <= strlen(s) - 1; i++){
        j = i + 1;
        count = 1;
        while(s[j] == s[i]){
            count++;
            j++;
        }
        if(count == 1){
            sub[sizeSub++] = s[i];
        }else{
            strcat(sub, convertIntToSTring(count));
            sizeSub += strlen(convertIntToSTring(count));
            sub[sizeSub++] = s[i];
        }
        i = j - 1;
    }
    sub[sizeSub] = '\0';
    return sub;
}
