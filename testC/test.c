#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Hello, World!\n");
    char *name = (char *)malloc(50 * sizeof(char));
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    free(name);
    return 0;
}