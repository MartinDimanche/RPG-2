release-window:
	gcc -s src/*.c -o RPG
	RPG
debug-window:
	gcc -g src/*.c -o RPG
	RPG
debug-linux:
	gcc -g src/*.c -o RPG
	./RPG