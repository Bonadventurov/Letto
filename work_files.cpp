#include "work_files.h"

void foo(){
	int test = 10;
	FILE* f = fopen("test","w");
	for(int i = 1; i < 11; i++){
		for(int j = 1; j < 11; j++){
			fprintf(f, "%d\t", i * j);
		}
	fprintf(f, "\n");
	}
	fclose(f);
}

void WriteRes(const char* file_name, int number_1, float number_2, bool update){
	if(update == true){
		FILE* f = fopen(file_name,"a");
		fprintf(f,"%d\t%f\n", number_1, number_2);
		fclose(f);
	}


	else{
		FILE* f = fopen(file_name, "w");
		fprintf(f, "%d\t%f\n", number_1, number_2);
		fclose(f);
	}
}


