//Tax Calculator
let income = 550000;
let tax = 0;

if (income > 0 && income <= 250000) {
  tax = 0;
} else if (income > 250000 && income <= 500000) {
  tax = (income - 250000) * 0.05;
} else if (income > 500000 && income <= 1000000) {
  tax = 250000 * 0.05 + (income - 500000) * 0.2;
} else {
  tax = 250000 * 0.05 + 500000 * 0.2 + (income - 1000000) * 0.3;
}

tax = tax + tax * 0.04;

console.log("Tax =", tax);
