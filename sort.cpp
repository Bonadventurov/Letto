#include "sort.h"
#include "work_array.h"
void SelectionSort(int* ar, int size){ 
	for(int i = 0; i < size; i++){
    	int max = getMax(&ar[i], size - i);
		swap(&ar[i],&ar[max]);
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
	int pivot = ar[size / 2];
	while(right >= left){
		while(ar[left] < pivot){
			left++;
		}
		while(ar[right] > pivot){
			right--;
		}
		if(left <= right){
			swap(&ar[left],&ar[right]);
			left++;
			right--;
		}
	}
	if(right > 0){
		QuickSort(&ar[0], left);
	}
	if(left < size){
		QuickSort(&ar[left], size - left);
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





