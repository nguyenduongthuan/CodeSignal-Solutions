int solution(int a, int b, int c) {
    if(a == b){
        return c;
    }else if (a == c) {
    return b;
    }else if ( b == c){
        return a;
    }
}
