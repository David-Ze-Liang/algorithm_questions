## difference
# Difference Matrix

### Question description:

Given an n\*m matrix, and q operations. Each operation has 5 integers, x1, y1, x2, y2, c. (x1, y1) and (x2, y2) are the top-left  and bottom-right coordinates of a submatrix. Each operation add c on every element in the submatrix. Return the matrix after all operations.

see: <https://www.acwing.com/problem/content/800/>  

**Input:**
First line: integers n, m, q;  
Following n lines. Each line contains m integers, representing the matrix.   
Following q lines. Each line contains 5 integers x1, y1, x2, y2, c.   
1≤n,m≤1000,  
1≤q≤100000,  
1≤x1≤x2≤n,  
1≤y1≤y2≤m,  
−1000≤c≤1000,  
−1000≤elements in the matrix≤1000.

e.g.
```
3 4 3
1 2 2 1
3 2 2 1
1 1 1 1
1 1 2 2 1
1 3 2 3 2
3 1 3 4 1
```
**Output:**
n lines, representing the matrix after all operations.
e.g.
```
2 3 4 1
4 3 4 1
2 2 2 2
```

### Analysis  
Similar to 1D difference calculation, the difference matrix is the inverse operation of the prefix sum. For a matrix A[n][m], the matrix B[n][m] is the difference matrix of A[n][m], if A[n][m] is the prefix sum of B[n][m].  
To add c on a submatrix(x1,y1,x2,y2) of A[n][m], we can follow these steps:  
1) add c on b[x1][y1], which means adding c on elements in submatrix(x1,y1,n,m).  
2) minus c on b[x2+1][y1], which means elements in submatrix(x2+1,y1,n,m) minus c.  
3) minus c on b[x1][y2+1], which means elements in submatrix(x1,y2+1,n,m) minus c.  
4) add c on b[x2+1][y2+1], which means adding c on elements in submatrix(x2+1,y2+1,n,m).  

Actually we do not need to construct B[n][m]. We can consider A[n][m] is a zero matrix from beginning, then the corresponding B[n][m] is a zero matrix. Then for each a[i][j], we can treat it like adding a[i][j] to the submatrix(i,j,i,j) of A[n][m], and we can just follow steps above to form the B[n][m].
