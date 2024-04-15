"""
https://zerojudge.tw/ShowProblem?problemid=a006
"""

a, b, c = [int(x) for x in input().split()]
d: int = b**2 - 4 * a * c
if d == 0:
    print(f'Two same roots x={int(-b / (2 * a))}')
elif d > 0:
    print(f'Two different roots x1={int((-b + d**0.5) / (2 * a))} , x2={int((-b - d**0.5) / (2 * a))}')
else:
    print('No real root')