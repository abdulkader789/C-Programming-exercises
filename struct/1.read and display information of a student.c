#include<stdio.h>
int main()
{
    struct student{
        int roll;
        char name[80];
        float fees;
        char DOB[80];

    };
    struct student std1;
    printf("Enter roll name fees dateOfBirth: ");
    scanf("%d %s %f %s", &std1.roll, &std1.name, &std1.fees, &std1.DOB);
    printf("Roll is: %d\nName is: %s\nFees is: %f\nDOB is %s",
            std1.roll, std1.name, std1.fees, std1.DOB);
}
