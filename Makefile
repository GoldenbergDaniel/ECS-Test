all:
	cc src/*.c -lraylib -o build/Game
	./build/Game
compile:
	cc src/*.c -lraylib -o build/Game
run:
	./build/Game
