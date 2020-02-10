#include <stdio.h>
int main()
{
    int avg = 0;
    int sum =0;
    int x=0;

    int num[8];

    for (x=0; x<8;x++)
    {
        printf("Enter unit marks %d \n", (x+1));
        scanf("%d", &num[x]);
    }
    for (x=0; x<8;x++)
    {
        sum = sum+num[x];
    }

    avg = sum/8;

    printf("\nTotal marks entered marks is: %d\n", sum);
    printf("\nAverage of entered marks is: %d\n", avg);

    if(avg>= 70){
        printf("Grade A\n");
    }else if(avg>=60 && avg<70){
        printf("Grade B\n");
    }else if(avg>=50 && avg<60){
        printf("Grade C\n");
    }else if(avg>=40 && avg<50){
       printf("Grade D\n");
    }else{
        printf("Grade E\n");
    }


    return 0;
}
