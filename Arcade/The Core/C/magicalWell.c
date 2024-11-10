int solution(int a, int b, int n) {
    int money = 0;
    for(int i = 1; i <= n; i++){
        money += a * b;
        a++;
        b++;
    }
    return money;
}
