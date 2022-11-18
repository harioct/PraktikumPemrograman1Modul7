#include <stdio.h>
int main(){
    int a, b, c, ordo, isi, hasil;
    scanf("%d", &ordo);
    int MA[ordo][ordo], MB[ordo][ordo];
    printf("Matriks A\n");
    for(a=0; a<ordo; a++){
        for(b=0; b<ordo; b++){
            scanf("%d", &isi);
            MA[a][b]=isi;
        }
    }
    printf("Matriks B\n");
    for(a=0; a<ordo; a++){
        for(b=0; b<ordo; b++){
            scanf("%d", &isi);
            MB[a][b]=isi;
        }
    }
    printf("\nMatriks AXB\n");
    for(a=0; a<ordo; a++){
        for(b=0; b<ordo; b++){
            for(c=0, hasil=0; c<ordo; c++){
                hasil+= MA[a][c] * MB[c][b];
            }
            printf("%d ", hasil);
        }
        printf("\n");
    }
    return 0;
}