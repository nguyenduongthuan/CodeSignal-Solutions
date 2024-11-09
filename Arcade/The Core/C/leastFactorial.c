int solution(int n) {
    int mul = 1;
    for(int i = 1;; i++){
        mul *= i;
        if(mul >= n){
            return mul;
        }
    }
}
