#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the dress Code Day:");     //EX:Monday=1
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Uniform Day");
        break;
    case 2:
        printf("Bussiness Casual day");
        break;
    case 3:
        printf("Formals Day");
        break;
    case 4:
        printf("Bussiness Formal");
        break;
    case 5:
        printf("casuals Day");
        break;
    case 6:
        printf("casuals Day");
        break;
    default:
        printf("Leave day");
    }
    main();
    return 0;
}
