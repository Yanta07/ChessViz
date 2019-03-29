#include "drawdesk.h"
#include <stdio.h>

int main()
{
    int chesstable[64]
            = {WROOK, WKNIGHT, WBISHOP, WKING, WQUEEN, WBISHOP, WKNIGHT, WROOK,
               WPAWN, WPAWN,   WPAWN,   WPAWN, WPAWN,  WPAWN,   WPAWN,   WPAWN,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               EMPTY, EMPTY,   EMPTY,   EMPTY, EMPTY,  EMPTY,   EMPTY,   EMPTY,
               BPAWN, BPAWN,   BPAWN,   BPAWN, BPAWN,  BPAWN,   BPAWN,   BPAWN,
               BROOK, BKNIGHT, BBISHOP, BKING, BQUEEN, BBISHOP, BKNIGHT, BROOK};

    createhtml(chesstable);

    return 0;
}
