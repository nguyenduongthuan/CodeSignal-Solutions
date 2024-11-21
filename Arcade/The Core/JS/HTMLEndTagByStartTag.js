// function solution(startTag) {
//     return `</${startTag.split(" ")[0].split("<")[1].split(">")[0]}>`
// }

const solution = (startTag) => `</${startTag.slice(1, startTag.indexOf(" "))}>`;
