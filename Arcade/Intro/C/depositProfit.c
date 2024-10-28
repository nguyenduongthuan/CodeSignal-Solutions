int solution(int deposit, int rate, int threshold) {
    int count = 0;
    float check = deposit;
    while (check < threshold) {
        count++;
        check = (check * rate / 100.0) + check;
    }
    return count;
}
