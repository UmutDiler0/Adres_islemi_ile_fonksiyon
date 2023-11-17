#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ussunu_al(int *s1,int *s2,int *sonuc)
{
    *sonuc=pow(*s1,*s2);
}




int main()
{
    int x,y,sonucum;

    printf("iki adet sayi giriniz:\n");
    scanf("%d\n%d",&x,&y);

    ussunu_al(&x,&y,&sonucum);

    printf("%d ussu %d:%d",x,y,sonucum);

    return 0;
}
