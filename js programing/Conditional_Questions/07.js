// Calculator using Switch
let n1 = 10;
let n2 = 5;
let op = "+";

switch (op) {
  case "+":
    console.log(n1 + n2);
    break;
  case "-":
    console.log(n1 - n2);
    break;
  case "*":
    console.log(n1 * n2);
    break;
  case "/":
    if (n1 !== 0 && n2 !== 0) {
      console.log(n1 / n2);
    } else {
      console.log("Division by zero");
    }
    break;
  default:
    console.log("Invalid operator");
}
