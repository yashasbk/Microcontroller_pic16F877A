/*
Name : Yashas B K 
Description : This code gives the initial value for the timer register
Note : Better to take the i value as max as possible as it will reduce the number of interrupt calls which inturn reduces context switching
*/

#define INITIAL 1  //This is the initial value Note:never make it 0
#define MAX     256  // This the resolution of the timer 2^8 or 2^16
#define TIME    1000000000  //Enter time you need in nano seconds
#define QUANTUM 200  //Enter the time required for tick in your uC
#include <stdio.h>

int main()
{
    for(int i=INITIAL; i<= MAX; i++)
    {
        if(TIME%(QUANTUM*i)==0)
        {
            printf("\ni is %d\n",i);
            printf("Count value is %ld",TIME/(QUANTUM*i));
            printf("\nInitial value to set in timer is %d",MAX - i);
        }
    }
    
    return 0;
}
