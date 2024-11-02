int solution(char * str) {
    int sum = 0, check = 0, j;
    for(int i = 0; i <= strlen(str) ; i++){
        if((str[i] >= '0' && str[i] <= '9')){
            check = 0;
            for(j = i; ; j++){
                if(!(str[j] >= '0' && str[j] <= '9')){
                    break;
                }
                check = (check * 10) + str[j] - '0';
            }
            sum += check;
            i = j;
        }
    }
    return sum;
}
