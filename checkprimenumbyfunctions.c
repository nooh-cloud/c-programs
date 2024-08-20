#include<stdio.h>
int isPrime(int N){
    
    for(int i = 2; i < N; i++){
        if(N % 2 == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    
    if(isPrime(N)){
        printf("%d is a Prime number. ",N);
    }else{
        printf("%d is not a Prime number. ",N);
    }
    
    return 0;
    
}
