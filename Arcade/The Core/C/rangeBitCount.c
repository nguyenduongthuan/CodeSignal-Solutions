int countOnesInBinary(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int solution(int a, int b) {
    // Calculate the total number of 1s for the range [0, b]
    int totalOnesUpToB = 0;
    for (int i = 0; i <= b; i++) {
        totalOnesUpToB += countOnesInBinary(i);
    }
    
    // Calculate the total number of 1s for the range [0, a-1]
    int totalOnesUpToA = 0;
    for (int i = 0; i < a; i++) {
        totalOnesUpToA += countOnesInBinary(i);
    }
    
    // The difference between the totals for [0, b] and [0, a-1] is the total for [a, b]
    return totalOnesUpToB - totalOnesUpToA;
}