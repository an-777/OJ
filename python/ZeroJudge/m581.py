n = int(input())

l = [int(_) for _ in input().split()]
error = False

while True:
    t = int(input())
    if t == 0:
        break
    if l[t-1] == None:
        error = True
    else:
        l[t-1] = None

if error == True:
    print('Wrong')
elif -1 in l:
    print('Werewolves')
else:
    print('Townsfolk')