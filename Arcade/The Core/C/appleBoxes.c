int solution(int k) {
    int red =  0, yellow = 0;
    for(int i  = 1; i <= k; i += 2){
        yellow += i * i;
    }
    for(int i  = 2; i <= k; i += 2){
        red += i * i;
    }
    return red - yellow;
}
