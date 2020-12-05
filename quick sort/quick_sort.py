def quicksort(lst, l, r):
    if l >= r:
        return

    pivot = lst[(l + r) >> 1]
    i = l - 1
    j = r + 1
    while i < j:
        while True:
            i += 1
            if lst[i] >= pivot:
                break
        while True:
            j -= 1
            if lst[j] <= pivot:
                break
        if i < j:
            tmp = lst[i]
            lst[i] = lst[j]
            lst[j] = tmp
    quicksort(lst, l, j)
    quicksort(lst, j + 1, r)


while True:
    try:
        n = int(input())
        lst = list(map(int, input().split()))
        quicksort(lst,0,n-1)
        for item in lst:
            print(item, end=' ')
    except:
        break
