#include<stdio.h>
float input();
float my_squareroot(float n);
void output(float n, float sqrt_result);
int main()
{
  float n ,sqrt_result;
  n=input();
  sqrt_result=my_squareroot(n);
  output(n,sqrt_result);
  return 0;
}
float input()
{
  float n;
  printf("Enter a number to find its square root\n");
  scanf("%f" ,&n);
  return n;
}
float my_squareroot(float n)
{
  float temp=0,squareroot;
  squareroot=n/2;
  while(squareroot!=temp)
  { 
    temp=squareroot;
    squareroot=(n/temp+temp)/2;
  }
  return squareroot;
}
void output(float n, float sqrt_results)
{
  printf("\nsquare root of %f if %f" ,n,sqrt_results);
}