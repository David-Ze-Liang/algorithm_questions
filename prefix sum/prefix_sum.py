while True:
    try:
        n, m = list(map(int, input().split()))
        lst = list(map(int, input().split()))
        s = [0]
        for i in range(n):
            s.append(s[-1] + lst[i])
        for _ in range(m):
            l, r = list(map(int, input().split()))
            print(s[r] - s[l - 1])
    except:
        break
