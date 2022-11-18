i=0;j=0
asli = input();palsu = input()
kode = len(asli);pesan = len(palsu)
if kode != pesan:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for a in range(kode):
        if((asli)[a] == palsu[a]):
            if(asli[a] == ' '):
                print(" ", end=' ')
            else:
                print("*", end=' ')
                i += 1
        else:
            print("#", end=' ')
            j+=1
    print("\n* = ",i)
    print("# = ",j)
    if(i >= j):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")