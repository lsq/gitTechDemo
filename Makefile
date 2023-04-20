all: hello.c
	gcc -o hl hello.c

clean:
	rm -rf hl*
