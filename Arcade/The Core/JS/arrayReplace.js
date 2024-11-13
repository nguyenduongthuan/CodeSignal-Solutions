function solution(inputArray, elemToReplace, substitutionElem) {
  return inputArray.map((item) =>
    item === elemToReplace ? substitutionElem : item
  );
}
