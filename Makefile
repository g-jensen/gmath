compile:
	gcc -c src/*.c
	gcc -c *.c
	gcc *.o -o main
clean:
	rm *.o
