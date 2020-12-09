while True:
    try:
        n, m = list(map(int, input().split()))
        lst1 = list(map(int, input().split()))
        lst2 = list(map(int, input().split()))
        i = 0
        for j in range(m):
            if lst1[i] == lst2[j]:
                i += 1
                if i == n:
                    break
        if i == n:
            print("Yes")
        else:
            print("No")
            
    except:
        raise
