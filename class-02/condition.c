#include<stdio.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    if(!x && !y) return 0;
    (x > y)? printf("%d\n", x) : ((x==y)? printf("x y equal\n"): printf("%d\n", y));

    main();
}
