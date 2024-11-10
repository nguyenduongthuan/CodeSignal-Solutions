/*
int solution(int n, int l, int r) {
    int count = 0;

    // Iterate through all possible values of A
    for (int a = l; a <= r; ++a) {
        // Calculate the corresponding value of B
        int b = n - a;
        
        // If b is within the range [l, r] and b is not less than a,
        // then it forms a valid pair
        if (b >= l && b <= r && b >= a) {
            // Increment the count
            count++;
        }
    }

    return count;
}
*/
int solution(int n, int l, int r){
    int count = 0;
    for(int i = l; i <= r; i++){
        if(n - i >= i && n - i <= r){
            count++;
        }
    }
    return count;
}