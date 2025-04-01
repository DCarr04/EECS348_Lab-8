CC := gcc
CFLAGS := -O1 -Wall

matrix.exe: matrix.o main.o# fill in files here
	# fill in commands here
	$(CC) $(CFLAGS) $^ -o $@

%.exe: %.c
	$(CC) $(CFLAGS) $< -c

.PHONY: clean
clean:
	rm -f *.exe
	rm -f matrix.exe
	rm -f main.exe