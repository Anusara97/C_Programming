#include <stdio.h>

int main () {
    float ar[4] = {19.6, -7.6, 7.65, 33.7};
    float *ip;
    int k;

    ip = &ar[0];
    for (k=0; k<4; k++) {
        printf("Vlues %f ", *ip);
        printf("|| Adreeses %p\n", ip);
        (ip)++;
    }
    return 0;
}
