// program GDB_2.cpp

#include <stdio.h>
#include <stdlib.h>
struct date {
int month;
int day;
int year;
};

void foo ()
{
        printf("hello\n");
}
int main (void)
{
        struct date today = {10, 11, 2004};
        int array[5] = {1, 2, 3, 4, 5};
        struct date *newdate;
        char S[ ]= "test string";
        int i = 3;
        newdate = (struct date *) malloc (sizeof (struct date));
        newdate->month = 11;
        newdate->day = 15;
        newdate->year = 2004;
        foo ();
        free (newdate);
        return 0;
}

/******************* Results *****************/
/*
i5% ./GDB_2
hello


i5% gdb GDB_2
GNU gdb 6.8
Copyright (C) 2008 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "sparc-sun-solaris2.11"...
(gdb) break foo 
Breakpoint 1 at 0x10af4: file GDB_2.cpp, line 10.
(gdb) run
Starting program: /home1/y/ys44/GDB_2 

Breakpoint 1, foo () at GDB_2.cpp:10
10              printf("hello\n");
(gdb) step
hello
11      }
(gdb) step
main () at GDB_2.cpp:24
24              free (newdate);
(gdb) print newdate
$1 = (date *) 0x20f08
(gdb) run
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home1/y/ys44/GDB_2 
[New LWP    1        ]

Breakpoint 1, foo () at GDB_2.cpp:10
10              printf("hello\n");
(gdb) print newdate
No symbol "newdate" in current context.
(gdb) print main::newdate
No symbol "newdate" in specified context.
(gdb) s
hello
11      }
(gdb) print newdate
No symbol "newdate" in current context.
(gdb) s     
main () at GDB_2.cpp:24
24              free (newdate);
(gdb) print newdate
$2 = (date *) 0x20f08
(gdb) print newdate->day
$3 = 15
(gdb) print newdate->year
$4 = 2004
(gdb) print array
$5 = {1, 2, 3, 4, 5}
(gdb) print arry[5]
No symbol "arry" in current context.
(gdb) print array[0]
$6 = 1
(gdb) info locals
today = {month = 10, day = 11, year = 2004}
array = {1, 2, 3, 4, 5}
S = "test string"
i = 3
newdate = (date *) 0x20f08
(gdb) s
25              return 0;
(gdb) print today
$7 = {month = 10, day = 11, year = 2004}
(gdb) 
*/
