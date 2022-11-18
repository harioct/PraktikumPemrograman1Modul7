kolom, baris = map(int, input().split())
angka = list(map(int, input().split()))
matriks = []
a = 0
for i in range(0, kolom):
    matriks.append(angka[a:a+baris])
    a = a + baris
print()
for i in range(0, kolom):
    for j in range(0, baris):
        print(matriks[i][j], end=' ')
    print()