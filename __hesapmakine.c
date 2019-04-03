#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
    int islem,i=0;
    float sonuc,sayi,sayi2;
    char temp;
    bas:
    printf("1:n kadar sayiyi toplama\n2:n kadar sayiyi carpma\n3:x^y bulma\n");
    printf("4:ln(x) bulma\n5:log(x) bulma\n");
    printf("0:Cikis\n");
    printf("Islem numarasi: ");
    scanf("%d",&islem);
    if(islem==0) abort();
    switch (islem){
        case 1:
            printf("Bitirmek icin 0 yazin\n");
            sonuc=0;
            while(1){
                printf("%d'inci sayiyi giriniz: ",++i);
                scanf("%f",&sayi);
                if(sayi==0) break;
                sonuc += sayi;            
        }
            printf("Girilen %d sayinin toplami= %.2f\n",i-1,sonuc);
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
        case 2:
            printf("Bitirmek icin 0 yazin\n");
            sonuc=1;
            while(1){
                printf("%d'inci sayiyi giriniz: ",++i);
                scanf("%f",&sayi);
                if(sayi==0) break;
                sonuc *= sayi;            
        }
            printf("Girilen %d sayinin carpimi = %.2f\n",i-1,sonuc);
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
        case 3:
            printf("Taban degerini giriniz: ");
            scanf("%f",&sayi);
            printf("Us degerini girinzi: ");
            scanf("%f",&sayi2);
            sonuc = pow(sayi,sayi2);
            printf("%.2f ^ %.2f = %.2f\n",sayi,sayi2,sonuc);
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
        default:
            printf("Islem bulunamadi.\n");
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
        case 4:
            printf("Dogal logaritmasi bulunacak pozitif sayiyi giriniz: ");
            scanf("%f",&sayi);
            if(sayi<=0){
                printf("Pozitif bir sayi giriniz!!!");
                abort ();
            }
            printf("ln(%.2f) = %.2f\n",sayi,log(sayi));
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
        case 5:
            printf("Logaritmasi bulunacak pozitif sayiyi giriniz: ");
            scanf("%f",&sayi);
            if(sayi<=0){
                printf("Pozitif bir sayi giriniz!!!");
                abort ();
            }
            printf("log(%.2f) = %.2f\n",sayi,log10(sayi));
            printf("Baska bir islem yapacak misiniz? (e/h) ");
            scanf("%s",&temp);
            if(temp=='E' || temp=='e'){
                printf("\n\n\n");
                goto bas;
            }
            abort();
    }
    getch();
    return 0;
}
