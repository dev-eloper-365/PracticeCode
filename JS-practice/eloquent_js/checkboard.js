//Program to print 8x8 checkerboard pattern
result = "";
for (let i = 1; i < 8; i++) {
    for (let j = 0; j < 8; j++) {
        if (i % 2 == 0) {
            result += (j % 2 == 0) ? " " : "#"
        }
        else {
            result += (j % 2 == 0) ? "#" : " "
        }
    }
    result += '\n'
}

console.log(result)