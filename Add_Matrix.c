#include <stdio.h>

int main() {
   int c, d, m, n, mat1[10][10], mat2[10][10], result[10][10];

   printf("Enter the order of matrix\n");
   scanf("%d%d", &m, &n);

   printf("Enter the First matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &mat1[c][d]);

   printf("Enter the Second matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &mat2[c][d]);

   printf("Sum of the matrices are\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         result[c][d] = mat1[c][d] + mat2[c][d];
         printf("%d ", result[c][d]);
      }
      printf("\n");
   }

   return 0;
}
