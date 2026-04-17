// Rock Paper Scissors
let p1 = "rock";
let p2 = "scissors";

if (p1 === p2) {
    console.log("Draw");
} else if (
    (p1 === "rock" && p2 === "scissors") ||
    (p1 === "paper" && p2 === "rock") ||
    (p1 === "scissors" && p2 === "paper")
) {
    console.log("Player 1 Wins");
} else {
    console.log("Player 2 Wins");
}
