char * solution(char * text) {
    int check = -1;
    for(int i = 0; i <= strlen(text) - 1; i++){
        if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')){
            check = i;
            break;
        }
    }
    int count, max = 0, result;
    for(int i = check; i <= strlen(text) - 1; i++){
        if(!((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))){
            i++;
        }
        check = i;
        count = 0;
        while(1){
            if(!((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))){
                break;
            }
            count++;
            i++;
        }
        
        if(count > max){
            max = count;
            result = check;
        }
    }
    char* sub = (char *)malloc(100);
    int sizeSub = 0;
    for(int i = result; ; i++){
        if(!((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))){
                break;
            }
        sub[sizeSub++] = text[i];
    }
    sub[sizeSub] = '\0';
    return sub;
}
