bool solution(int a, int b, int c) {
    if(a + b == c || a - b == c || a * b == c || (a / (float)b) == c){
        return true;
    }
    return false;
}
