/*************************************************************************************************
This is to certify that this project is our own work, based on our personal efforts in studying and
applying the concepts learned. We have constructed the functions and their respective algorithms
and corresponding code by ourselves. The program was run, tested, and debugged by our own efforts. We
further certify that we have not copied in part or whole or otherwise plagiarized the work of other
students and/or persons.
 LORENZO AIVIN FAUSTINO AMBROSIO, DLSU ID# 12183970
 FULL NAME, DLSU ID#
*************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int NextPlayerMove() {

}



int main(void) {

    int gameBoard[7][5];
    int i, j;
    int Alpha[5], Beta[5], Free;
    int aTurn = 1, over = 0, ok = 0;
    int E[5], Y[5];

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 5; j++) {
            gameBoard[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++) {
    }

    /*

    if (sizeof(Beta)/sizeof(Beta[0]) == 0 || (sizeof(Alpha)/sizeof(Alpha[0]) != 0)) {
        for (i = 0; i > (sizeof(Alpha)/sizeof(Alpha[0]); i++) {
            if( Alpha[i] - Y[i] == 0)
                alphacounter++;
        }

        if (alphacounter == (sizeof(Alpha)/sizeof(Alpha[0]))
            printf("Player Alpha Wins!");
    }

    if ((sizeof(Alpha)/sizeof(Alpha[0]) != 0 || (sizeof(Beta)/sizeof(Beta[0]) != 0)) {
        for (i = 0; i > sizeof(Beta)/sizeof(Beta[0]); i++) {
            if( Beta[i] - Y[i] == 0)
                 betacounter++;
        }

        if (sizeof(Beta)/sizeof(Beta[0]) == 5)
            printf("Player Alpha Wins!");
    }



    */

}