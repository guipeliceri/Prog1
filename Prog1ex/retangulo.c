#include <stdio.h>

struct pontos {
    float n;
    float k;
};

//define o retangulo
struct Ret {
    struct pontos esqinf;
    struct pontos dirsup;
};

//ver se está contido ou n
int retcont(struct Ret r1, struct Ret r2) {
    if (r2.esqinf.n >= r1.esqinf.n && r2.esqinf.k >= r1.esqinf.k &&
        r2.dirsup.n <= r1.dirsup.n && r2.dirsup.k <= r1.dirsup.k) {
        return 1; 
    } else {
        return 0; 
    }
}
 
int main() {
    struct Ret retA, retB;  //local das formas
     scanf("%f %f", &retA.esqinf.n, &retA.esqinf.k);
      scanf("%f %f", &retA.dirsup.n, &retA.dirsup.k);
       scanf("%f %f", &retB.esqinf.n, &retB.esqinf.k);
        scanf("%f %f", &retB.dirsup.n, &retB.dirsup.k);

    if (retcont(retA, retB)) {  //se os retangulos estão contidos um no outro
        printf("o segundo retangulo esta contido no primeiro\n");
    } else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
}