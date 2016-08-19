CC=g++ -std=c++14

all: main

main: main.cpp BaseView.o  Controller.o View
	$(CC) main.cpp -o main BaseView.o  Controller.o  View.o

BaseView.o: BaseView.cpp
	$(CC) -c BaseView.cpp -o BaseView.o
	
View.o: reusableView.cpp
	$(CC) -c Controller.cpp -o Controller.o

View: View.cpp
	$(CC) -c View.cpp -o View.o
	
clean:
	find ./ -maxdepth 10 -type f -iname '*.o' -delete;
	find ./ -maxdepth 10 -type f -iname '*~' -delete