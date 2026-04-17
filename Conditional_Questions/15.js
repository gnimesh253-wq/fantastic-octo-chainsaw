//BMI Category
let weight = 65;
let height = 1.7;
let bmi = weight / (height * height);

if (bmi < 18.5) {
    console.log("Underweight");
} else if (bmi < 25) {
    console.log("Normal");
} else if (bmi < 30) {
    console.log("Overweight");
} else {
    console.log("Obese");
}
