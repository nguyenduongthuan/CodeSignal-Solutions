function solution(arr) {
  let middle =
    arr.length % 2
      ? arr[Math.floor(arr.length / 2)]
      : arr[arr.length / 2 - 1] + arr[arr.length / 2];
  console.log(arr[arr.length - 1]);
  return arr[0] === middle && middle === arr[arr.length - 1];
}
