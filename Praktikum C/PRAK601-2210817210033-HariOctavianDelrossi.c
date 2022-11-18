#include <stdio.h>
int main(){
    int baris,kolom,a,b,isi;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];
    for(a=0; a<baris; a++){
        for(b=0; b<kolom; b++){
            scanf("%d", &matriks[a][b]);
        }
    }
    printf("\n");
    for(a=0; a<baris; a++){
        for(b=0; b<kolom; b++){
            printf("%d ", matriks[a][b]);
        }
        printf("\n");
    }
    return 0;
}