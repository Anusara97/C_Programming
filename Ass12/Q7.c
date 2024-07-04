#include <stdio.h>
#include <string.h>

typedef struct PartItem{
    char Number[10];
    float Price;
    int Qty;
}Part;

typedef struct Assembly{
    char name [10];
    Part Arr[3];
}Assembly;

int main () {
    Part p;
    strcpy(p.Number, "SMS0001");
    p.Price = 0.35;
    p.Qty = 20;

    printf("=====Part Details=====\n\n");
    printf("Part Number: %s\nPrice: %f\nQuantity: %d\n", p.Number, p.Price, p.Qty);

    Assembly M;
    strcpy(M.name, "Motor");

    strcpy(M.Arr[0].Number, "SMS0002");
    M.Arr[0].Price = 150;
    M.Arr[0].Qty = 30;

    strcpy(M.Arr[1].Number, "SMS0005");
    M.Arr[1].Price = 200;
    M.Arr[1].Qty = 19;

    strcpy(M.Arr[2].Number, "SMS0010");
    M.Arr[2].Price = 17.5;
    M.Arr[2].Qty = 13;

    printf("\n=====Assembly Details=====\n\n");
    printf("Name of the assembly: %s\n", M.name);
    for (int i=0; i<3; i++) {
        printf("Part %d:\n Number: %s \tPrice: %f \tQty: %d\n\n", i+1, M.Arr[i].Number, M.Arr[i].Price, M.Arr[i].Qty);
    }
    return 0;
}
