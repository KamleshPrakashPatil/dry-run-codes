#include<stdio.h>

int add(int,int);

int main()
{
 int A=23;
 int B=43;
 int C=0;
 
 C = add(A,B);
 
 printf("answer = %d\n",C);
 return 0;
}
int add(int no1, int no2)
{
 int ans= 0;
 ans = no1+no2;
 return ans;
}

