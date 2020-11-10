#include <stdio.h>
#include <float.h>

int main()

{
    /*This shows the storage taken by float type and its ranges*/
    printf("Storage size for float : %d \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN );
    printf("Maximum float positive value: %E\n", FLT_MAX );
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}
