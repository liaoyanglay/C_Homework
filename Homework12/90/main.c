#include <stdio.h>

int main() {
    int num[10], i, j;
    while (scanf("%d", num) != EOF) {
        for (i = 1; i < 10; ++i) {
            scanf("%d", num + i);
        }
        for (i = 1; i <= 10; ++i) {
            int flag = 0, temp;
            for (j = 0; j < 10 - i; ++j) {
                if (*(num + j) > *(num + j + 1)) {
                    temp = *(num + j + 1);
                    *(num + j + 1) = *(num + j);
                    *(num + j) = temp;
                    flag++;
                }
            }
            if (flag == 0) {
                break;
            }
        }
        for (i = 0; i < 9; ++i) {
            printf("%d->",*(num+i));
        }
        printf("%d\n",*(num+i));
    }
    return 0;
}