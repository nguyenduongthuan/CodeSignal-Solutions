int solution(int a, int b) {
    a/=1.414;
    b/=1.414;
    return 2*a*b+a+b|1;
}
