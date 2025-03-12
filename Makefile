a.out: main.o Heap.o Selection_Sort.o Merge_Sort.o Counting_Sort.o Radix_Sort.o Insertion_Sort.o
	g++ main.o Heap.o Selection_Sort.o Merge_Sort.o Counting_Sort.o Radix_Sort.o Insertion_Sort.o

main.o: main.cpp Heap.h Selection_Sort.h
	g++ -c main.cpp

HeapSortHeader.o: Heap.cpp Heap.h
	g++ -c Heap.cpp	

Selection_Sort.o: Selection_Sort.cpp Selection_Sort.h
	g++ -c Selection_Sort.cpp

Merge_Sort.o: Merge_Sort.cpp Merge_Sort.h
	g++ -c Merge_Sort.cpp

Counting_Sort.o: Counting_Sort.cpp Counting_Sort.h
	g++ -c Counting_Sort.cpp

Radix_Sort.o: Radix_Sort.cpp Radix_Sort.h
	g++ -c Radix_Sort.cpp

Insertion_Sort.o: Insertion_Sort.cpp Insertion_Sort.h
	g++ -c Insertion_Sort.cpp

clean:
	rm -rf a.out core *.o
