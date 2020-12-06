## divide-and-conquer
# Number of Inversion Pairs

### Question description:

Given a integer array of length n. Calculate the number of inversion pairs in the array.  
Define: For the i-th and j-th elements in the array a, if i<j and a[i]>a[j], then (i,j) is an inversion pair.

see:<https://www.acwing.com/problem/content/790/>  

**Input:**
Two lines:  
The first line is the integer n (1<=n<=100000);  
The second line includes n integers in the range of [1,1e9].  
e.g.
```
6 
2 3 4 5 6 1
```
**Output:**
One Line:  
The number of inversion pairs in the array.  
e.g.
```
5
```
### Analysis  
We use a method similar to merge sort to solve this question.  
First we divide the array into two parts from the middle, then we divide inversion pairs into two types: 1) the two elements are in the same part of the array; 2) the two elements are in different parts of the array. For the first type, we solve it recursively. For the second type, we calculate it when merging.

#### Merge  
When we merge the two sorted parts, we use two pointers: `i` for the first part and `j` for the second part. When `a[i]`>`a[j]`, it means all elements in the first part after `a[i]`(included) can form an inversion pair with `a[j]`.

> Note: There are at most 10^6^ elements in the array. At the worst case, i.e. all elements are in descending order, the number of inversion pairs is (n-1)+(n-2)+...+1 = n(n-1)/2 ≈ 5* 10^11^ > INT_MAX(2147483647 = 2^31^ -1). Thus, we use *long long* to store the number of inversion pairs.
