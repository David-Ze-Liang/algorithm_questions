## prefix sum
# Prefix Sum

### Question description:

Given an integer array of length n and m querys. Each query is a pair of *l* and *r*， and we want to know the sum from l-th to r-th elements(indluded) in the array.

see: <https://www.acwing.com/problem/content/797/>  

**Input:**
First line: integers n and m;  
Second line: n integers in the array;  
In the following m lines, each line contains two integers l and r.  
1 <= l <= r <= n;  
1 <= n,m <= 100000;  
-1000 <= element in the array <= 1000
```
5 3
2 1 3 6 4
1 2
1 3
2 4
```
**Output:**
m lines. Each line contains the result of a query.  
e.g.
```
3
6
10
```
### Analysis
