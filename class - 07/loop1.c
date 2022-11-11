#include<stdio.h>

int main() {

    int start, end;
    scanf("%d", &end);
    start = 20;
    while(start >= end) {

        printf("%d\n", start);
        start = start - 1; // start--;
    }
    return 0;
}
