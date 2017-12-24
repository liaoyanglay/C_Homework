#include <stdio.h>

struct Time {
    int year;
    int month;
    int day;
};

int main() {
    int i, n, j;
    struct Time time;
    int mon[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &n);
    for (j = 0; j < n; j++) {
        scanf("%d%d%d", &time.year, &time.month, &time.day);
        int num = 0;
        if ((time.year % 4) || (!(time.year % 100) && (time.year % 400)))
            mon[1] = 28;
        else
            mon[1] = 29;
        for (i = 0; i < time.month - 1; i++)
            num += mon[i];
        num += time.day;
        printf("%d\n",num);
    }
    return 0;
}