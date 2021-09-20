
#include <stdio.h>

int main()
{   
    int n;
    scanf("%d",&n);
    float arr[n];//int arr = malloc(sizeof(int)*n +1);
    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    //sort 
    for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%g  ",arr[i]);
    }
    //sort 

    return 0;
}
