#include <stdio.h>
#include <stdlib.h>

int main(void) {
char ch;

printf("\nPressione uma tecla ");
ch = getchar();
printf("\nA tecla sucessora ASCII é %c.\n", ch+1);
system("PAUSE");
return 0;
}