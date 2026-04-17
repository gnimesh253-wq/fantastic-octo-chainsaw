//Ticket Price Calculator
age = 25;
let weekend = true;
let price = 0;

if (age < 3) {
    price = 0;
} else if (age <= 12) {
    price = 200;
} else if (age <= 59) {
    price = 500;
} else {
    price = 300;
}

if (weekend && price > 0) {
    price += 100;
}

console.log("Ticket =", price);

