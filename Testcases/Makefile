CC=gcc
CFLAGS=-m32 -O0

all: exploitable getenvaddr shellcode_test filer

exploitable:
	$(CC) $(CFLAGS) -z execstack -fno-stack-protector -o exploitable exploitable.c

getenvaddr:
	$(CC) $(CFLAGS) -o getenvaddr getenvaddr.c

shellcode_test:
	$(CC) $(CFLAGS) -z execstack -o shellcode_test shellcode_test.c

filer:
	$(CC) $(CFLAGS) -z execstack -o filer filer.c

clean:
	rm -f *.o exploitable getenvaddr shellcode_test filer
