bool solution(int a, int b) {
     if (a > b)
         return true;
     else
         return (b - a)%2;
    
    //return (a > b) || (a-b)%2;
}
