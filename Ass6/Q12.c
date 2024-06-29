#include <stdio.h>

int main () {
    int num [15] = {2,5,1,7,1,2,8,2,6,2,9,4,2,1,10};
    int count1 = 0, count2 = 0;

    for(int i=0; i<15; i++) {
        if (num[i] ==1) {
            count1++;
        }else if (num[i] == 2){
            count2++;
        }
    }

    printf("No. of 1s : %d\nNo. of 2s : %d\n", count1, count2);

    return 0;
}
