kolom = int(input())
angka = list(map(int, input().split()))
matriks = []
a = 0
matriks.append(angka[a:a+kolom])
print()
for i in range(0, kolom):
    print(matriks[0][i]*(i+ 1), end=' ')