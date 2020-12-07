while True:
    try:
        n, m = list(map(int, input().split()))
        lst = list(map(int, input().split()))
        dif = [lst[0]]
        for i in range(1, n):
            dif.append(lst[i] - lst[i - 1])
        for _ in range(m):
            l, r, c = list(map(int, input().split()))
            dif[l - 1] += c
            if r < n:
                dif[r] -= c
        last_element = 0
        for item in dif:
            last_element = item + last_element
            print(last_element, end=' ')

    except:
        break
