/*************************************
 program: GDB_Sample.cpp
 Author: Y. Solowiejczyk
Date:  Feb 20, 2012
Synopsis: To demonstrate using the gdb debugger
****************************************/

#include <stdio.h>
#include <stdlib.h>

struct date {
	int month;
	int day;
	int year;
};
struct date foo (struct date x)
{
	++x.day;
	return x;
}
int main (void)
{
struct date today = {10, 11, 2004};
int array[5] = {1, 2, 3, 4, 5};
struct date *newdate, foo ();
char *string = "test string";
int i = 3;
newdate = (struct date *) malloc (sizeof (struct date));
newdate->month = 11;

newdate->day = 15;
newdate->year = 2004;
today = foo (today);
free (newdate);
	return 0;
}

/****************************** Results *******************
g++ -g GDB_Sample.cpp -o GDB_Sample
i5% gdb GDB_Sample
GNU gdb 6.6
Copyright (C) 2006 Free Software Foundation, Inc.
GDB is free software, covered by the GNU General Public License, and you are
welcome to change it and/or distribute copies of it under certain conditions.
Type "show copying" to see the conditions.
There is absolutely no warranty for GDB.  Type "show warranty" for details.
This GDB was configured as "sparc-sun-solaris2.10"...

(gdb) list 1,10
1       *************************************
2        program: GDB_Sample.cpp
3        Author: Y. Solowiejczyk
4       Date:  Feb 20, 2012
5       Synopsis: To demonstrate using the gdb debugger
6       ****************************************
7       
8       #include <stdio.h>
9       #include <stdlib.h>
10      struct date {

(gdb) break foo
Breakpoint 1 at 0x10784: file GDB_Sample.cpp, line 17.
(gdb) run
Starting program: /home1/y/ys44/GDB_Sample 
warning: Temporarily disabling breakpoints for unloaded shared library "/usr/lib/ld.so.1"

Breakpoint 1, foo (x={month = 10, day = 11, year = 2004}) at GDB_Sample.cpp:17
17      ++x.day;
(gdb) step 
18      return x;
gdb) step
19      }
(gdb) step
main () at GDB_Sample.cpp:32
32      free (newdate);
(gdb) print today
$1 = {month = 10, day = 12, year = 2004}
(gdb) print array
$2 = {1, 2, 3, 4, 5}

gdb) break foo
Note: breakpoint 1 also set at pc 0x10784.
Breakpoint 3 at 0x10784: file GDB_Sample.cpp, line 17.
 (gdb) continue
Continuing.

Breakpoint 1, foo (x={month = 10, day = 11, year = 2004}) at GDB_Sample.cpp:17
17      ++x.day;
*/