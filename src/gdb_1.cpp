/*
I

5% more GDB.cpp
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main (void)
{
        const int data[5] = {1, 2, 3, 4, 5};
        int i, sum;
        for (i = 0; i >= 0; ++i)
        sum += data[i];
        printf ("sum = %i\n", sum);
        return 0;
}

/************************ Results ********************/
/*
5% ./GDB
Segmentation Fault (core dumped)

i5% gdb GDB
GNU gdb 6.8
Copyright (C) 2008 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "sparc-sun-solaris2.11"...

gdb run
Starting program: /home1/y/ys44/GDB 

Program received signal SIGSEGV, Segmentation fault.
0x00010c14 in main () at GDB.cpp:11
11              sum += data[i];

(gdb) print i
$1 = 587

(gdb) print sum
$2 = 1326725334

(gdb) print data
$3 = {1, 2, 3, 4, 5}
(gdb)

(gdb) quit
The program is running.  Exit anyway? (y or n) y
*/
