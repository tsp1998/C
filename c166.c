//Display Multiplication Of Matrix
//Tandale Shubham Parmeshwar
//E36 F.E.(Mech.) SKNSCOE,Korti.
#include <stdio.h>
void matrix(float a[3][3], float b[3][3], int row1, int col1, int row2, int col2);
void main()
{
  int i, j, mat1row, mat1col, mat2row, mat2col;
  float a[10][10], b[10][10];
  printf("Enter Number of Rows of First Matrix:\n");
  scanf("%d", &mat1row);
  printf("Enter Number of Columns of First Matrix:\n");
  scanf("%d", &mat1col);
  printf("Enter Number of Rows of Second Matrix:\n");
  scanf("%d", &mat2row);
  printf("Enter Number of Columns of Second Matrix:\n");
  scanf("%d", &mat2col);

  if (mat1col != mat2row)
  {
    printf("\nrows of First matrix should be equal to Columns of Second matrix\nTry Again\n");
    main();
  }

  printf("Enter Content of First Matrix:\n");
  for (i = 0; i < mat1row; i++)
  {
    for (j = 0; j < mat1col; j++)
    {
      printf("Element%d,%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }
  }
  printf("Enter Content of Second Matrix:\n");
  for (i = 0; i < mat2row; i++)
  {
    for (j = 0; j < mat2col; j++)
    {
      printf("Element%d,%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }
  }
  matrix(a, b, mat1row, mat1col, mat2row, mat2col);
}

void matrix(float a[10][10], float b[10][10], int row1, int col1, int row2, int col2)
{
  float matResult[5][5];
  int i, j, k;
  float sum = 0;
  // if(row2<row1)
  //{
  for (i = 0; i < row1; i++)
  {
    for (j = 0; j < col2; j++)
    {
      for (k = 0; k < row2; k++)
      {
        sum += a[i][k] * b[k][j];
      }
      matResult[i][j] = sum;
      sum = 0;
    }
  }

  for (j = 0; j < row1; j++)
  {
    for (k = 0; k < col2; k++)
    {
      printf("%.3f\t", matResult[j][k]);
    }
    puts("\n");
  }
  // }
}