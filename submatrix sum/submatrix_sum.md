## prefix sum
# Sum of Submatrix

### Question description:

Given an m\*n matrix and q query, and eachquery contains 4 integers x1, y1, x2, y2, representing the top-left coordinate and the bottom right coordinate of the submatrix.

see: <https://www.acwing.com/problem/content/798/>  

**Input:**
First line: integers n, m, q;  
Following n lines. Each line contains m integers. Represent the matrix.
Following q lines. Each line contains 4 integers x1, y1, x2, y2.  
1≤n,m≤1000;  
1≤q≤200000;  
1≤x1≤x2≤n;  
1≤y1≤y2≤m;  
−1000≤element in the matrix≤1000.  
e.g.
```
3 4 3
1 7 2 4
3 6 2 8
2 1 2 3
1 1 2 2
2 1 3 4
1 3 3 4
```
**Output:**
q lines. Each line contains the result of a query.  
e.g.
```
17
27
21
```
### Analysis
