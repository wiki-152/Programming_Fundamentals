function swap(a, b) {
    console.log(`Before swap: A = ${a}, B = ${b}`);
    a = a + b;
    b = a - b;
    a = a - b;
    console.log(`After swap: A = ${a}, B = ${b}`);
}

let a = 5;
let b = 10;
swap(a, b);
