#include<stdio.h>
   
   typedef struct complexnumber
   {
      int real;
      int img;
   } complex;

   complex add(complex x,complex y);
   
int main(){

    complex a, b , sum;

    a.real = 2;
    a.img = 3;

    b.real = 4;
    b.img = 5;

    printf("\n a = %d + %di",a.img,a.img);
    printf("\n b = %d + %di",b.real,b.img);

    sum = add(a , b);

    printf("\n sum = %d + %di",sum.img,sum.real);

    return 0;
}

complex add(complex x,complex y)
{
    complex add;

    add.real = x.real + y.real;
    add.img = x.img + y.img;

    return (add);
}