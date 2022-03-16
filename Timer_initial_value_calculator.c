/*
Name : Yashas B K 
Description : This code gives the initial value for the timer register
*/

#define INITIAL 1  //This is the initial value Note:never make it 0
#define MAX     256  // This the resolution of the timer 2^8 or 2^16
#include <stdio.h>

int main()
{
    int count=0,quantum=200;
    long time = 1000000000;
    for(int i=INITIAL; i<= MAX; i++)
    {
        if(time%(quantum*i)==0)
        {
            printf("\ni is %d\n",i);
            printf("Count value is %ld",time/(quantum*i));
            printf("\nInitial value to set in timer is %d",MAX - i);
        }
    }
    
    
    return 0;
}
