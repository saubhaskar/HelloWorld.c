# include <stdio.h>
int main(){
    printf("Hello Wrold\n");
    
    int row;
    printf("Enter The Number:");
    scanf("%d\n",&row);
    // printf("\n");
  
   
    for( int i=1; i<=row; i++){
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
       
    }
    return 0;
}