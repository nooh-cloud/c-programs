#include<stdio.h>
int main(){

    float length,width,perimeter,area;

    printf("enter the lenght of the rectangle:");
    scanf("%f",&length);

    printf("enter the width of the rectangle:");
    scanf("%f",&width);

    perimeter = 2 * (length + width);
    printf("perimeter of the rectangle = %0.4f\n",perimeter);

    area = length * width;
    printf("area of the rectangle = %0.4f\n",area);

    return 0;
}