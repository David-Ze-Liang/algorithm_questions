def merge_sort(lst, l, r, tmp_lst):
    if l >= r: return

    mid = l + r >> 1
    merge_sort(lst, l, mid, tmp_lst)
    merge_sort(lst, mid + 1, r, tmp_lst)
    current = l
    i = l
    j = mid + 1
    while i <= mid and j <= r:
        if lst[i] < lst[j]:
            tmp_lst[current] = lst[i]
            i += 1
        else:
            tmp_lst[current] = lst[j]
            j += 1
        current += 1
    while i<= mid:
        tmp_lst[current] = lst[i]
        current+= 1
        i += 1
    while j<=r:
        tmp_lst[current] = lst[j]
        current+= 1
        j += 1

    for t in range(l,r+1):
        lst[t] = tmp_lst[t]

while True:
    try:
        n = int(input())
        lst = list(map(int, input().split()))
        tmp_lst = [0] * n
        merge_sort(lst, 0, n - 1, tmp_lst)
        for item in lst:
            print(item, end=' ')
    except:
        break
