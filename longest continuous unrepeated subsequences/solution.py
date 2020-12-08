from collections import Counter

while True:
    try:
        n = int(input())
        lst = list(map(int, input().split()))
        cnt = Counter()
        j = 0
        maxlen = 0
        for i in range(n):
            cnt[lst[i]] += 1
            if cnt[lst[i]] > 1:
                while lst[j] != lst[i]:
                    cnt[lst[j]] -= 1
                    j += 1
                cnt[lst[j]] -= 1
                j += 1
            maxlen = max(maxlen, i - j + 1)
        print(maxlen)

    except:
        break
