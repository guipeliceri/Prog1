#include <stdio.h>

int main() {
    float notas[20]; 
    float nota; 
    int i;


    for (i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }

    while (1) {
        scanf("%f", &nota);
        if (nota < 0) {
            break;
        }
        int encontrou = 0;

        
        for (i = 0; i < 20; i++) {
            if (notas[i] == nota) {
                encontrou = 1;
                break;
            }
        }
        if (encontrou) {
            printf("existe\n");
        } else {
            printf("nao existe\n");
        }
    }

    return 0;
}