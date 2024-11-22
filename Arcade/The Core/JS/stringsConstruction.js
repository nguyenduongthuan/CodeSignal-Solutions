function solution(a, b) {
  let result = 0,
    condition = true;
  a = a.split("");
  do {
    a.forEach((item) => {
      if (b.indexOf(item) === -1) {
        condition = false;
        return result;
      }
      b = b.replace(item, "");
    });
    result++;
  } while (condition);
  return result - 1;
}
