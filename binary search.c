/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={1,13,21,34,45,52};
    int left=0;
    int num=21;
    int middle;
    int right=sizeof(arr)/sizeof(arr[0])-1;
    
    while(left<=right)
    {
        middle=(left+right)/2;
    
        if(arr[middle] == num){
            printf("found element %d at index %d\n",num,middle);
            return 0;
        }else if (arr[middle]>num){
            right = middle-1;
        } else {
            left = middle + 1;
        }
}


    printf("element not found\n");

    return 0;
}