#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
    char fname[64] = "/etc/logfile.txt";

    if (argc == 2) {
	strncpy(fname, argv[1], 63); 
    }
    
    printf("Will open %s\n", fname);
    int fd = open(fname, O_RDONLY);
    if (fd < 0) {
        printf("Couldn't open %s\n", fname);
        exit(1);
    }

    char buf[64] = "\0";
    ssize_t rbytes = read(fd, buf, (size_t) 63);

    printf("Read %d bytes: \"%s\"\n", rbytes, buf);

    char *a;

    a = gets(a);
    return 0;
}

