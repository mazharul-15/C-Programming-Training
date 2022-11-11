#include<stdio.h>

int main() {

    int var, y;
    scanf("%d", &var);
    printf("before increment value: %d\n", var);
    // task:
    //1. increment
    //2. assingment
    y = ++var; // 1->2
    y = var++; // 2->1

    ///var = var + 1;
    printf("after increment value: %d %d\n", y, var);
    return 0;
}

