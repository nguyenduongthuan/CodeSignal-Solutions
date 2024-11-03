int solution(int p) {
    if (p == 0) return 10;
    if (p == 1) return 1;

    int r = 0, e = 1;

    for (int k = 9; k > 1; k--)
        while (!(p % k)) {
            r += k * e;
            p /= k;
            e *= 10;
        }

    return p == 1 ? r : -1;
}
