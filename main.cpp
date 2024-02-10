#include <iostream>
#include "sort.h"
#include "work_array.h"

int main(){
	int size = 10;
    int ar[size] = {2,8,16,2,0,-4,7,4,-678,47};
	int m = getMax(ar, size);
	std::cout << m  << std::endl;
	QuickSort(ar,size);
	for(int i = 0; i < 10; i++){
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;
	CheckSort(ar, size);	
	return 0;
}





