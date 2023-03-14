t = int(input())
while t > 0:
    t -= 1
    a = input().split()
    mx = -1
    a = [int(i) for i in a]
    mx = max(a)
    if a[0] == a[1] == a[2]:
        for i in range(0, 3):
            print(a[i]+1, end=" ")
    else:
        for i in a:
            if i == mx:
                print(0, end=" ")
            else:
                print(abs(i-mx)+1, end=" ")
    print('')
