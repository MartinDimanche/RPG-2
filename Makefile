build-window:
	gcc src\main.c src\player.c -o RPG
	RPG
debug-window:
	gcc -g src\main.c src\player.c -o RPG
	RPG