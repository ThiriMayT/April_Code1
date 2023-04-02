#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
     // to prevent sequence repetition between runs
     srand(time(NULL));


     for(int i = 1; i <=10; i++)     // looping to print 10 numbers
     {
           printf( "data : %d\n" ,rand( ) % 45 +10);   // formula for numbers
     }

     return 0;
}
