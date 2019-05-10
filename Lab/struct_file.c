#include<stdio.h>
struct emp
{
    char isim[10];
    int yas;
};
void main()
{
    struct emp e;
    FILE *p, *q;
    p = fopen("one.txt", "a");

    printf("isim ve yas giriniz: ");
    scanf("%s %d",e.isim, &e.yas);
    printf(p,"%s %d",e.isim,e.yas);
    fclose(p);
}
/* q = fopen("one.txt", "r+");
   do
   {
       fscanf(q,"%s %d",e.isim,e.yas);
       printf("%s %d",e.isim,e.yas);
   }
   while(!feof(q));
   fclose(q);
}
*/