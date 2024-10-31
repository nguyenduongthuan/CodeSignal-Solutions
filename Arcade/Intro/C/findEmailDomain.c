char * solution(char * address) {
    int check;
    for(check = strlen(address) - 1; address[check] != '@'; check--);
    for(int i = check + 1; i <= strlen(address); i++) address[i - check - 1] = address[i];
    return address;
}
