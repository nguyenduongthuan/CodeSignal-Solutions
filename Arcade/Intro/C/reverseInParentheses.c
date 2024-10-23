
void reverseString(char string[], int start, int end){
    for(int i = start; i <= (start + end) / 2; i++){
        char tmp = string[i];
        string[i] = string[end + start - i];
        string[start + end - i] = tmp;
    }
}
char * solution(char * string) {
    int check, leng = strlen(string);
    if(leng <= 2){
        strcpy(string, "");
        return string;
    }
    while(1){
        check = -1;
        for(int i = leng - 1; i >= 0; i--){
            if(string[i] == ')'){
                check = i;
            }
            if(string[i] == '('){
                string[i] = '-';
                string[check] = '-';
                reverseString(string, i + 1, check - 1);
                break;
            }
        }
        if(check == -1){
            break;
        }
    }
    char stringS[100];
    int sizeS = 0;
    for(int i = 0; i <= leng; i++){
        if(string[i] != '-'){
            stringS[sizeS++] = string[i];
        }
    }
    strcpy(string, stringS);
    return string;
}
void reverseString(char string[], int start, int end){
    for(int i = start; i <= (start + end) / 2; i++){
        char tmp = string[i];
        string[i] = string[end + start - i];
        string[start + end - i] = tmp;
    }
}
char * solution(char * string) {
    int check, leng = strlen(string);
    if(leng <= 2){
        strcpy(string, "");
        return string;
    }
    while(1){
        check = -1;
        for(int i = leng - 1; i >= 0; i--){
            if(string[i] == ')'){
                check = i;
            }
            if(string[i] == '('){
                string[i] = '-';
                string[check] = '-';
                reverseString(string, i + 1, check - 1);
                break;
            }
        }
        if(check == -1){
            break;
        }
    }
    char stringS[100];
    int sizeS = 0;
    for(int i = 0; i <= leng; i++){
        if(string[i] != '-'){
            stringS[sizeS++] = string[i];
        }
    }
    strcpy(string, stringS);
    return string;
}