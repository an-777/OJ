while True:
    try:
        n = str(int(input()))
        s = 0
        for i in n:
            s += int(i)

        while s > 0:
            s -= 3

        if s != 0:
            print('NO')
        else:
            print('YES')
    except EOFError:
        break