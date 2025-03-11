a.out: main.o Heap.o
	g++ main.o Heap.o

main.o: main.cpp Heap.h
	g++ -c main.cpp

HeapSortHeader.o: Heap.cpp Heap.h
	g++ -c Heap.cpp	

clean:
	rm -rf a.out core *.o
