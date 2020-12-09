## bit operation
# How many "1" in a binary number  

### Question description:

Given an integer array of length n. Return the number of "1" in the binary represemntation of each element in the array.  


see: <https://www.acwing.com/problem/content/803/>  

**Input:**
First line: integer n;  
Second line: n integers in array.  
1≤n≤00000;  
0<= element in array<=10^9.  
e.g.
```
5
1 2 3 4 5
```
**Output:**
One line: n integers. The i-th integer is the number of "1" in the binary represemntation of i-th element in the array.
e.g.
```
1 1 2 1 2
```
### Analysis
To start, we can use ">>" (right shift operator) to move each bit to the most right place, then use "&1" to see whether this bit is "0" or "1".
