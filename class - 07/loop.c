#include<stdio.h>

int main() {
    int number, start;
    scanf("%d", &number);

    start = 1;

    while(start <= number) {
        //line-1: 1 <= 6 = true -{pr(1); start = 1 + 1 = 2}
        //line-2: 2 <= 6 = true - {pr(2); start = 2+1= 3}
        //line-3: 3 <= 6 = true - {pr(3); start = 3+1=4}
        //line-4: 4 <= 6 = true - {pr(4); start = 4 + 1 = 5}
        //line-5: 5 <= 6 = true - {pr(5); start = 5 + 1 = 6}
        //line-6: 6 <= 6 = true - {pr(6); start = 6 + 1 = 7}
        //line-7: 7 <= 6 = false -> exit

        printf("%d\n", start);
        start = start + 1; // start--
    }

    printf("Today Ayon is late");

    return 0;
}
