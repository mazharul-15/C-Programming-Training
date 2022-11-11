#include<stdio.h>

int main() {

    int var;
    scanf("%d", &var);
    printf("before decrement value: %d\n", var);
    var--;
    ///var = var + 1;
    printf("after decrement value: %d\n", var);
    return 0;
}

