/*Write a program to find whether the three points form a triangle.
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)*/
#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter vertex one");
  scanf("%f%f",x1,y1);
  printf("enter vertex two");
  scanf("%f%f",x2,y2);
  printf("enter vertex three");
  scanf("%f%f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int result;
  result=x1*(y2-y1)+x2*(y3-y1)+x3*(y1-y2);
  return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle==0)
  printf("it forms a triangle");
  else
  printf("it doesn't forms triangle");
}
int main()
{
  float x1,x2,x3,y1,y2,y3;
  int istriangle;
  input(&x1,&x2,&x3,&y1,&y2,&y3);
  istriangle=is_triangle(x1,x2,x3,y1,y2,y3);
  output(x1,x2,x3,y1,y2,y3,istriangle);
  return 0;
}