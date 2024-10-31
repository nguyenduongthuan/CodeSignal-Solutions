
bool solution(char  str[]) {
    if(!(str[strlen(str) - 1] >= '0' && str[strlen(str)] <= '9') && !(str[strlen(str) - 1] >= 'A' && str[strlen(str) - 1] <= 'F') && str[strlen(str) - 1] == '-') return false;
    for(int i = 0; str[i] != '\0'; i++){
        if(!(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'A' && str[i] <= 'F')) return false;
        i++;
        if(!(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'A' && str[i] <= 'F')) return false;
        
        i++;
        if(str[i] == '\0') return true;
        if(str[i] != '-') return false;
    }
    return true;
}
