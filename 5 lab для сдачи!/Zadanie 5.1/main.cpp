
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <Windows.h>
#include <malloc.h>
#include <time.h>
int main()
{
setlocale(LC_ALL,"rus");
int **M;
const int razm = 100;
int n,i,j,v,k, coutRazmer = 0, m_i[razm]; 
char *inced[razm]; // ������� ��������������
printf("������� ����������  ��������� � ������������ �������:");
scanf_s("%d",&n);
printf("\n1�� �������:");
//��������� ������������� ������� ��� �������� ������� ���������
srand((unsigned) time(NULL));
M=(int**)malloc(n*sizeof(int*));
printf_s("\n������� ���������");
	for(i=0;i<n;i++)
	{
	M[i]=(int*)malloc(n*sizeof(int));
	}

//������� 1.2 ��������� ������� ���������:

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++){	
		if(rand()%2){
			M[i][j]=rand()%10;	
		}
		else	
		M[i][j]=0;
			if(i==j){
			M[i][j]=0;
			}
		M[j][i]=M[i][j];
		}
	}
//����� ������� ���������:
	for(i=0;i<n;i++){
		printf_s("\n");
		for(j=0;j<n;j++){
			printf("|%3d|",M[i][j]);
			}
	}
//������� 2.1 �������� ������� ������������� � � �����:
for(i=v=0; i<n; i++){
for(j=i+1; j<n; j++) {
if (M[i][j])
v++; // ����� v - ����� ������
}
}
for(i=0; i<n; i++) {
inced[i] = (char *) malloc(v);
memset(inced[i], 0, v);
}
for(i=k=0; i<n; i++){
	for(j=i+1; j<n; j++){
		if (M[i][j]){
		inced[i][k] = inced[j][k] = M[i][j];
		k++;}
	}	
}
printf("\n�������� ������� ������������� ");
printf("\n");
for (i=0;i<n;i++)
{
printf("\n");
m_i[i]=inced[i][j];
for (j=0;j<v;j++)
{
if(inced[i][j]>m_i[i])
m_i[i]=inced[i][j];
printf(" %3d ",inced[i][j]);
}
}

//������� 1.2 ������ �����:

	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
		if( M[i][j]>0){
			coutRazmer+=1;
		}
		}
	}
printf("\n������ � �����(��):%d",coutRazmer);
//������� 2.2 ������ �����:
for(i=0;i<1;i++){
coutRazmer=0;
		for(j=i;j<n;j++){
			if(inced[i][j]>= 0)
			coutRazmer++;
		}
		}
printf("\n������ � �����(��):%d",coutRazmer);
//������� 1.3 ���� ������:

printf("\n������������� �������: ");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<n;j++)
{
if(M[i][j]!=0) piece++;
}
if(piece==0) 
	printf("%2d;",i+1);
}

printf("\n�������� �������:");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<n;j++)
{
if(M[i][j]!=0) piece++;
}
if(piece==1) 
	printf("%2d;",i+1);
}

printf("\n������������ �������: ");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<n;j++)
{
if(M[i][j]!=0) piece++;
}
if(piece==n-1) 
printf("%2d;",i+1);
}

//������� 2.3:
printf("\n������������� ������� c ��: ");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<v;j++)
{
if(inced[i][j]!=0) piece++;
}
if(piece==0) 
printf(" %2d;",i+1);
}
printf("\n�������� ������� � ��:");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<v;j++)
{
if(inced[i][j]!=0) piece++;
}
if(piece==1) 
printf(" %2d;",i+1);
}
printf("\n������������ ������� � ��:");
for(int i=0;i<n;i++)
{
int piece = 0;
for (j=0;j<v;j++)
{
if(inced[i][j]!=0) piece++;
}
if(piece==n-1) 
printf("%d,",i+1);
}

printf("\n");

system("Pause");	
return 0;
}





