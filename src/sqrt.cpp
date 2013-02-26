#include <stdio.h>
#include <iostream>
using namespace std;

union FLOAT{
        float U;
        char C[4];
};
FLOAT G; 		//global declaration

float absoluteValue (float x)
{
if ( x < 0 )
x = -x;
return (x);
}
// Function to compute the square root of a number
float squareRoot (float x)
{
        const float epsilon = .00001;
        float guess = 1.0;
        cout << "Input guess value:";
        cin >> guess;
        while ( absoluteValue (guess * guess - x) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;  		//iterative function
        cout << "guess = " << guess << endl;		
        G.U = guess;
        printf("G = %4X %4X %4X %4X \n", G.C[0], G.C[1], G.C[2], G.C[3]);  
        }
        return guess;
}
int main (void)
{

        float X;
        cout << "input number: ";
        cin >> X;
        cout << "sqrt(" << X << ")= "  << squareRoot(X) << endl;

        return 0;
}

/************************* Results ***************************/
/*
ys44@i5 $ ./SQRT
input number: 144.0
sqrt(144)= Input guess value:3.9999
guess = 20.0004
G =   41 FFFFFFA0    0 FFFFFFD2 
guess = 13.6001
G =   41   59 FFFFFF9A   20 
guess = 12.0941
G =   41   41 FFFFFF81 FFFFFF90 
guess = 12.0004
G =   41   40    1 FFFFFF80 
guess = 12
G =   41   40    0    0

./SQRT
input number: 1023
sqrt(1023)= Input guess value:12.0
guess = 48.625
G =   42   42 FFFFFF80    0 
guess = 34.8318
G =   42    B   53 FFFFFFBE 
guess = 32.1008
G =   42    0   67   2C 
guess = 31.9846
G =   41 FFFFFFFF FFFFFFE0   6C 
guess = 31.9844
G =   41 FFFFFFFF FFFFFFDF FFFFFFFE 
31.9844

i5% !!
./SQRT
input number: 2
sqrt(2)= Input guess value:0.5
guess = 2.25
G =   40   10    0    0 
guess = 1.56944
G =   3F FFFFFFC8 FFFFFFE3 FFFFFF8E 
guess = 1.42189
G =   3F FFFFFFB6    0 FFFFFF81 
guess = 1.41423
G =   3F FFFFFFB5    5 FFFFFFA1 
guess = 1.41421
G =   3F FFFFFFB5    4 FFFFFFF3
*/
