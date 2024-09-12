#include<stdio.h> 

int main()
{
    int r;//r refirs to the radious of circal
    printf("please enter thhe radious of the circal:");
    scanf("%d",&r);
    float area;
    area = 3.14159 * r * r;
    printf ("the area of the circal is %f\n",area);


    return 0;
}