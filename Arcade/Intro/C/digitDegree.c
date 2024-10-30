int sumDigit(int n) {
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int solution(int n) {
    int count = 0;
    while(n > 9){
        count++;
        n = sumDigit(n);
    }
    return count;
}
