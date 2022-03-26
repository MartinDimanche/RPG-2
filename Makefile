RPG: src/first.o src/secondly.o
	gcc src/first.o src/secondly.o -o RPG
	clear
	./RPG	
first.o: src/first.c src/secondly.c
	gcc -c src/first.c -o src/first.o
secondly.o: src/secondly.c
	gcc -c src/secondly.c -o src/secondly.o
clean:
	rm -rf src/*.o
mrproper: clean
	rm -rf RPG
debug: mrproper
	gcc -g src/first.c src/secondly.c -o RPG
	gdb -tui RPG