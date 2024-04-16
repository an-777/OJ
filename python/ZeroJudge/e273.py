while True:
    try:
        n = int(input())

        l = [int(_) for _ in input().split()]

        for i in range(1, n):
            print((n-i)*l[i-1], end=' ')
    except:
        break