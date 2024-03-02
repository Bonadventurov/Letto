#include <iostream>
#include <cstring>
#include "sorts.h"
#include "work_files.h"
#include "work_array.h"
#include <chrono>
#include <fstream>

using namespace std;
int main(){
	int size = 10;
    int ar[size] = {2,8,16,2,1,7,4,678,47,39};
	//int ar[size] = {-2,7,9,13,14,-3,3,8,16,17};
	//int m = getMax(ar, size);
	//std::cout << m << std::endl;
	CountSort(ar, size);
	for(int i = 0; i < 10; i++){
		std::cout << ar[i] << " ";
	}
	std::cout << "\t" << std::endl;
	auto start_time = std::chrono::steady_clock::now();
	QuickSort(ar, size);
	auto end_time = std::chrono::steady_clock::now();
	std::cout << "duration time = " << std::chrono::duration_cast<chrono::microseconds>(end_time - start_time).count() << " us" << std::endl;
	std::cout << std::endl;	
	WriteRes("test2", 375, 46.78, true);
	return 0;
}





