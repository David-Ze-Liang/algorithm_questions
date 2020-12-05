## divide-and-conquer
# Quick Sort

### Question description:

Given a integer array with length n. Sort the array in ascending order and print the result. (1<=n<=100000)

see:<https://www.acwing.com/problem/content/787/>  
**Input:**
Two lines:  
The first line is the integer n;  
The second line includes n integers in the range of [1,1e9].  
e.g.
```
5
2 5 1 3 4
```
**Output:**
One Line:  
The sorted integers in the array.  
e.g.
```
1 2 3 4 5
```
### Analysis

The quick sort algorithm use **divide-and-conquer** paradigm.

### 1. Select a pivot
There are multiple methods to select the pivot in the array. 1) use the most left element; 2) use the middle element;
3) use the most right element;
4) randomly pick an element.
### 2. Split the range based on the pivot (⛤)
After the adjustment, all elements on the left-hand side of pivot is less than or equal to the pivot, and all elements on the right-hand side of pivot is larger than or equal to the pivot.

l&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;r  
\=\=\=\=\=\=\=\=\=\=  
i&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;&ensp;j

### 3. Recursion
Sort the laft part and the right part of the array recursively.

> Note: We use `scanf` to read inpt data. It is usually much faster than `cin`. (see [scanf](https://www.runoob.com/cprogramming/c-function-scanf.html))

