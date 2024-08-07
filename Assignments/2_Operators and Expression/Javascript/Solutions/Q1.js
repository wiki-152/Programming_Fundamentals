// Q1.js
// Program to compute mean and median of 10 numbers

const prompt = require('prompt-sync')();

let numbers = [];
for (let i = 0; i < 10; i++) {
  numbers.push(parseFloat(prompt(`Enter number ${i + 1}: `)));
}

numbers.sort((a, b) => a - b);

const mean = numbers.reduce((acc, val) => acc + val, 0) / numbers.length;
const median = (numbers[4] + numbers[5]) / 2;

console.log(`Mean: ${mean}`);
console.log(`Median: ${median}`);
