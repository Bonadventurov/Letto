#include "work_array.h"

int getMax(const int* ar, int size){
	int left = 0;
    int right = size - 1;
    while(left != right){
		if(ar[left] >= ar[right]){
            right--;
        }   
        else{
        	left++;
   		}   
    }
	return left;
}

int getMin(const int* ar, int size){
	int left = 0;
	int right = size - 1;
	while(left != right){
		if(ar[left] <= ar[right]){
			right--;
		}
		else{
			left++;
		}
	}
    return left;
}

void swap(int* a, int* b){
	int temp = *a;
    *a = *b;
    *b = temp;
}

void showElLine(const int* ar, int size, char delimeter = ' '){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << delimeter;
    }
    std::cout << std::endl;}

void showElMatrix(const int* ar, int size, int col, char delimeter = ' '){
	int string = size / col;
    int a = 1;
    for(int j = 0; j < string; j++){
    	for(int i = 0;i < col; i++){
        	std::cout << ar[i] << delimeter;
        }
    std::cout << "\n";
    }
    std::cout << std::endl;
}

int CheckSort(int* ar, int size){
	int ascending = 0;
	int descending = 0;
	int non_sort = 0;
	for(int i = 0; i < size - 1; i++){
		if(ar[i] <= ar[i+1]){
			ascending++;
		}
		if(ar[i] >= ar[i+1]){
			descending++;
		}
		else{
			non_sort++;
		}
	}
	if(ascending == size-1){
		std::cout << 0 << std::endl;
		return 0;
	}
	if(descending == size - 1){
		std::cout << 1 << std::endl;
		return 1;
	}
	else{
		std::cout << -1 <<std::endl;
		return -1;
	}
}
