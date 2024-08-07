function factorial(n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

function toRadians(degrees) {
    return degrees * Math.PI / 180;
}

function sin(x) {
    x = toRadians(x);
    return x - Math.pow(x, 3) / factorial(3) + Math.pow(x, 5) / factorial(5) - Math.pow(x, 7) / factorial(7);
}

function cos(x) {
    x = toRadians(x);
    return 1 - Math.pow(x, 2) / factorial(2) + Math.pow(x, 4) / factorial(4) - Math.pow(x, 6) / factorial(6);
}

const angle = 30;
console.log(`sin(${angle}) = ${sin(angle)}`);
console.log(`cos(${angle}) = ${cos(angle)}`);
