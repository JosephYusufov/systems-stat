#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
    struct stat statbuffer;
    stat("./stat.c", &statbuffer);
    printf("\n********************\n");
    printf("Joseph Yusufov Stats Assignment\n\n");
    printf("Due: Wed Nov 14th, 2019\n");
    printf("********************\n\n");
    printf("\tname: \"stat.c\"\n");
    printf("\tsize: %lldB\n", statbuffer.st_size);
    printf("\tmode: %o\n", statbuffer.st_mode);
    printf("\taccessed: %s\n", ctime(&statbuffer.st_atime));
    return 0;
}
