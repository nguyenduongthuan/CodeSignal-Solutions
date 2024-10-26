bool solution(int n) {
    while(n){
        if((n % 10) % 2) return false;
        n /= 10;
    }
    return true;
}
