//Looping a Triangle
let string = "";
for (let i = 1; i <= 7; i++) {
    for (let j = 1; j <= i; j++) {
        string += "#"
    }
    if (i != 7) {
        string += "\n"
    }
}
console.log(string)