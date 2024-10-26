bool solution(char name[]) {
    if(name[0] >= '0' && name[0] <= '9'){
        return false;
    }
    for(int i = 0; i <= strlen(name) - 1; i++){
        if((name[i] == '_') || (name[i] >= '0' && name[i] <= '9') || ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))){
            continue;
        }
        return false;
    }
    return true;
}
