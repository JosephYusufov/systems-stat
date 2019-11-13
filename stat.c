#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
    struct stat statbuffer;
    stat("./stat.c", &statbuffer);
    printf("\tsize: %lld\n", statbuffer.st_size);
    printf("\tmode: %o\n", statbuffer.st_mode);
    return 0;
}
