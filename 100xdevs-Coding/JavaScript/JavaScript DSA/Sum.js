function sum(...args) {

    let sum1 = 0;

    for (let i = 0; i < args.length; i++) {
        sum1 += args[i]; // ek-ek value sum mein add
    }

    return sum1;
}

console.log(sum(100, 200, 300, 400));

module.exports = sum;