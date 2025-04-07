#include <stdio.h>
/*Output: 
1	
6	  1	
10	5	  1	
13	8	  4	  1	
15	10  6	  3	  1	
16	11	7	  4	  2 	1

  */
int main() {
    int arr[6][6] = {0};  // Initialize all values to 0
    int i, j, k, a = 5;

    // Step 1: Fill the array row-wise
    for (i = 0; i < 6; i++) {
        k = 1;
        for (j = a; j >= 0; j--) {
            arr[i][i + (a - j)] = k;  // Store values diagonally rightward
            k += j;
        }
        a--;
    }

    // Step 2: Print rotated (column-wise)
    for (j = 0; j < 6; j++) {
        for (i = 0; i < 6; i++) {
            if (arr[i][j] != 0)
                printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
