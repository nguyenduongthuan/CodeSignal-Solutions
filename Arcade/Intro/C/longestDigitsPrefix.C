char * solution(char * inputString) {
    for(int i = 0; i <= strlen(inputString); i++){
        if(inputString[i] < '0' || inputString[i] > '9'){
            inputString[i] = '\0';
            return inputString;        
        }
    }
}
