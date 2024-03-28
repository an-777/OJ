"""
https://zerojudge.tw/ShowProblem?problemid=a005
"""

n = int(input())

for _ in range(n):
    l = [int(x) for x in input().split()]
    for i in l:
        print(i, end=' ')
    print(l[len(l)-1] + l[1]-l[0] if l[3]-l[2] == l[1]-l[0] else l[len(l)-1]  * l[3]//l[2])