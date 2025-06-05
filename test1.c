#include<stdio.h>
void main()
{


int hours, minutes, second, totalseconds;


printf("Enter total seconds: ");
scanf("%d",&totalseconds);

hours = totalseconds / 3600;
minutes = totalseconds %= 3600 / 60;

second = totalseconds % 60;

printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);


return 0;
}














