## two pointers
# Jduge Subsequence
### Question description:

Given an integer array A of length n and an integer array B of length m. Determine whether A is a subsequence of B.  
Define: elements in a subsequence are in the same order as in the original sequence. e.g. `a1 a3 a5` is a subsequence of `a1 a2 a3 a4 a5`.

see: <https://www.acwing.com/problem/content/2818/>  

**Input:**
First line: integers n, m;  
Second line: n integers in array A.
Third line: m integers in array B.    
1≤n≤m≤10000;  
-10^9<= element in array<=10^9.  
e.g.
```
3 5
1 3 5
1 2 3 4 5
```
**Output:**
If A is a subsequence of B, print `Yes`. Otherwise, print `No`.
e.g.
```
Yes
```
