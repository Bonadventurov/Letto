all: main.o sort.o work_array.o
	g++ main.o sort.o workarray.o -g
main.o:	main.cpp
	g++ -c main.cpp -g
sort.o: sort.cpp
	g++ -c sort.cpp -g
work_array.o: work_array.o
	g++ -c work_array.cpp -g
clean:
	rm -rf *.o a.out