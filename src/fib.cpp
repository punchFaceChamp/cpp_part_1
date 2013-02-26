/**********************************************
program: Fib.cpp
author: Y. Solow
date: Feb 29, 2012
synopsis: to generate N Fibonacci numbers
***********************************************/
#include <iostream>

using namespace std;

int main()
{
     //define first two fibonacci series numbers.
    int fib1 = 0;
    int fib2 = 1;

     //declare the variable to store the next number of fibonacci series
    int fib3;
    
     //declare the variable to store how many numbers to be printed. Default is 2.
     int numbers = 2;

     //the counter to keep track how many numbers are printed.
     int counter = 2;
     
     //Ask user how many numbers of the fibonacci series need to be printed.
     std::cout << "How many Fibonacci number you need ? : " ;


    //Store the number.
    std::cin >> numbers;

     //If number entered is less than 3, exit the program.
    if (numbers < 3) return 0;

     std::cout << "File: " << __FILE__ << endl;
     std::cout << "Date: " << __DATE__ << endl;

     //Print the first two element.
    std::cout << fib1 << "\t" << fib2;

     //do-while loop to calculate the new element of the series and printing the same.
    do {
        counter++;
        fib3 = fib1 + fib2;
        std::cout << "\t" << fib3;
        fib1 = fib2;
        fib2 = fib3;    
    } while (counter <= numbers);

    std::cout << std::endl;
    system("pause");
     return 0;
}

/*
File: fib.cpp
Date: Feb 29 2012
0       1       1       2       3       5       8       13      21      34      55      89      144     233     377     610     987     1597    2584    4181    6765    10946   17711   28657   46368
*/
