CC=g++

all: main

main: main.cpp BaseView.o View.o Controller.o SecondController.o
	g++ main.cpp -o main BaseView.o View.o Controller.o SecondController.o

BaseView.o: BaseView.cpp
	$(CC) -c BaseView.cpp -o BaseView.o
View.o: reusableView.cpp
	$(CC) -c reusableView.cpp -o View.o
Controller.o: controller.cpp
	$(CC) -c controller.cpp -o Controller.o
SecondController.o: secondController.cpp
	$(CC) -c secondController.cpp -o SecondController.o
	
clean:
	rm *.o *~