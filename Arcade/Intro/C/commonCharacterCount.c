void deleteACharacter(char string[], int pos){
    for(int i = pos; i <= strlen(string); i++){
        string[i] = string[i + 1];
    }
}

int solution(char  string1[], char  string2[]) {
    int count = 0;
    for(int i = 0; i <= strlen(string1) - 1; i++){
        //int check2 = strlen(string2);
        for(int j = 0; j <= (strlen(string2) - 1); j++){
            if(string1[i] == string2[j]){
                count++;
                deleteACharacter(string2, j);
                break;
            }
        }
    }
    return count;
}
