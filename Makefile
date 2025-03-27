CC := gcc
CFLAGS := -O1 -Wall

matrix.exe: temperature.o temperature_main.o# fill in files here
	# fill in commands here
	$(CC) $(CFLAGS) $^ -o $@

%.exe: %.c
	$(CC) $(CFLAGS) $< -c

.PHONY: clean
clean:
	rm -f *.exe
	rm -f matrix.exe