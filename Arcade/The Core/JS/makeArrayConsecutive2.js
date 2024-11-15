//SOLUTION 1:

// const solution = (statues) => {
//     return statues.sort((a, b) => a - b).reduce((result, item, index) => {
//         return result += (index == statues.length - 1) ? 0 : (statues[index + 1] - item - 1)
//     }, 0)
// }

// const solution = (statues) => statues.sort((a, b) => a - b).reduce((result, item, index) => result += (index == statues.length - 1) ? 0 : (statues[index + 1] - item - 1), 0)

//SOLUTION 2:

const solution = (statues) =>
  Math.max(...statues) - Math.min(...statues) - statues.length + 1;
