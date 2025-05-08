#include <stdio.h> 
#include <string.h>

int main() { char palabra1[100], palabra2[100], resultado[200];

printf(" primera palabra: ");
scanf("%96s", palabra1);
printf(" segunda palabra: ");
scanf("%96s", palabra2);


strcpy(resultado, palabra1);

int N = strlen(palabra1);
for (int i = 0; i < N; i++) {
    strcat(resultado, palabra2);
}

printf("\nResultado: %s\n", resultado);

return 0;

}