int solution(int n, int m) {
  return ~(n ^ m) & ((n ^ m) + 1) & -((n ^ m) + 1);
}
