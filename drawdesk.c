#include "drawdesk.h"
#include <stdio.h>

int createfigurehtml(FILE* F1, int element)
{
    // FILE *F1;
    // F1 =
    // fopen("//home//students//2018//is841s07//2sem//TRPO//chess//chess//TEST.html",
    // "w+");
    switch (element) {
    case WPAWN:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/pawn.png\">");
        return 0;
        break;
    case WKNIGHT:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/knight.png\">");
        return 0;
        break;
    case WBISHOP:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/bishop.png\">");
        return 0;
        break;
    case WROOK:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/rook.png\">");
        return 0;
        break;
    case WQUEEN:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/queen.png\">");
        return 0;
        break;
    case WKING:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/white/king.png\">");
        return 0;
        break;
    case BPAWN:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/pawn.png\">");
        return 0;
        break;
    case BKNIGHT:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/knight.png\">");
        return 0;
        break;
    case BBISHOP:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/bishop.png\">");
        return 0;
        break;
    case BROOK:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/rook.png\">");
        return 0;
        break;
    case BQUEEN:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/queen.png\">");
        return 0;
        break;
    case BKING:
        fprintf(F1, "<img class=\"figure\" src=\"resourse/black/king.png\">");
        return 0;
        break;
    default:
        return 0;
        break;
    }
    //   fclose(F1);
    return 0;
}

void createhtml(int* table)
{
    FILE* F1;
    F1 = fopen("./TEST.html", "w+");

    if (F1 == NULL) {
        printf("Error! Canont read test.txt file");
        return;
    }

    int figure;
    fprintf(F1, "<!DOCTYPE HTML\n");
    fprintf(F1, "<html>\n");
    fprintf(F1, "<head>\n");
    fprintf(F1, "<meta charset=\"utf-8\">\n");
    fprintf(F1, "<link rel=\"stylesheet\" href=\"cssforhtml.css\">\n");
    fprintf(F1, "<title>Chess game</title>\n");
    fprintf(F1, "</head>\n");
    fprintf(F1, "<body>\n");
    fprintf(F1, "<div class=\"contain\">\n");
    fprintf(F1, "<aside class=\"sidebar\">\n");
    fprintf(F1, "<p>Chess game</p>\n");
    fprintf(F1, "</aside>\n");
    fprintf(F1, "<div class=\"content\">\n");
    fprintf(F1, "<div class=\"interface\">\n");
    fprintf(F1, "<div class=\"Chessboard\">\n");

    for (int n = 0; n < 8; n++) {
        for (int m = 0; m < 8; m++) {
            if ((n + m) % 2 == 0) {
                fprintf(F1, "<div class=\"black square\">");
                createfigurehtml(F1, table[figure]);
                fprintf(F1, "</div>\n");
            } else {
                fprintf(F1, "<div class=\"white square\">");
                createfigurehtml(F1, table[figure]);
                fprintf(F1, "</div>\n");
            }
            figure++;
        }
    }

    // code
    fprintf(F1, "</div>\n");
    fprintf(F1, "<div class=\"menu\">\n");
    fprintf(F1, "<div class=\"titl\">\n");
    fprintf(F1, "<p>CHESS<p>\n");
    fprintf(F1, "</div>\n");
    fprintf(F1, "</div>\n");
    fprintf(F1, "<div class=\"clear\"></div>\n");
    fprintf(F1, "</div>\n");
    fprintf(F1, "</div>\n");
    fprintf(F1, "</div>\n");
    fprintf(F1, "</body>\n");
    fprintf(F1, "</html>\n");
    fclose(F1);
}
