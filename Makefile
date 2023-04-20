all: numbers.c
	gcc -o nbers numbers.c

clean:
	rm -rf nbers*
