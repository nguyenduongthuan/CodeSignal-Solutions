int solution(int n) {
  return (1 << (__builtin_ctz(~(n | (n + 1))) + 1)) / 2;
}
