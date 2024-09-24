/*  0 0
    0 1
    1 0
    1 1   */



#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Input: ");
    scanf("%d", &n);
      int total = pow(2, n); // Total number of combinations

    // Loop through each combination
    for (int i = 0; i < total; i++) {
        // Print each bit of the current combination
        for (int j = n-1; j>=0; --j) {
            printf("%d ", (i >> j) & 1);
        }
        printf("\n");
    }
    return 0;
}
