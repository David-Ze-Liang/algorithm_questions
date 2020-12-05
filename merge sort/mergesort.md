## divide-and-conquer
# Merge Sort

### Question description:

Given a integer array with length n. Sort the array using merge sort algorithm.

see:<https://www.acwing.com/problem/content/789/>  
**Input:**
Two lines:  
The first line is the integer n（1<=n<=100000）;  
The second line includes n integers in the range of [1,1e9].  
e.g.
```
5 
2 4 1 5 3
```
**Output:**
One Line:  
The sorted array.
e.g.
```
1 2 3 4 5
```
### Analysis

The merge sort algorithm uses **divide-and-conquer** paradigm. Unlike the quick sort, we split the array from the middle(rather than the selected pivot), and we make recursion before other operations.

### 1. Split the array 
(from the middle).

### 2. Recursively call the merge sort function.

### 3. Merge the two sorted array into one.(⛤)
(use two extra pointers)
