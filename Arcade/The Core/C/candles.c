int solution(int candlesNumber, int makeNew) {
    int burn = candlesNumber, leftover = candlesNumber;
    candlesNumber = 0;
    while(leftover / makeNew){
        candlesNumber = leftover / makeNew;
        printf("candlesNumber = %d\n", candlesNumber);
        leftover = leftover % makeNew;
        printf("leftover = %d\n", leftover);
        burn += candlesNumber;
        printf("burn = %d\n", burn);
        leftover += candlesNumber;
        printf("leftover = %d\n", leftover);
        candlesNumber = 0;
    }
    return burn;
}
