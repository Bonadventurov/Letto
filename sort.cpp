#include <sort.h>

void SelSort(int size, int* ar){
     for(int i = 0; i < size; i++){
         int max = i;
         for(int j = 0; j < size; j++){
             if(ar[max]- ar[j] < 0){
                max = j;
             }
         }
             int temp = ar[i];
             ar[i] = ar[max];
             ar[max] = ar[i];
     }
 }
 
 void InsertionSort(int* ar, int size){
     int number = 0;
     for(int i = 1; i < size; i++){
         for(int j=i; j > 0 and ar[j-1] > ar[j]; j--){
             number++;
             int notlon = ar[j-1];
             ar[j-1] = ar[j];
             ar[j] = notlon;
         }
     }
}

