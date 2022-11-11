#include<stdio.h>

int main() {

    int var;
    scanf("%d", &var);
    printf("before increment value: %d\n", var);
    var++;
    ///var = var + 1;
    printf("after increment value: %d\n", var);
    return 0;
}
