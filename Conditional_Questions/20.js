//Grade + Scholarship
marks = 92;
let category = "General";

if (marks >= 90) {
  console.log("Grade A");
  if (category === "general") {
    console.log("Full Scholarship");
  } else {
    console.log("Full Scholarship + ₹5000 Bonus");
  }
} else if (marks >= 75) {
  console.log("Grade B");
  if (category === "general") {
    console.log("50% Scholarship");
  } else {
    console.log("75% Scholarship");
  }
} else if (marks >= 60) {
  console.log("Grade C");
  console.log("No Scholarship");
} else {
  console.log("Fail");
  console.log("No Scholarship");
}
