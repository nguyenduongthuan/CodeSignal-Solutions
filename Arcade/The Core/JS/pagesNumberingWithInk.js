function solution(current, numberOfDigits) {
  let result = current - 1;
  while (true) {
    let count = countDigits(result + 1);
    if (count > numberOfDigits) {
      return result;
    }
    result++;
    numberOfDigits -= count;
  }
}

const countDigits = (number) => number.toString().length;
