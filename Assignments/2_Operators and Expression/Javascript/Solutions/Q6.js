function calculateDistance(u, t, a) {
    return u * t + 0.5 * a * t * t;
}

const u = 5; // initial velocity
const t = 10; // time
const a = 2; // acceleration
const distance = calculateDistance(u, t, a);
console.log(`Distance traveled: ${distance}`);
