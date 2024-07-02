#include <stdio.h>

int main() {
    int q, r, s, p;     // q, r, s are positive | p is even

    printf("Enter values of q, r, s, and p: ");
    scanf("%d %d %d %d", &q, &r, &s, &p);

    if (q > 0 && r > 0 && s > 0) {
        if (p % 2 == 0) {
            if (q > r && s > p) {
                if ((r + s) > (p + q))
                    printf("Correct Values\n");
                else
                    printf("Wrong Values\n");
            } else {
                printf("Wrong Values\n");
            }
        } else {
            printf("p is not even.\n");
        }
    } else {
        printf("q, r, and s must be positive.\n");
    }

    return 0;
}
