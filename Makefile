a.out: main.o Heap.o Selection_Sort.o Merge_Sort.o
	g++ main.o Heap.o Selection_Sort.o Merge_Sort.o

main.o: main.cpp Heap.h Selection_Sort.h
	g++ -c main.cpp

HeapSortHeader.o: Heap.cpp Heap.h
	g++ -c Heap.cpp	

Selection_Sort.o: Selection_Sort.cpp Selection_Sort.h
	g++ -c Selection_Sort.cpp

Merge_Sort.o: Merge_Sort.cpp Merge_Sort.h
	g++ -c Merge_Sort.cpp

clean:
	rm -rf a.out core *.o
