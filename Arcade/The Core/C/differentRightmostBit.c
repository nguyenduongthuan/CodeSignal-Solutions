int solution(int n, int m) {
  return  1 << (__builtin_ctz(n ^ m));
}
