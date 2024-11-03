
char * solution(char * code) {
    int length = strlen(code)/8;
    char * message = malloc(length+1);
    int i;
    
    for(i=0;i<length;i++)
    message[i]=0;
    message[length]='\0';
    for(i=0;i<length*8;i++)
        message[i/8]|=(code[i]-'0')<<(7-i%8);
    return message;
}