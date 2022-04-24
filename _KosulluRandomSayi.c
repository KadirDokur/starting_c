#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>


// arrayi bastan sonra yazdiran fonksiyon
void printArray(int* array, int size) {
	int i=0;
  	for (i = 0; i < size; ++i) {
    printf("%d,", array[i]);
  }
  printf("\n");
}

int main() {
	
	srand(time(NULL)); // her defasinda farkli bir sayi generate etmek icin
	
	//degisken deklarasyonlari
	int size;
	int* arr;
	int lower=0;
	int upper=20;
	int i=0;
	int rnd;

	// dinamik array olusturulmasi
	printf("Enter number of elements:");
    scanf("%d",&size);
    arr = (int*)malloc(size * sizeof(int));
    
    // generate edilen elemanlarin array icine alinmasi

	arr[0]=(rand() % (upper - lower + 1)) + lower; //arrayin ilk elemanina rastgele sayi atanmasi
	rnd = (rand() % (upper - lower + 1)) + lower;  //yeni bir sayi generate edilmesi

	while(i<=size){
		if(rnd < arr[i]-5 ||  rnd > arr[i]+5){ //generate edilen sayinin kendinden onceki elemandan 5 fazla veya az olmasinin kontrol edilmesi
		arr[i+1]=rnd;
		i++;
		}
		else{
			rnd = (rand() % (upper - lower + 1)) + lower;
		}	
	}
	
	printArray(arr,size);
	getch();
  	return 0;
}

