CC=g++ -std=c++14

all: main

main: main.cpp BaseView.o  Controller.o VView
	$(CC) main.cpp -o main BaseView.o  Controller.o  VView.o

BaseView.o: BaseView.cpp
	$(CC) -c BaseView.cpp -o BaseView.o
	
View.o: reusableView.cpp
	$(CC) -c Controller.cpp -o Controller.o

VView: View.cpp
	$(CC) -c View.cpp -o VView.o
	
clean:
	rm *.o *~