function calculateDOB(ageYears, ageMonths, ageDays, referenceDate) {
    const dob = new Date(referenceDate);
    dob.setFullYear(dob.getFullYear() - ageYears);
    dob.setMonth(dob.getMonth() - ageMonths);
    dob.setDate(dob.getDate() - ageDays);
    return dob.toLocaleDateString();
}

const referenceDate = new Date(2022, 9, 1); // October 1, 2022
const ageYears = 25;
const ageMonths = 2;
const ageDays = 15;
const dob = calculateDOB(ageYears, ageMonths, ageDays, referenceDate);
console.log(`Date of Birth: ${dob}`);
