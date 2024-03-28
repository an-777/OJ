"""
https://zerojudge.tw/ShowProblem?problemid=a003
"""

l = ("普通", "吉", "大吉")
m, d = [int(x) for x in input().split()]

s: int = (m * 2 + d) % 3

print(l[s])