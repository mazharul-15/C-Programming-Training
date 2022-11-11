#include<stdio.h>

int main() {

    int var1, var2;

    scanf("%d %d", &var1, &var2);

    if(var1 < var2) {
        printf("%d\n", var2);
    }
    else {
        printf("%d\n", var1);
    }

    if(10 < 20 && var1 == 45) {
        printf("20\n");
    }
    else {
        printf("10\n");
    }


    if(34 < var1) {
        printf("%d\n", var1);
    }
    else {
        printf("34\n");
    }
    return 0;
}
