main: main.o functions.o bankaccount.o
	g++ main.o functions.o bankaccount.o -o main

main.o: main.cpp
	g++ main.cpp -c

functions.o: functions.cpp
	g++ functions.cpp -c

bankaccount.o: bankaccount.cpp
	g++ bankaccount.cpp -c

clean:
	rm -f *.o main
