def count_ones_in_binary(num):
    cnt = 0
    for i in range(30):
        if num >> i & 1:
            cnt += 1
    return cnt


while True:
    try:
        n = int(input())
        lst = list(map(int, input().split()))

        for item in lst:
            print(count_ones_in_binary(item), end=' ')
            # print(bin(item)[2:].count('1'), end=' ')

    except:
        break
