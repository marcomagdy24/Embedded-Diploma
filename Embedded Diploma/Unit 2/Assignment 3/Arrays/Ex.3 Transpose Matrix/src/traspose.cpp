#include <stdio.h>

int main(void) {

	int row,column;

	printf("Enter Row and Column :" );
	fflush(stdout);
	scanf("%d%d",&row,&column);
	float matrix [row][column];
	float trans_matrix [column][row];
	for (int r = 0;r<row;r++){
		for (int c = 0;c<column;c++){
			printf("Enter (%d,%d) : ",r,c);
			fflush(stdout);
			scanf("%f", &matrix[r][c]);
		}
	}
	for (int r = 0;r<row;r++){
		for (int c = 0;c<column;c++){
			trans_matrix[c][r] = matrix[r][c];
		}
	}

	printf("Original Matrix \n");
	for (int r = 0;r<row;r++){
		for (int c = 0;c<column;c++){
			printf("%.2f     ",matrix[r][c]);
		}
		printf("\n");
	}

	printf("Transposed Matrix \n");

	for (int r = 0;r<column;r++){
		for (int c = 0;c<row;c++){
			printf("%.2f     ",trans_matrix[r][c]);
		}
		printf("\n");
	}

}

