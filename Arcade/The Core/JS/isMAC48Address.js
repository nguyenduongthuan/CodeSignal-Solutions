function solution(inputString) {
  return /^([0-9A-F]{2}-){5}[0-9A-F]{2}$/.test(inputString);
}
