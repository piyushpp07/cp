for i in range(int(input())):
    n, a, b = list(map(int, input().split()))
    anu, sar = 0, 0
    for i in range(0, n):
        x = input()
        if x[0] in 'EQUIONX':
            sar += a
        else:
            anu += b
    if sar == anu:
        print("DRAW")
    elif sar > anu:
        print("SARTHAK")
    else:
        print("ANURADHA")
