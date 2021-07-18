ifs: main.o IFS.o image.o matrix.o
	g++ -o ifs main.o IFS.o image.o matrix.o

main.o: main.cpp IFS.h
	g++ -c main.cpp

IFS.o: IFS.cpp IFS.h image.h matrix.h vectors.h
	g++ -c IFS.cpp

image.o: image.cpp image.h vectors.h
	g++ -c image.cpp

matrix.o: matrix.cpp matrix.h vectors.h
	g++ -c matrix.cpp

clean:
	rm *.o