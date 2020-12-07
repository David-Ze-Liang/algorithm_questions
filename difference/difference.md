## difference
# Difference

### Question description:

Given an integer array of length n, and m operations. Each operation has 3 integers, l, r, c, which mean add c to every element from l-th to r-th in the array. Return the array after all operations.

see: <https://www.acwing.com/problem/content/799/>  

**Input:**
First line: integers n, m;  
Second line: n integers representing the array.  
Following m lines. Each line contains 3 integers l, r, c.   
1≤n,m≤100000,  
1≤l≤r≤n,  
−1000≤c≤1000,  
−1000≤element in the array≤1000

e.g.
```
6 3
1 2 2 1 2 1
1 3 1
3 5 1
1 6 1
```
**Output:**
One line. Elements after all operations.
e.g.
```
3 4 5 3 4 2
```
### Definition  
Difference is the inverse operation of **prefix sum**. E.g we have an array A[n]:a_1,a_2,...,a_n. We can form the difference array B[n]:  
b_1 = a_1  
b_2 = a_2 - a_1  
b_3 = a_3 - a_2  
...  
b_n = a_n - a_n-1  
B[n] is the difference of A[n], and A[n] is the prefix sum of B[n].

### Analysis  
If we do each operation directly on A[n], each operation takes *O(n)*, and m operation takes *O(mn)* = *O(n^2)* time.  
When we do operation on B[n], each operation takes only *O(1)*, as we only change b[l] and b[r+1].
