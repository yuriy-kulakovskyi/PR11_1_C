#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "../include/main.h"


int main() {
    printf("Content of t.txt: \n");
    PrintTXT("t.txt");
    printf("String contained %d groups of equal elements \n", Count("t.txt"));
    return 0;
}
