/*Write a program to find the distance between two points
void input(float *x1, float *y1, float *x2, float *y2);
void find_distance(float x1, float y1, float x2, float y2, float *area);
void output(float x1, float y1,float x2, float y2, float area);*/
#include<stdio.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter any number");
  scanf("%f%f",x1,y1);
  printf("enter any number");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  float x,y,root=0,n;
  x=(x2-x1)*(x2-x1);
  y=(y2-y1)*(y2-y1);
  n=x+y;
  *area=n/2;
  while(*area!=root)
  {
    root=*area;
    *area=(n/root+root/2);
  }
}
void output(float x2, float y2,float x1, float y1, float area)
{
  printf("distance between points(%0.3f,%0.3f)and(%0.3f,%0.3f)=%0.3f\n",x2,x1,y2,y1,area);
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&x2,&y1,&y2);
  find_distance(x2,x1,y2,y1,&area);
  output(x2,x1,y2,y1,area);
  return 0;
}
