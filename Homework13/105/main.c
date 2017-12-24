#include <stdio.h>
#include <stdlib.h>

struct string {
    char c;
    struct string *next;
};

void create_list(struct string **headp);

int main() {
    struct string *head, *p;
    int i=0, n;
    char *s;
    create_list(&head);
    p = head;
    while (p) {
        printf("%c", p->c);
        p = p->next;
        i++;
    }
    printf("\n\n");
    s = malloc((i + 1) * sizeof(char));
    p = head;
    for (n = 0; n < i; n++) {
        s[n] = p->c;
        p = p->next;
    }
    s[i + 1] = '\0';
    printf("%s\n", s);
    return 0;
}

void create_list(struct string **headp) {
    struct string *tail, *temp;
    char c;
    tail = malloc(sizeof(struct string));
    *headp = tail;
    if ((tail->c = getchar()) != '#') {
        while ((c = getchar()) != '#') {
            temp = malloc(sizeof(struct string));
            tail->next = temp;
            temp->c = c;
            tail = temp;
        }
        tail->next = NULL;
    } else {
        tail->next = NULL;
    }

}