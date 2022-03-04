# CS-219-Project-part-2
# Build Environment
Visual Studio Code

Apple clang 12.0.5
# Executable & Compiling 
To compile files: Type 'make' into the terminal

To execute files: After compiling using 'make', an executable titled 'hexCalculator' should appear. Type './hexCalculator' to launch executable

To clean .o and executable: Type 'make clean' into the terminal. This will remove files with .o and the executable 
# Running The Program
After launching the executable 'hexCalculator', instructions should appear within the terminal display.

    Input the filename.
  
    Example: filename.txt

# Note:
The txt file given for the project has been renamed 'hex.txt'. As such, input the filename 'hex.txt'.

Modify bitwise values to calculate different values with varying operators. Current values used for all new operators is 0xAAA5555   0x555AAAA.

Source and Header files were created for ease of access and for future improvement on code.

Based off of previous project: https://github.com/UNR-Teaching/programmingassignment1-2012-Chiang-Andy
# Credits
https://www.cplusplus.com/reference/ios/hex/

https://stackoverflow.com/questions/48833976/what-is-uint32-t/48834118

https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c

https://www.cprogramming.com/tutorial/lesson10.html

https://www.cplusplus.com/reference/sstream/stringstream/

https://stackoverflow.com/questions/1070497/c-convert-hex-string-to-signed-integer

https://stackoverflow.com/questions/43028865/how-to-print-hex-from-uint32-t

https://stackoverflow.com/questions/49068932/converting-stdstring-to-uint32-t

https://www.programiz.com/cpp-programming/bitwise-operators
# Project Instructions
You are tasked with designing a machine language simulator. This project must be written in C or C++.
If you elect to use C++ be careful with your objects. Your code should be versatile enough to be modified
for future assignments with more than one operation. For part 1 you must only implement the ADD
operation.You will be given a text file for input on this project; following the format discussed in the
Theory section. An example operation will be in the form

ADD 0x12345 0x678

When the operation to be performed is addition and it is adding the two numbers 0x12345 and 0x678.
These numbers will be hexadecimal format. Recall that the prefix of hexadecimal is always ”0x”and this
is not to be considered in any conversion process. You might find it useful to use the uint32t in C/C++
to store the number as an unsigned 32-bit number.
Using the provided text file as an example input. You will be tasked with creating a program that will
read the command (ADD, but future projects may have more) and it will perform the addition between
the two hexadecimal numbers. HINT: You may find it helpful to store this value in a variable, should you
ever need to retrieve the information or store it in a simulated register. But this is not required for part 1. 
The result of the addition operation must be displayed to the terminal or build environment.
Your code should follow proper code commenting and indentation procedures.
Please refer to the documents on canvas for help on formatting.

# Extension (Part 2)
ADD - Add the operands

AND - Do a bitwise AND of the operands

ASR - Do a 1-bit arthmetic shift right on the first operand

LSR - Do a 1-bit logical shift left on the first operand

NOT - Do a bitwise NOT on the first operand

ORR - Do a bitwise OR of the operands

SUB - Subtract the second operand from the first operand

XOR - Do a bitwise exclusive OR of the operands

# Rubic
45 points: 5 points will be given for each operation and respectively displaying the operation, operands and result to the terminal

30 points: 30 points will be given if your code both compiles and runs. If it compiles but doesn’t run you will lose 15 points.

10 points: 10 points will be given if you provide the makefile as requested.

10 points: 10 points will be given if you provide a text file for input

5 points: 5 points will be given if you use the proper data type as detailed in this document.
