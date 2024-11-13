function solution(n, m) {
  return n + m + gcd(n, m) - 2;
}
var gcd = function (a, b) {
  if (!b) {
    return a;
  }
  return gcd(b, a % b);
};
