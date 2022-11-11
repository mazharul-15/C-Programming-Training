#include<stdio.h>

int main() {

    /*
    if(con1 < con2) {

    }
    else {

    }

    */
    int test;
    scanf("%d", &test);
    printf("\n");

    while(--test) {
        //step-1: test = 2, while(2) - true -{pr(2);}
        //step-2: test = 1, while(1) - true - {pr(1);}
        //step-3: test = 0, while(0) - false - EXIT
        printf("%d\n", test);
    }

    printf("\n%d", test);

    return 0;
}


