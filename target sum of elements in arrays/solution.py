while True:
    try:
        n, m, x = list(map(int, input().split()))
        lst1 = list(map(int, input().split()))
        lst2 = list(map(int, input().split()))
        i = 0
        j = 0
        while i < n - 1 and lst1[i] + lst2[0] < x:
            i += 1
        while j < m:
            while lst1[i] + lst2[j] > x:
                i -= 1
            if lst1[i] + lst2[j] == x:
                print(i, j)
                break
            j += 1
    except:
        raise
