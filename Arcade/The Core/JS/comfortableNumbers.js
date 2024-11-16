function solution(l, r) {
  let result = 0;
  for (let i = l; i <= r - 1; i++) {
    for (let j = i + 1; j <= r; j++) {
      if (comfortable(i, j) && comfortable(j, i)) {
        result++;
      }
    }
  }
  return result;
}
const s = (number) =>
  number
    .toString()
    .split("")
    .reduce((sum, item) => (sum += Number(item)), 0);

const comfortable = (a, b) => {
  let [start, end] = [a - s(a), a + s(a)];
  if (a !== b && b >= start && b <= end) {
    return true;
  }
  return false;
};
