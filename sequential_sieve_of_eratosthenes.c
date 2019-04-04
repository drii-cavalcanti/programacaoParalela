#include <stdio.h>
#include <errno.h>   // for errno
#include <stdlib.h>  // for strtol

#define N_MAX 100000000000 // 10^11

// adaptado de https://stackoverflow.com/questions/9748393/how-can-i-get-argv-as-int
int isValidArgumentNumber(char **argv) { 
    errno = 0;
    char *p;
    int conv = strtol(argv[1], &p, 10);
    return !(errno != 0 || *p != '\0' || conv > N_MAX);
}

int main(int argc, char **argv) {
    long n;
    int *integers; 
    
    if(argc > 1) {
        char *p;
        if(isValidArgumentNumber(argv)) {
            n = strtol(argv[1], &p, 10);
        } else {
            printf("Valor de N recebido é inválido. Leitura de N via teclado...\n");
            printf("Insira o valor de n: ");
            scanf("%ld", &n); 
        } 
    } else {
        printf("Não foi recebido um valor de N. Leitura de N via teclado...\n");
        printf("Insira o valor de n: ");
        scanf("%ld", &n); 
    }

    integers = (int *) malloc(n * sizeof(int));
    if (!integers) {
        printf("Não foi possível alocar a memória\n");
        exit(1);
    }

    for (int i = 0, count = 2; i < n; i++, count++) {
        integers[i] = count;
        printf("integers[%d]=%d\n", i, integers[i]);
    }
    
    free(integers);
    return 0;
}