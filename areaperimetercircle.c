#include<stdio.h>
int main (){
    const float pi = 3.14159;   //pi value

    float radius,perimetr,area;    
        printf("Enter the radius of circle:");   //radius of circle from user
     scanf("%f",& radius);

     perimetr = 2* pi * radius;       //calculation  perimeter
     printf("perimeter of the circle:%0.4f/n",perimetr);

area = pi * radius * radius;      //calculation area
printf("area of circle:%04f/n",area);

return 0;


}