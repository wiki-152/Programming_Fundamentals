function convertSeconds(seconds) {
    const hours = Math.floor(seconds / 3600);
    seconds %= 3600;
    const minutes = Math.floor(seconds / 60);
    seconds %= 60;
    return { hours, minutes, seconds };
}

const totalSeconds = 7802;
const result = convertSeconds(totalSeconds);
console.log(`${result.hours} hrs ${result.minutes} mins ${result.seconds} secs`);
