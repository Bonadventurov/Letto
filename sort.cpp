#include "sort.h"
#include "work_array.h"
void SelectionSort(int size, int* ar){
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

void QuickSort(int* ar, int size){
	int left = 0;
	int right = size - 1;
	int pivot = size / 2;
	while(right > left){
	while(ar[1] < ar[pivot] && left < pivot){left++;}
	while(ar[right] >= ar[pivot] && right > pivot){right--;}
	swap(&ar[left], &ar[right]);
	if(pivot == left){pivot = right;}
	}
	if(size - pivot - 1 > 0){
		QuickSort(&ar[pivot + 1], size - pivot - 1);
	}
	if(pivot > 0){
		QuickSort(&ar[0], pivot);
	}
}

void BubbleSort(int* ar, int size){
	int i = 0;
	int j = 0;
	while(j < size){
		while(i < size - 1 - j){
			if(ar[i] < ar[i+1]){
				i++;
			}
			else{
				swap(&ar[i],&ar[i+1]);
				i++;
			}
		}
		i = 0;
		j++;
	}
}





