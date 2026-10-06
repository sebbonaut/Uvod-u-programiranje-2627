/*
    U ovome zadatku ucitamo dva cijela
    broja i ispisemo njihov zbroj.
*/


#include <stdio.h>

int main(void) {
    int prvi, drugi;
    printf("Unesite dva cijela broja: ");
    scanf("%d %d", &prvi, &drugi);
    printf("Zbroj je: %d.\n", prvi+drugi);
    int zbroj = prvi + drugi;
    printf("Zbroj je: %d.\n", zbroj);
    return 0;
}

