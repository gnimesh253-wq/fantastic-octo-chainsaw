//Electricity Bill Calculator
let unit = 250;
let bill = 0;

if (unit <= 100) {
    bill = unit * 1.5;
} else if (unit <= 300) {
    bill = unit * 2.5;
} else if (unit <= 500) {
    bill = unit * 4;
} else {
    bill = unit * 5;
}

console.log("Bill =", bill);
