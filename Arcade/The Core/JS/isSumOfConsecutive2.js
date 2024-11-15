function solution(n) {
  let result = 0;
  for (let i = 1; i <= n / 2; i++) {
    let map = i;
    for (let j = i + 1; map < n; j++) {
      map += j;
    }
    result = map === n ? ++result : result;
  }
  return result;
}
