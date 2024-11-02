/*
char * convertIntToString(int n){
    char* str = (char *)malloc(15);
    int size = 0;
    while(n){
        str[size++] = (n % 10) + '0';
        n /= 10;
    }
    str[size] = '\0';
    for(int i = 0; i <= (size - 1) / 2; i++){
        char tmp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = tmp;
    }
    return str;
}
int convertStringToInt(char str[]){
    int result = 0;
    for(int i = 0; i <= strlen(str) - 1; i++){
        result = result * 10 + (str[i] - '0');
    }
    return result;
}
void deleteStr(char str[], int pos){
    for(int i = pos; i <= strlen(str) - 1; i++){
        str[i] = str[i + 1];
    }
}
int solution(int n) {
    char sub[100];
    strcpy(sub, convertIntToString(n));
    int leng = strlen(sub), max = 0;
    for(int i = 0; i <= leng - 1; i++){
        strcpy(sub, convertIntToString(n));
        deleteStr(sub, i);
        int check = convertStringToInt(sub);
        if(check > max){
            max = check;
        }
    }
    return max;
}
*/
int solution(int n)
{
    int max = 0;
    for (int t = 1; t < n; t *= 10){
        int check = n / 10 / t * t + n % t;
        printf("\n%d", check);
        if(check > max){
            max = check;
        }
    }
    return max;
}