"""
https://zerojudge.tw/ShowProblem?problemid=a007

    隨機選擇底數: 從2到n-1之間隨機選擇一個底數a。
    計算指數: 計算a的n-1次方 mod n 的結果。
    檢查結果: 如果結果等於1, 則繼續測試下一個底數
              如果結果不為1且不等於n-1, 則n不是質數
              如果所有底數的結果都等於1, 則n可能是質數。
"""

def f(m:int):
    if n == 2 or n == 3:
        return True
    if n < 2 or n % 2 == 0:
        return False

while True:
    try:
        n = int(input())
        if n in tb:
            print("質數")
        else:
            print("非質數")
    except EOFError:
        break