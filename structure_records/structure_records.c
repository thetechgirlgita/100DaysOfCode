#include <stdio.h>
#include <stdlib.h>

struct records {
    int marks;
    char sub[30];
};

int main() {
    struct records *ptr;
    int i, numrecords;
    printf("\nEnter the number of records: ");
    scanf("%d", &numrecords);

    printf("\nEnter the name of the subject and marks respectively:\n ");
    ptr = (struct records *)malloc(numrecords * sizeof(struct records));
    for (i = 0; i < numrecords; ++i) {
        scanf("%s %d", (ptr + i)->sub, &(ptr + i)->marks);
    }

    printf("\n\tDisplaying Information:\n");
    for (i = 0; i < numrecords; ++i)
        printf("\t%s\t : \t%d\n", (ptr + i)->sub, (ptr + i)->marks);

    return 0;
}