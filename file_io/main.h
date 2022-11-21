#include <stddef.h>
#include <stdio.h>
#include<string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#ifndef HEADER_FILE
#define HEADER_FILE

ssize_t read_textfile(const char *filename, size_t letters);

#endif
