while True:
    try:
        n, m, q = list(map(int, input().split()))
        matrix = [[0] * (m + 1)]
        dif_matrix = [[0] * (m + 2) for _ in range(n + 2)]


        def insert(x1, y1, x2, y2, c):
            dif_matrix[x1][y1] += c
            dif_matrix[x1][y2 + 1] -= c
            dif_matrix[x2 + 1][y1] -= c
            dif_matrix[x2 + 1][y2 + 1] += c


        for _ in range(n):
            lst = [0] + list(map(int, input().split()))
            matrix.append(lst)
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                insert(i, j, i, j, matrix[i][j])

        for i in range(q):
            x1, y1, x2, y2, c = list(map(int, input().split()))
            insert(x1, y1, x2, y2, c)
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                dif_matrix[i][j] += dif_matrix[i - 1][j] + dif_matrix[i][j - 1] - dif_matrix[i - 1][j - 1]
                print(dif_matrix[i][j], end=' ')
            print()

    except:
        break
