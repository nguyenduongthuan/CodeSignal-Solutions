function solution(
  s,
  c = ~~((10 ** s.length) ** 0.5),
  a = (b) =>
    [...new Set(b)]
      .map((x) => b.split(x).length - 1)
      .sort()
      .join("")
) {
  return a(s) == a((p = "" + c * c)) ? +p : c > 0 ? solution(s, c - 1) : -1;
}
