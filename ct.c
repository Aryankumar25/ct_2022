#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int c;
    printf("1-Arithmetic operators\n2-Increment and Decrement operator\n3-Assignment operator\n4-Relational operator\n5-Logical operator\n6-Conditional operators\n");
    scanf("%d",&c);
    int a1,a2;
    a1=x;
    a2=b;
    int r=0;
    switch (c){
        case 1:
        printf("Addition:%d",x+y);
        printf("\nSubstraction:%d",x-y);
        printf("\nMultiplication:%d",x*y);
        printf("\nDivision:%d",x/y);
        printf("\nRemainder division:%d",x%y);
        break;
        case 2:
        printf("Increament operator:%d %d\n",++x,++y);
        printf("Decreament operator:%d %d",--x,--y);
        break;
        case 3:
        printf("=:%d %d\n",a1,a2);
        printf("+=:%d %d\n",a1+=x,a2+=y);
        printf("-=:%d %d\n",a1-=x,a2-=y);
        break;
        case 4:
        printf("%d==%d is %d\n",x,y,x==y);
        printf("%d>=%d is %d\n",x,y,x>=y);
        printf("%d<=%d is %d\n",x,y,x<=y);
        printf("%d!=%d is %d\n",x,y,x!=y);
        printf("%d>%d is %d\n",x,y,x>y);
        printf("%d<%d is %d\n",x,y,x<y);
        break;
        case 5:
        printf("x is equal to b and a greater than b is%d \n",(x==y) && (x>y));
        printf("x is equal to b or a less than b is %d \n", (x==y) || (x<y));
        printf("x not equal to b or a less than b is %d \n", (x!=y) || (x<y));
        break;
        case 6:
        x>y?printf("x is greater than y"):printf("y is greater than x");
        break;
        default:
        printf("Enter valid choice");
    }
    return 0;
}
