#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <Windows.h>
#include <malloc.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "rus");
int **mass1,**mass2;
int n,i,j;
printf("Введите количество элементов в квадратичной матрице:");
scanf("%d",&n);


mass1 = (int**)malloc(n*sizeof(int*));
mass2 = (int**)malloc(n*sizeof(int*));
for(i=0;i<n;i++)
{
	mass1[i]=(int*)malloc(n*sizeof(int));
}

for(i=0;i<n;i++)
{
	mass2[i]=(int*)malloc(n*sizeof(int));
}
//Заполнение матрицы
srand((unsigned) time(NULL)); 
	printf("Table of matrix:");

		for(i=0;i<n ;i++)
		{ 
		printf("\n");
			
			for(j=0;j<n;j++)
			{
			mass1[i][j]=rand()%2;
			printf(" |%3d| ", mass1[i][j]);
			}
		}	
			for(i=0;i<n ;i++)
		{ 
		printf("\n");
			
			for(j=0;j<n;j++)
			{
			mass1[i][j]=rand()%2;
			printf(" |%3d| ", mass2[i][j]);
			}
		}	
printf("\n");
system("Pause");
return 0;
}