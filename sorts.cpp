#include "sorts.h"
#include "work_array.h"

void SelectionSort(int* ar, int size){ 
	for(int i = 0; i < size; i++){
    	int min = getMin(&ar[i], size - i) + i;
		swap(&ar[i],&ar[min]);
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

static void merge(int* ar,int total_size,int left_size){
	int l = 0;
	int r = left_size;
	int i = 0;
	int* res = new int [total_size];
	while(i < total_size){
		if(ar[l] >= ar[r]){
		res[i] = ar[r];
   		i++;
   		r++;
   			if(r >= total_size){
    			while(l < left_size){
     				res[i++]=ar[l++];
    			}
    			break;
   			}
  		}
		if(ar[l] < ar[r]){
			res[i] = ar[l];
			l++;
			i++;
   			if(l >= left_size){
    			while(r < total_size){
     			res[i++]=ar[r++];
    			}
    		break;
   			}
 		}
 	}
 	memcpy(ar, res, total_size * 4);
 	delete [] res;
}

void MergeSort(int* ar, int size){
	if(size <= 1){
		return;
	}
	MergeSort(&ar[0], size / 2);
	MergeSort(&ar[size/2], size - size / 2);
	merge(&ar[0], size, size / 2);
}
 









