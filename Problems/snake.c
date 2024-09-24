/* 1  2  3  4 
   8  7  6  5 
   9 10 11 12
  16 15 14 13 */
  
#include <stdio.h>
void printSnakePattern(int N) {
    int num = 1;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            // For even rows, print left to right
            for (int j = 0; j < N; j++) {
                printf("%2d ", num);
                num++;
            }
        } else {
            // For odd rows, print right to left
            int temp = num + N - 1;
            for (int j = 0; j < N; j++) {
                printf("%2d ", temp);
                temp--;
                num++;
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printSnakePattern(N);

    return 0;
}


