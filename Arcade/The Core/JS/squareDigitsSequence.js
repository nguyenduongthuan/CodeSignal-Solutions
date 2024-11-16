function solution(a0) {
  let sequence = [a0];
  while (true) {
    let checkOccurred = sumDigit(sequence[sequence.length - 1]);
    if (sequence.includes(checkOccurred)) {
      sequence.push(checkOccurred);
      return sequence.length;
    }
    sequence.push(checkOccurred);
  }
}

const sumDigit = (number) =>
  number
    .toString()
    .split("")
    .reduce((sum, item) => (sum += Math.pow(item, 2)), 0);
