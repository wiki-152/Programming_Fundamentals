function calculateFormula(c, v) {
    const y = 10;
    const d = 20;
    return (y - c) / (d + v);
}

const c = 5;
const v = 3;
const result = calculateFormula(c, v);
console.log(`Result: ${result}`);
