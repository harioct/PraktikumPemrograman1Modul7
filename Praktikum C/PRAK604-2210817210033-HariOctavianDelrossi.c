#include <stdio.h>
#include <string.h>
int main(){
    char kode[100], pesan[100];
    int i,j;
    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);
    int kode1=strlen(kode), pesan1=strlen(pesan);
    if(kode1 != pesan1){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        int i=0,j=0;
        for(int k=0; k<kode1; k++){
            if(pesan[k]==' ' && kode[k]==' '){
                continue;
            }
            else if(kode[k] != pesan[k]){
                printf("#");
                i++;
            }
            else if(kode[k] == pesan[k]){
                printf("*");
                j++;
            }
        }
        printf("\n*= %d", j);
        printf("\n#= %d", i);
        if(i <= j){
            printf("\nPesan Asli");
        }
        else{
            printf("\nPesan Palsu");
        }
    }
    return 0;
}