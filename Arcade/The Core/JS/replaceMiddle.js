function solution(arr) {
  arr.length % 2
    ? arr
    : arr.splice(
        arr.length / 2 - 1,
        2,
        arr[arr.length / 2 - 1] + arr[arr.length / 2]
      );
  return arr;
}
