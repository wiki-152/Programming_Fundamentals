function calculateGrossPay(hours, rate) {
    if (hours <= 40) {
        return hours * rate;
    } else {
        return 40 * rate + 1.5 * rate * (hours - 40);
    }
}

const hours = 45;
const rate = 20;
const grossPay = calculateGrossPay(hours, rate);
console.log(`Gross Pay: ${grossPay}`);
