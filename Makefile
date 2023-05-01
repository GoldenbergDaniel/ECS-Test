all:
	cc src/*.c -o build/Game -lraylib
	./build/Game
compile:
	cc src/*.c -o build/Game -lraylib
run:
	./build/Game
