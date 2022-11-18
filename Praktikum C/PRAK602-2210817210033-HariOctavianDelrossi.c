#include <stdio.h>
int main(){
    int kolom,i;
    scanf("%d",&kolom);
    int matriks[kolom];
    for(i=0;i<kolom;i++){
        scanf("%d",&matriks[i]);
    }
    for(i=0;i<kolom;i++){
        printf("%d ",matriks[i]*(i+1));
    }
    return 0;
}