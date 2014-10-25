#include<stdio.h>

int main()
{
	int z, q=0;
	do
	{
		int a, i, j, count; count = 0;
		char arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
		printf("The position numbers are: \n");
		printf("  1  |  2  |  3  \n-----|-----|-----\n  4  |  5  |  6  \n-----|-----|-----\n  7  |  8  |  9   \n");
		printf("\n");
		printf("\n");
		printf("\n");
		do
		{      

			count= count + 1;
			printf("PLAYER 1 :- \n");
			printf("Enter the position number. \n");
			scanf("%d", &a);
			printf("\a");
			if (a == 1 || a == 2 || a == 3)
			{
				arr[0][a-1] = 'X';
			}
			else if (a == 4 || a == 5 || a == 6)
			{
				if (a== 4 || a == 5)
				{
					a = a % 3;
				}
				else
				{
					a = 3;
				}
				arr[1][a-1] = 'X';
			}
			else
			{
				a = a % 6;
				arr[2][a-1] = 'X';
			}

			for (i =0; i<3; i++)
			{
				for (j=0; j<3; j++)
				{
					printf("  %c  |", arr[i][j]);
				}
				printf("\n");
				printf("-----|-----|-----\n");
			}
			printf("\n");
			printf("\n");
			if (count >= 9) break;

			if (arr[0][0] == arr[1][1] && arr[1][1]  == arr[2][2] && arr[1][1] == 'X' || arr[0][0] == arr[0][1] && arr[0][1]== arr[0][2] && arr[0][1]=='X' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1]== 'X' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][1] == 'X' || arr[0][0]==arr[1][0] && arr[1][0] == arr[2][0] && arr[1][0] == 'X' ||arr[0][1]== arr[1][1] &&  arr[1][1] ==arr[2][1] &&  arr[1][1] == 'X' || arr[0][2]==arr[1][2] && arr[1][2] ==arr[2][2] && arr[1][2] == 'X' || arr[0][2]==arr[1][1] && arr[1][1] ==arr[2][0] && arr[1][1] == 'X' )
			{
				q = q+1;
				printf("\aPL\aAY\aER\a 1 \a WINS\a!!!\a\n");
				break;
			}
			else if (arr[0][0] == arr[1][1] && arr[1][1]  == arr[2][2] && arr[1][1] == 'O' || arr[0][0] == arr[0][1] && arr[0][1]== arr[0][2] && arr[0][1]=='O' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1]== 'O' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][1] == 'O' || arr[0][0]==arr[1][0] && arr[1][0] == arr[2][0] && arr[1][0] == 'O' ||arr[0][1]== arr[1][1] &&  arr[1][1] ==arr[2][1] &&  arr[1][1] == 'O' || arr[0][2]==arr[1][2] && arr[1][2] ==arr[2][2] && arr[1][2] == 'O' || arr[0][2]==arr[1][1] && arr[1][1] ==arr[2][0] && arr[1][1] == 'O' )
			{
				q = q+1;
				printf("PLAYER 2  WINS!!!\n");
				break;
			}

			printf("PLAYER 2 :- \n");
			printf("Enter the position number. \n");
			scanf("%d", &a);
			count = count + 1;
			if ( a ==1 || a==2||a==3)
			{
				arr[0][a-1] = 'O';
			}
			else if (a==4 ||a==5||a==6)
			{
				if (a ==4 || a ==5 )
				{
					a =a %3;
				}
				else if (a == 6)
				{
					a = 3;
				}
				arr[1][a-1] =  'O';
			}
			else
			{       a = a%6;
				arr[2][a-1] = 'O';
			}

			for (i =0; i<3; i++)
			{
				for (j=0; j<3; j++)
				{
					printf("  %c  |", arr[i][j]);
				}
				printf("\n");
				printf("-----|-----|-----\n");
			}
			printf("\n");
			printf("\n");
			
			if (arr[0][0] == arr[1][1]&& arr[1][1]  == arr[2][2] && arr[1][1] == 'X' || arr[0][0] == arr[0][1] && arr[0][1]== arr[0][2] && arr[0][1]=='X' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1]== 'X' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][1] == 'X' || arr[0][0]==arr[1][0] && arr[1][0] == arr[2][0] && arr[1][0] == 'X' ||arr[0][1]== arr[1][1] &&  arr[1][1] ==arr[2][1] &&  arr[1][1] == 'X' || arr[0][2]==arr[1][2] && arr[1][2] ==arr[2][2] && arr[1][2] == 'X' || arr[0][2]==arr[1][1] && arr[1][1] ==arr[2][0] && arr[1][1] == 'X' )
			{
				q = q+1;
				printf("\aPL\aAY\aER\a 1 \a WINS\a!!!\a\n");
				break;
			}
			else if (arr[0][0] == arr[1][1]&& arr[1][1]  == arr[2][2] && arr[1][1] == 'O' || arr[0][0] == arr[0][1] && arr[0][1]== arr[0][2] && arr[0][1]=='O' || arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][1]== 'O' || arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][1] == 'O' || arr[0][0]==arr[1][0] && arr[1][0] == arr[2][0] && arr[1][0] == 'O' ||arr[0][1]== arr[1][1] &&  arr[1][1] ==arr[2][1] &&  arr[1][1] == 'O' || arr[0][2]==arr[1][2] && arr[1][2] ==arr[2][2] && arr[1][2] == 'O' || arr[0][2]==arr[1][1] && arr[1][1] ==arr[2][0] && arr[1][1] == 'O' )
			{
				q = q+1;
				printf("\aPL\aAY\aER\a 2 \a WINS\a!!!\a\n");
				break;
			}
			
		      if (count >=9) break;
		}while(count<9);
		if (q == 0)
		{
		    printf("Oh! The game is a tie :-) \a\a\a\a\n");
		}
		 printf("Thank you for playing! \n");
		 printf("To play again, type zero(0), else press any key.\n");
		 scanf("%d", &z);
	}while(z==0);
	return 0;
}
