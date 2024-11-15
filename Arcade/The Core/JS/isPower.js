function solution(n) {
  if (Math.sqrt(n) === Math.floor(Math.sqrt(n))) {
    return true;
  }
  let i = 2,
    check;
  do {
    check = Math.pow(i, 3);
    if (check === n) {
      return true;
    }
    i++;
  } while (check <= n);
  return false;
}
