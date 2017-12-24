#include <stdio.h>
#include <string.h>

struct Web {
    char simple[20];
    char whole[40];
    char url[100];
};

int main() {
    int i, n, j;
    scanf("%d", &n);
    struct Web web[n];
    char temp[100];
    for (i = 0; i < n; i++) {
        scanf("%s%s%s", web[i].simple, web[i].whole, web[i].url);
    }
    for (i = 0; i < n; i++) {
        printf("%-20s%-40s%s\n", web[i].simple, web[i].whole, web[i].url);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(web[j].simple, web[j + 1].simple) > 0) {
                strcpy(temp, web[j].simple);
                strcpy(web[j].simple, web[j + 1].simple);
                strcpy(web[j + 1].simple, temp);
                strcpy(temp, web[j].whole);
                strcpy(web[j].whole, web[j + 1].whole);
                strcpy(web[j + 1].whole, temp);
                strcpy(temp, web[j].url);
                strcpy(web[j].url, web[j + 1].url);
                strcpy(web[j + 1].url, temp);
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%-20s%-40s%s\n", web[i].simple, web[i].whole, web[i].url);
    }
    return 0;
}