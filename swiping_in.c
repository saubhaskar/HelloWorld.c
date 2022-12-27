# include <stdio.h>
# include <conio.h>
# include <math.h>
int main(){
    // int a,b;
    // // printf("Enter the number:")
    // // scanf(a);
    // // Printf(second)
    // scanf("Enter the number a&b:",a,b);
int a,b;
    // int a=10; 
    // int b = 20;
    //  scanf("%d", +a);
    printf("Enter The First Number:");
    scanf("%d",&a);
    printf("Enter The Second Number:");
    scanf("%d",&b);
    printf("Before swap a=%d,b=%d",a,b);
    a=a+b; //(10+20)=30 int a=30;
    b=a-b;//(30-20)=10 int b=10;
    a=a-b;//(30-10)=20 int b=20
    printf("\nAfter swap a=%d,b=%d \n",a,b);

    float c=10.0f, d=20.0f;
    printf("Before swap c=%f,d=%f",c,d);
    a=a*b;//(10*20)=200 int a=200;
    b=a/b;//(200/20)=10 int a=10;
    a=a/b;//(200/10)=20 int b=20;
    printf("\nAfter swap c=%f,d=%f\n",c,d);
    }