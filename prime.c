#include<stdio.h>
int main(){
    int num, i, count = 0;
    printf("Enter any number :");
    scanf("%d", &num);
    
    for(i=2; i<num; i++){
        
        if(num % i == 0){
            count++;
            break;
        }
        
        }
        if(count ==0){                  
            printf("This is a prime no.\n");
        } 
       
        else{
            printf("Not a prime no.\n");
        }
               
    
    return 0;
}