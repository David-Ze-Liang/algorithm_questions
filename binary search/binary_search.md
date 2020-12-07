## binary search
# Range of Number

### Question description:

Given an array of *n* elements in ascending order and *q* queries.  
For each query, return its starting position and ending positions in the array (counting from 0).

see:<https://www.acwing.com/problem/content/791/>  

**Input:**
The first line is the integers n and q;  
The second line includes n integers in the range of [1,1e4].  
In the following q lines, each line includes an query element k.  
1<=n<=100000  
1<=q<=10000  
1<=k<=10000  
e.g.
```
6 3
1 2 2 3 3 4
3
4
5
```
**Output:**
q lines. Each line includes two integers, representing the starting and ending positions.
If the query element is not in the array, return *-1 -1*.
e.g.
```
3 4
5 5
-1 -1
```
### Analysis

Binary search on integers usually have boundary problems. There are two templates to avoid these issues.  

#### 1. Divide the range into [l,mid] and [mid+1,l]  
```
int bsearch_1(int l, int r)
{
    while (l < r)
    {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    return l;
}
```
#### 2. Divide the range into [l,mid-1] and [mid,l]
int bsearch_2(int l, int r)
{
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}  
