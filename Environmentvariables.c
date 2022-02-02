// Environment variables have a name and a value which is a string.
// Environment variables help in telling the user about the system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char value[10];
    strcpy(value,getenv("OS"));
    printf("OS : %s",value);
    int *location = (int *)(&value[3]);
    strcpy(value,getenv("NUMBER_OF_PROCESSORS"));
    printf("\nNumber of processors %s",value);
     return 0;
}
