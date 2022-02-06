#include<stdio.h>
typedef struct complex
{
  float real,imaginary;
}complex;
int get_n();
complex input_complex();
complex add(int n,complex  a[n]);
void output(int n,complex c[n],complex result);
int main()
{
  complex result;
  int size=get_n();
  int i;
  complex a[size];
  for(i=size;i>0;i--)
  a[i]=input_complex(i);
  result=add(size,a);
  output(size, a,result);
}
int get_n()
{
  int n;
  printf("enter the number  of complex numbers\n");
  scanf("%d " ,&n);
  return n;
}
complex input_complex(int n)
{
  complex a[n];
  a[n].imaginary=(n+n)+1;
  a[n].real=(n+n);
  return a[n];
}
complex add(int n,complex a[n])
{
  complex result;
  result.real=0,result.imaginary=0;
  int i;
  for(i=1;i<=n;i++)
  {
   result.real+=a[i].real;
 result.imaginary+=a[i].imaginary;
  }
  return result;
}
void output(int n,complex c[n],complex result)
{
  int i;
  for(i=1;i<n;i++)
printf("%f +%fi+",c[i].real,c[i].imaginary);
printf("%f +%fi is\n %f+%fi" ,c[n] .real,c[n] .imaginary, result.real,result.imaginary);
}
