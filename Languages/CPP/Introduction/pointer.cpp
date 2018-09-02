#include <stdio.h>

void update(int *a,int *b) {
    int sum;
    int diff;
    sum = *a + *b;
    if (*a < *b)
        diff = *b - *a;
    else
        diff = *a - *b;
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
