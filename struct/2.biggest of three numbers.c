#include<stdio.h>
int main()
{
    struct numbers{
        int a, b, c;
        int largest;

    };
    struct numbers num;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num.a, &num.b, &num.c);
    if(num.a>num.b && num.a>num.c){
        num.largest = num.a;
    }
    if(num.b>num.a && num.b>num.c){
        num.largest = num.b;
    }
    else{
        num.largest=num.c;
    }
    printf("largest is: %d", num.largest);

}
