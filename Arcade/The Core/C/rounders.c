int solution(int n) {
    int number[100], i = 0;
    while (n >= 10) {
        number[i++] = n % 10;
        n /= 10;
    }
    number[i] = n;    
    for(int j = 0; j <= i; j++){
        if(number[j] >= 5){
            
            number[j + 1]++;
        }
        if(j != i) {
            number[j] = 0;
        }
    }
    int result = 0;
    for(int j = i; j >= 0; j--){
        result = result * 10 + number[j];
    }
    return result;
}
