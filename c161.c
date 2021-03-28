//matrix operations
/*
Tandale Shubham Parmeshwar
Programmer
SKNSCOE,Korti.
Email-tsp@outlook.in
*/
#include <stdio.h>
void matrix();																	//Matrix Operations
void matrix1(int total[100], int row, int col); //Matrix Operations
void main()
{
	matrix(); //Matrix Operations
}
void matrix() //Matrix Operations
{
	int after = 0;
	int ch, n, j, i, row, y[10], x1, x2, y1, y2, l, x, cross, z, k = 0, rc = 0, col, matno = 1;
	float mat1[5][5], sum[5][5], sub[5][5], prod[5][5], div[5][5];
	float total[1000], minor[5][5];
rc:
	printf("enter row size:");
	scanf("%d", &row);
	printf("enter column size:");
	scanf("%d", &col);
	cross = row * col;
	if (rc > 0)
	{
		goto afterresult;
	}
	printf("enter matrix %d:\n", matno);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("enter element[%d][%d]:", i + 1, j + 1);
			scanf("%f", &sum[i][j]);
			sub[i][j] = sum[i][j];
			prod[i][j] = sum[i][j];
			div[i][j] = sum[i][j];
			total[k] = sum[i][j];
			k++;
		}
	}
	goto decision;
	for (int n = 1; n >= 1; n++)
	{
		if (n > 1)
		{
		decision:
			printf("0.enter next matrix:\n1.Arithmetic of Matrices\n3.transposes of matrices\n4.Minors of Matrices");
			printf("\nenter your choice:");
			scanf("%d", &ch);
			if (ch == 4)
			{
				if (after > 0)
				{
				}
				z = 1;
				y = k;
				x = 0;
				x1 = 0;
				x2 = 0;
				y1 = 0;
				y2 = 0;
				y = y / cross;
				for (l = 0; l < y; l++)
				{
					printf("matrix %d:\n", z);
					for (i = 0; i < row; i++)
					{
						for (j = 0; j < col; j++)
						{
							mat1[i][j] = total[x];
							printf("%f", mat1[i][j]);
							x++;
							printf("\t");
						}
						printf("\n");
					}
					printf("\Minors");
					for (i = 0; i < row; i++)
					{
						for (j = 0; j < col; j++)
						{
							for (x1 = 0, y1 = 0; x1 < col, y1 < col; x1++, y1++)
							{
								for (x2 = 0, y2 = 0; x2 < col, y2 < col; x2++, y2++)
								{
									if (i != x1 && j != y2)
									{
										minor[i][j] = mat1[x1][x2] * mat1[y1][y2] - mat1[x2][x1] * mat1[y2][y1];
									}
								}
							}
							//xy2++;
							//		x2++;
							printf("\t");
						}
						//	x1++;
						//	y1++;
						printf("\n");
					}
					for (i = 0; i < row; i++)
					{
						for (j = 0; j < col; j++)
						{
							printf("\nMinors %f", minor[i][j]);
						}
					}
					z++;
				}
			}
			if (ch == 0)
			{
				goto next;
			}
			if (ch == 3)
			{
				z = 1;
				y = k;
				x = 0;
				y = y / cross;
				for (l = 0; l < y; l++)
				{
					printf("matrix %d:\n", z);
					for (i = 0; i < row; i++)
					{
						for (j = 0; j < col; j++)
						{
							mat1[i][j] = total[x];
							printf("%f", mat1[i][j]);
							x++;
							printf("\t");
						}
						printf("\n");
					}
					printf("Transpose of matrix %d:\n", z);
					for (j = 0; j < col; j++)
					{
						for (i = 0; i < row; i++)
						{
							//mat1[i][j]=total[x1];
							printf("%f", mat1[i][j]);
							x1++;
							printf("\t");
						}
						printf("\n");
					}
					z++;
				}
				goto afterresult;
			}
			if (ch == 1)
			{
				z = 1;
				y = k;
				x = 0;
				y[rc] = y[rc - 1] / cross;
				for (l = 0; l < y; l++)
				{
					printf("matrix %d:\n", z);
					for (i = 0; i < row; i++)
					{
						for (j = 0; j < col; j++)
						{
							mat1[i][j] = total[x];
							printf("%f", mat1[i][j]);
							x++;
							printf("\t");
						}
						printf("\n");
					}
					z++;
				}
				printf("Addition:\n");
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						printf("%f", sum[i][j]);
						printf("\t");
					}
					printf("\n");
				}
				printf("Subtraction:\n");
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						printf("%f", sub[i][j]);
						printf("\t");
					}
					printf("\n");
				}
				printf("Multiplication:\n");
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						printf("%f", prod[i][j]);
						printf("\t");
					}
					printf("\n");
				}
				printf("Division :\n");
				for (i = 0; i < row; i++)
				{
					for (j = 0; j < col; j++)
					{
						printf("%f", div[i][j]);
						printf("\t");
					}
					printf("\n");
				}
				goto afterresult;
			}
		}
	next:
		matno++;
		printf("enter matrix %d:\n", matno);
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("enter element [%d][%d]:", i + 1, j + 1);
				scanf("%f", &mat1[i][j]);
				sum[i][j] = sum[i][j] + mat1[i][j];
				sub[i][j] -= mat1[i][j];
				prod[i][j] *= mat1[i][j];
				div[i][j] /= mat1[i][j];
				total[k] = mat1[i][j];
				k++;
			}
		}
		goto decision;
	afterresult:
		printf("\n1.Restart this Program (if want to change size of rows & columns)\n2.Main Program\n3.Index\n4.Stop\n5.Continue-enter next matrix");
		printf("\nChoose one:");
		scanf("%d", &ch);
		if (ch == 1)
		{
			matrix(); //Matrix Operations
		}
		if (ch == 5)
		{
			printf("enter next matrix:\n");
			goto next;
		}
		if (ch == 6)
		{
			y[rc] = k;
			rc++;
			goto rc;
			after++;
		}

		else
		{
			choice(ch); //helper termination
		}
	}
	return 0;
}
void matrix1(int total[100], int row, int col) //Matrix Operations
{
}