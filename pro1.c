#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define RAND_RANGE 2

int rand_val(){
    srand(time(0));
    return((rand()%RAND_RANGE)+1);
}

int main(){
    int count;
    printf("Enter the value of count\n");
    scanf("%d",&count);
    printf("Range of random value 0<Random_value<3\n");
    for(int i=0;i<count;i++){
        printf("Sleeping for 2 sec..............\n");
        sleep(2);
        printf("\nRandom value : %d\n\n",rand_val());
    }
}