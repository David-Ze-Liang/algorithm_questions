def cube_root(num):
    l=-22 # 22^3 = 10648>10000
    r=22
    while r-l>1e-7:
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
