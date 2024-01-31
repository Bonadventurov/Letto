#ifndef _work_array_h_
#define _work_array_h_ 
#include <iostream>
int getMax(const int* ar, int size);
int getMin(const int* ar, int size);
void swap(int* a, int* b);
void showElLine(int* ar, int size, char del = ' ');
void showElMatrix(const int* ar, int size, int col, char del = ' ');
#endif
