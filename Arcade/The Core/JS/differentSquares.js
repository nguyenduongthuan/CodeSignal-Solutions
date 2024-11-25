function solution(m, n = [...Array(m.length - 1)]) {
  return new Set(
    n
      .map((_, i) =>
        [...Array(m[0].length - 1)].map(
          (_, j) => "" + m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1]
        )
      )
      .flat()
  ).size;
}
