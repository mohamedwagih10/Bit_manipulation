#include <stdio.h>
#include <stdlib.h>
#include "manipulation.h"
void main()
{
    int num , pos , ope;

printf("enter the number\n");
scanf("%d",&num);
printf("enter the postion \n");
scanf("%d",&pos);
printf("operations 1-set 2-toggle 3-clear 4-read\n");
scanf("%d",&ope);
switch(ope){
case 1:
   printf("%d\n",Set_Bit(num,pos));

    break;
case 2:
    printf("%d\n",Toggle_Bit(num,pos));
    break;
case 3:
    printf("%d\n",Clear_Bit(num,pos));
    break;
case 4:
    printf("%d\n",Read_Bit(num,pos));
    break;
default :
    printf("enter operation from 1--4\n");
    break;
}
}
