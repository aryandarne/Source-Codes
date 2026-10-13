
#include <stdio.h>

int main() {
    int length, breadth, area;

    printf("Length is: ");
    scanf("%d", &length);

    printf("Breadth is: ");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area is %d\n", area);

    return 0;
}
