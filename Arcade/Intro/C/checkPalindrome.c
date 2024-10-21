bool solution(char * inputString) {
    int strartIndex = 0, endIndex = strlen(inputString) - 1;
    while (strartIndex <= endIndex) {
        if(*(inputString + strartIndex) != *(inputString + endIndex)){
            return 0;
        }
        strartIndex++;
        endIndex--;
    }
    return 1;
}
