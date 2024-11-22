function solution(s, t) {
  let result = 0;
  s.split("").forEach((item) => {
    if (t.indexOf(item) < 0) result++;
    t = t.replace(item, "");
  });
  return result;
}
