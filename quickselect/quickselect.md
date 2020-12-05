## divide-and-conquer
# Quickselect

### Question description:

Given a integer array with length n and an integer k. Return the k-th smallest number in the array(1<=n<=100000).

see:<https://www.acwing.com/problem/content/788/>  
**Input:**
Two lines:  
The first line is the integers n and k;  
The second line includes n integers in the range of [1,1e9].  
e.g.
```
5 3
2 4 1 5 3
```
**Output:**
One Line:  
The k-th smallest number in the array.
e.g.
```
3
```
### Analysis

This question is similar to the [quick sort question](https://github.com/David-Ze-Liang/algorithm_questions/tree/main/quick%20sort). The difference is that quickselect only executes recursively in the half which contains the k-th smallest element.

Time complexity:
$$
n + \frac{n}{2}
$$

