#include<stdio.h>

void main() {
	/*int z;
	z =  5 + 3 * 4 / (2 + 4) / 2 ;
	printf(" z=\n %d", z);*/


	/*int y;
	y = 3 * 9 *(3 + (9 * 3 / (3)));
	printf(" y=\n %d", y);*/

	int x;
	int m;
	scanf_s("x= %d", &x);
	m = 2 * x;
	printf("m=\n %d", m);

	
}

/* 
<<<<<<<<<<<<<THE GAME ANSWER LOGIC >>>>>>>>>>>>>>
#include<stdio.h>
#include<math.h>

int board[20], count;

int main()
{
    int n=8, i, j;
    void queen(int row, int n);

    
    queen(1, n);
    return 0;
}

void print(int n)
{
    int i, j;
    printf("\n\nSolution %d:\n\n", ++count);

    for (i = 1; i <= n; ++i)
        printf("\t%d", i);

    for (i = 1; i <= n; ++i)
    {
        printf("\n\n%d", i);
        for (j = 1; j <= n; ++j)
        {
            if (board[i] == j)
                printf("\tQ"); 
            else
                printf("\t-"); //empty slot
        }
    }
}


int place(int row, int column)
{
    int i;
    for (i = 1; i <= row - 1; ++i)
    {
        if (board[i] == column)
            return 0;
        else
            if (abs(board[i] - column) == abs(i - row))
                return 0;
    }

    return 1; 
}

void queen(int row, int n)
{
    int column;
    for (column = 1; column <= n; ++column)
    {
        if (place(row, column))
        {
            board[row] = column; 
            if (row == n) 
                print(n); 
            else 
                queen(row + 1, n);
        }
    }
}
*/
