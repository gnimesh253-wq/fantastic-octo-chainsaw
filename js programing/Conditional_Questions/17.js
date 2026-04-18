//ATM Simulation
let pin = 1234;
let amount = 500;
let balance = 2000;

if (pin === 1234) {
    if (amount % 100 === 0) {
        if (amount <= balance) {
            console.log("Withdraw Success");
        } else {
            console.log("Insufficient Balance");
        }
    } else {
        console.log("Enter multiple of 100");
    }
} else {
    console.log("Wrong PIN");
}
