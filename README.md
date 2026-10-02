# CS121-Project-5-File-IO
### In this project, we get a csv file with each line having 2 numbers and a piece of text. The program opens and reads this file, converts the numbers into integers, adds them, and prints the piece of text that many times.

```
include fstream, iostream, and string



var ifstream infile
var string currentLine
var stringstream converter
var stringstream ss
var string num1S
var string num2S
var int num1
var int num2
var int sum
var string text

open the infile
while not at end of file (getline(infile, currentline)) <--- this not only gets the current line in the file and puts it in current line, but also returns true or false whether or not there is a new line. two for one!
    clear converter and ss
    
    put currentline in ss

    get everything in ss up to the first 's' and put it in num1S
    put that in converter, and then put converter in num1, converting it from string to int
    clear converter

    get everything in ss up to the first 's' and put it in num2S
    put that in converter, and then put converter in num2, converting it from string to int
    clear converter

    get the last item in ss and put it in text
    it doesnt need to be converted because it is already a string

    add num1 and num2 and put it in sum

    for sum
        print text
```