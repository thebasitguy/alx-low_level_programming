0x0A. C - argc, argv

Tasks

0-whatsmyname.c:
A program that prints its name, followed by a new line.
If you rename the program, it will print the new name, without having to compile it again.
You should not remove the path before the name of the program.

1-args.c:
A program that prints the number of arguments passed into it.
Program should print a number, followed by a new line.

2-args.c:
A program that prints all arguments it receives.
All arguments should be printed, including the first one.
Only print one argument per line, ending with a new line.

3-mul.c:
A program that multiplies two numbers.
ou can assume that the two numbers and result of the multiplication can be stored in an integer.
If the program does not receive two arguments,t prints Error, followed by a new line and returns 1.

4-add.c:
A program that adds positive numbers.
If no number is passed to the program, print 0, followed by a new line.
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1.
You can assume that numbers and the addition of all the numbers can be stored in an int.

100-change.c:
A program that prints the minimum number of coins to make change for an amount of money.
Usage: ./change cents
Where cents is the amount of cents you need to give back.
If the number of arguments passed to the program is not exactly 1, print Error, followed by a new line, and return 1.
Use atoi to parse the parameter passed to the program.
If the number passed as the argument is negative, print 0, followed by a new line.
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
