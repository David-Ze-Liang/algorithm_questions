def cube_root(num):
    if num>=0:
        l=0
        r = num
    else:
        l = num
        r = 0
    while r-l>5e-7:
        mid = (l+r)/2
        if mid*mid*mid>=num:
            r = mid
        else:
            l = mid
    return l

while True:
    try:
        print("{:.6f}".format(cube_root(float(input()))))
    except:
        break
