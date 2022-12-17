/*

Exercise 1

1) Ask a user to enter 5 floating numbers 

2) Calculate and print on the screen the average of these numbers

*/

#include<stdio.h>


//function to find the average of given 5 numbers
float avg(float n1,float n2,float n3,float n4,float n5);

void main()
{
    float n1,n2,n3,n4,n5;
    float result;
    printf("Enter five numbers (float):");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);

    result=avg(n1,n2,n3,n4,n5);
    printf("The average of %f, %f, %f, %f, %f is=%f\n",n1,n2,n3,n4,n5,result);
}

float avg(float n1,float n2,float n3,float n4,float n5){
    float avg;
    avg=(n1+n2+n3+n4+n5)/5.0;
    return avg;
}
