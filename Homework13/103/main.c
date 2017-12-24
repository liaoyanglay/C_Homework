#include <stdio.h>

struct Student {
    int num;
    char name[19];
    double score;
};

int main() {
    struct Student s[3];
    struct Student *p = s;
    int i, n, j;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < 3; j++) {
            scanf("%d%s%lf",&s[j].num,s[j].name,&s[j].score);
        }
        for (j = 0; j < 3; j++) {
            printf("%d\t%-20s%f\n",s[j].num,s[j].name,s[j].score);
        }
        for (j = 0; j < 3; j++) {
            printf("%d\t%-20s%f\n",(p+j)->num,(p+j)->name,(p+j)->score);
        }
    }
    return 0;
}