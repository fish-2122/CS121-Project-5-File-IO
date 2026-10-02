# CS121-Project-5-File-IO

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
while not at end of file (getline(infile, currentline))
    clear converter and ss
    
    put currentline in ss

    get everything in ss up to the first 's' and put it in num1S
    put that in converter, and then put converter in num1
    clear converter

    get everything in ss up to the first 's' and put it in num2S
    put that in converter, and then put converter in num2
    clear converter

    get the last item in ss and put it in text
    it doesnt need to be converted because it is already a string

    add num1 and num2 and put it in sum

    for sum
        print text
```