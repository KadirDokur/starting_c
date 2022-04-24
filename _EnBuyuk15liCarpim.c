#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>


// arrayi bastan sonra yazdiran fonksiyon
void printArray(uint8_t array[], int size) {
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
	uint8_t* arr;
	int lower=0;
	int upper=9;
	int i,a;
	long long int carpim;
	long long int max=0;
	int k=1;
	int bas=0;
	int bas2;
	int son=15;
	int son2;
		
	
	// dinamik array olusturulmasi
	printf("Enter number of elements:");
    scanf("%d",&size);
    arr = (uint8_t*)malloc(size * sizeof(uint8_t));
    
    // generate edilen elemanlarin array icine alinmasi
    for(i=0;i<size;i++){
    	arr[i]=(rand() % (upper - lower + 1)) + lower;  
	}
	
	//olusturdugumuz diziyi yazdiran fonksiyon call
	printArray(arr,size);
	do {
		carpim = 1;
		for(i=bas;i<son;i++){
		carpim *= arr[i];
		if(carpim>=max){
			max=carpim;
			bas2=bas;
			son2=son;	
			}
		}
		bas +=15;
		son +=15;
	}
	while(son<=size);

	
	if(size%(son-bas)==0){
		printf("En buyuk carpim = %lld ve %d.eleman ile %d.eleman arasindadir",max,bas2,son2);
		return;
	}
	else{
		son -= 15;
		i = son;
		carpim =1;
		while(i<size){
			carpim *= arr[i];
			i++;
		}
		if(carpim>=max){
			max=carpim;
			bas2=bas;
			son2=son;
		}
		printf("En buyuk carpim = %lld ve %d.eleman ile %d.eleman arasindadir",max,bas2,son2);
	}
  	return 0;
}

