function solution(arr) {
  // let middle = arr.length % 2 ? arr[Math.floor(arr.length / 2)] : (arr[arr.length / 2 - 1] + arr[arr.length / 2])
  return (
    arr[0] ===
      (arr.length % 2
        ? arr[Math.floor(arr.length / 2)]
        : arr[arr.length / 2 - 1] + arr[arr.length / 2]) &&
    arr[0] === arr[arr.length - 1]
  );
}
