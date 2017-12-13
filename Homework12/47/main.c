#include <stdio.h>

int main() {
    int n, i, j, k, temp;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &j);
        int num[j];
        for (k = 0; k < j; ++k) {
            scanf("%d", num + k);
        }
        for (k = 0; k < (int) j / 2; ++k) {
            temp = *(num + k);
            *(num + k) = *(num + j - k - 1);
            *(num + j - k - 1) = temp;
        }
        for (k = 0; k < j - 1; ++k) {
            printf("%d ", *(num + k));
        }
        printf("%d\n", *(num + k));
    }
    return 0;
}