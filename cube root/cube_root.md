## binary search
# Cube Root

### Question description:

Given a float n and return its cube root.

see: <https://www.acwing.com/problem/content/792/>  

**Input:**
One line: the float number n (-10000<=0<=10000).  
e.g.
```
1000.00
```
**Output:**
One Line: the cube root of n (keep 6 decimal places).  
e.g.
```
10.000000
```
### Analysis
Binary search on real value usually does not have boundary problems, so we can simply use the middle value to divide the interval.
