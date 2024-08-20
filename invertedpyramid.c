#include <stdio.h>

int main()
{
    int rows=5, i, j, k;
    
    for(i=rows;i>= 1;i--){
        
        for(k=0; k<rows - i; ++k)
            printf(" ");
            
        for(j=1; j<= 2* i - 1;++j)
            printf("*");
            printf("\n");
            
    }
    return 0;
}
