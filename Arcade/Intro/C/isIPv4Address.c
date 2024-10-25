
bool solution(char s[] ){
    if (strlen(s) < 7 ) return false; 
    if (s[0] == '.') return false;
    int check = 0;
    for(int i = 0; i <= strlen(s) - 1; i++){
        if(s[i] == '.'){
            check++;
            if(s[i + 1] == '.' || s[i + 1] == '\0'){
                return false;
            }else if(s[i + 2] == '.' || s[i + 2] == '\0'){
                continue;
            }else if(s[i + 3] == '.' || s[i + 3] == '\0'){
                if(s[i + 1] == '0'){
                    return false;
                }
            }else if(s[i + 4] == '.' || s[i + 4] == '\0'){
                if(s[i + 1] >= '3' || s[i + 1] == '0'){
                    return false;
                }
                if(s[i + 2] >= '6' && s[i + 1] == 2){
                    return false;
                }
                if(s[i + 1] == '2' && s[i + 2] == '5' && s[i + 3] >= '6'){
                    return false;
                }
            }else{
                return false;
            }
        }
        if(s[i] == '.') continue;
        if(!(s[i] >= '0' && s[i] <= '9')){
            return false;
        }
    }
    if(check >= 4 || check == 0 || check <= 2){
        return false;
    }
    int count = 0;
    for(int i = 0; s[i] != '.'; i++){
        count++;
    }
    if(count >= 4){
        return false;
    }
    if(count == 2 && s[0] == '0'){
        return false;
    }
    if(count == 3){
        if(s[0] >= '3' || s[0 + 1] == '0'){
            return false;
        }
        if(s[1] >= '6' && s[0] == 2){
            return false;
        }
        if(s[0] == '2' && s[1] == '5' && s[2] >= '6'){
            return false;
        }
    }
    return true;
}
