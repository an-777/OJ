a, b, c = [int(x) for x in input().split()]

s = (a+b+c)/2

print(int(s*(s-a)*(s-b)*(s-c)))