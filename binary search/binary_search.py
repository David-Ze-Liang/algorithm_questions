def binary_search_start(lst, l, r, q):
    # get the boundary after which elements are larger than or equal to the query
    while l < r:
        mid = l + r >> 1
        if lst[mid] < q:
            l = mid + 1
        else:
            r = mid
    if lst[l] == q:
        return l
    return -1


def binary_search_end(lst, l, r, q):
    # get the boundary before which elements are less than or equal to the query
    while l < r:
        mid = l + r + 1 >> 1
        if lst[mid] > q:
            r = mid - 1
        else:
            l = mid
    if lst[l] == q:
        return l
    return -1


while True:
    try:
        n, q = list(map(int, input().split()))
        lst = list(map(int, input().split()))
        query = []
        for _ in range(q):
            query.append(int(input()))
        for qry in query:
            print(binary_search_start(lst, 0, n - 1, qry), binary_search_end(lst, 0, n - 1, qry))
    except:
        break
