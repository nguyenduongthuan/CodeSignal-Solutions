bool solution(int n) {
    while(1){
        int digit = n % 10;
        n /= 10;
        if(digit){
            break;
        }
        
    }  
    while(n){
        int digit = n % 10;
        if(digit == 0){
            return true;
        }
        n /= 10;
    }
    return false;
}
