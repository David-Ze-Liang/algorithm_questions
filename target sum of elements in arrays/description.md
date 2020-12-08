## two pointers
# Sum of elements in arrays

### Question description:

Given two ascending integer arrays A and B, and a target value x. Array index starts from 0. Return a pair (i,j) such that A[i]+B[j]=x.     
The data is guaranteed to have a unique solution.

see: <https://www.acwing.com/problem/content/802/>  

**Input:**
First line: integers n, m, x, representing the length of A, the length of B, and the target value x;  
Second line: n integers in array A.
Third line: m integers in array B.    
1≤n,m≤100000;  
1<= element in array<=10^9.  
e.g.
```
4 5 6
1 2 4 7
3 4 6 8 9
```
**Output:**
Two integers: i and j.
e.g.
```
1 1
```
