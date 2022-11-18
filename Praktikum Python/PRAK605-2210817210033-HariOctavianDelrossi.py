n = int(input())
MA = []
print("Matriks A")
for i in range(n):
    k = list(map(int, input().split()))
    MA.append(k)
MB = []
print("Matriks B")
for i in range(n):
    k = list(map(int, input().split()))
    MB.append(k)
MAB = []
print("\nMatriks AXB")
for i in range(n):
    MAB.append([])
    for j in range(n):
        a=0
        for k in range(n):
            a=a+MA[i][k]*MB[k][j]
        MAB[i].append(a)
for baris in MAB:
    for k in baris:
        print(k, end=' ')
    print()