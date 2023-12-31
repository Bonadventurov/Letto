#include <iostream>
#include <work_array.h>

int getMax(const int* ar, int size){
    int max = ar[0];
    for(int i = 1; i < size; i++){
        if(max - ar[i] < 0){
            max = ar[i];
        }
    }
    return max;
}
 
int getMin(const int* ar, int size){
     int min = ar[0];
     for(int i = 1; i < size; i++){
         if(min - ar[i] > 0){
            min = ar[i];
        }
    }
    return min;
}

void swap(int* a, int* b){
	int temp = *a;
    *a = *b;
    *b = temp;
}

void showEl_line(int* ar, int size, char del = ' '){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << del;
    }
    std::cout << std::endl;}

void showEl_matrix(const int* ar, int size, int col, char del = ' '){
    int string = size / col;
    int a = 1;
    for(int j = 0; j < string; j++){
    	for(int i = 0;i < col; i++){
        	std::cout << ar[i] << del;
        }
    std::cout << "\n";
    }
    std::cout << std::endl;
}

