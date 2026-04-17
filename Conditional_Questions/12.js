//Triangle Type
a = 60;
b = 60;
c = 60;

if (a + b + c === 180) {
    if (a === b && b === c) {
        console.log("Equilateral");
    } else if (a === b || b === c || a === c) {
        console.log("Isosceles");
    } else {
        console.log("Scalene");
    }
} else {
    console.log("Invalid Triangle");
}
