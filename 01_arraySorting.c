#include <stdio.h>
#include <stdlib.h>

void solution(int *arr,int length){
    int temp = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j <length;  j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }

}

void main(){
    int arr[]={1,-5,2,4,3};
    int temp =0;
    solution(arr,sizeof(arr)/sizeof(arr[0]));
    printf("[");
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d",arr[i]);
        if (i <(sizeof(arr)/sizeof(arr[0]))-1 )
        {
            printf(",");
        }
    }
    printf("]");
}