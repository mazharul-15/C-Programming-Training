#include<stdio.h>

int main() {

    int test;
    scanf("%d", &test);

    while(test--) { // test = 0 - false
        printf("%d\n", test);
    }

    printf("\n%d", test);
    return 0;
}
