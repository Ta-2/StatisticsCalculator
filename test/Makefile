test: test.o
	g++ -Wall -o test test.o -L../lib -lStaCal

test.o: test.cpp
	g++ -Wall -I../include -c test.cpp

.PHONY: clean rebuild
clean:
	-rm *.o ../lib/*.o test

rebuild:
	-rm ../lib/*
	g++ -Wall -I../include \
	-o ../lib/StatisticsCalculator.o \
	-c ../src/StatisticsCalculatorSource.cpp
	ar rcs ../lib/libStaCal.a ../lib/StatisticsCalculator.o
