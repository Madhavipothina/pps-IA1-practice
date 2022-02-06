#include<stdio.h>
int input();
int cmp(int a,int b,int c);
int main()
{
  printf("enter 3 numbers \n");
  int a,b,c,l ;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  printf("the greatest of %d ,%d and %d , %d \n" ,a,b,c,l);
  return 0;
}
int input()
{
  int i;
  scanf("%d" ,&i);
  return i;
}
int cmp(int a,int b,int c)
{
  if((a>b) &&(a>c))
  return a;
  else
  if((b>a)&&(b<c))
  return b;
  else
  if((c>a) &&(c<b))
  return c;
}

