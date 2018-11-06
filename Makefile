run: build clean
	./lol.bin

build: clean
	g++ main.cpp -o lol.bin

clean:
	rm -f lol.bin
