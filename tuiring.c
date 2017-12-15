#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct charlist{
    unsigned char compound;
    struct charlist *next;
    struct charlist *early;
} charlist;

typedef struct listline{
    struct charlist *head;
    struct charlist *tail;
    int len;
} listline;
