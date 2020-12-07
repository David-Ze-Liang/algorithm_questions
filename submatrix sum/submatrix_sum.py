while True:
    try:
        n, m, q = list(map(int, input().split()))
        mat = []
        for _ in range(n):
            mat.append(list(map(int, input().split())))
        sum_m = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                sum_m[i][j] = mat[i - 1][j - 1] + sum_m[i][j - 1] + sum_m[i - 1][j] - sum_m[i - 1][j - 1]

        for _ in range(q):
            x1, y1, x2, y2 = list(map(int, input().split()))
            print(sum_m[x2][y2] - sum_m[x1 - 1][y2] - sum_m[x2][y1 - 1] + sum_m[x1 - 1][y1 - 1])
    except:
        break
