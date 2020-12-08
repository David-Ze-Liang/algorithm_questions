## two pointers
# Longest continuous unrepeated subsequence

### Question description:

Given an integer sequence of length n, find the longest continuous unrepeated subsequence and return its length.

see: <https://www.acwing.com/problem/content/801/>  

**Input:**
First line: integers n;  
Second line: n integers in range[0,100000].    
1≤n≤100000.   
e.g.
```
10
9 3 6 9 5 10 1 2 3 9
```
**Output:**
The length of the longest continuous unrepeated subsequence.  
e.g.
```
7
```
ps. The longest continuous unrepeated subsequence above is `6 9 5 10 1 2 3`.  

### Analysis  
To solve this problem, the naive way is to check each subsequence, which makes it an *O(n^2)* process.  
Using two pointers makes the problem *O(n)*. We use pointer `i` as the end of the subsequence and pointer `j` as the beginning of the subsequence. When `i` moves one step right, we check the subsequence [j,i] whether it has repeat elements. If does, the repeated element must be a[i] (since before we add a[i] to the subsequence, the subsequence is still valid). So we update `j` to the position where a[i] first appear in the subsequence.  
We use a hash table(or an array if data range is not huge) to record how many times each element in the subsequence appears. When we move pointer `i` or `j`, we change the record correspondingly so that all record are up-to-date, and we can use this record to check whether the new added element a[i] has a repeat in the subsequence.
