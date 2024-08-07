function calculateCompoundInterest(P, r, t) {
    const n = 12;
    const A = P * Math.pow(1 + (r / 100) / n, n * t);
    return A;
}

const P = 1000;
const r = 5;
const t = 10;
const amount = calculateCompoundInterest(P, r, t);
console.log(`Compound Interest after ${t} years: ${amount.toFixed(2)}`);
