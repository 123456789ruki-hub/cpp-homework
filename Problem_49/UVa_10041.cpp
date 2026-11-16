#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int r;
        int a[500];
        int sum = 0;

        scanf("%d", &r);

        for (int i = 0; i < r; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, r, sizeof(int), compare);

        int mid = a[r / 2];

        for (int i = 0; i < r; i++) {
            sum += abs(a[i] - mid);
        }

        printf("%d\n", sum);
    }

    return 0;
}