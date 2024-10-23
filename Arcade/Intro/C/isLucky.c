int countDigit(int n){
    int count = 0;
    while(n){
        n /= 10;
        count++;
    }
    return count;
}

bool solution(int n) {
    int check = countDigit(n), sum1 = 0, sum2 = 0;
    for(int i = 1; i <= check / 2; i++){
        sum1 += n % 10;
        n /= 10; 
    }
    while(n){
        sum2 += n % 10;
        n /= 10;
    }
    if(sum1 == sum2){
        return true;
    }
    return false;
}
