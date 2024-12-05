#include<stdio.h>

void pNumber(int *arr , int n)
{
    for(int i=0;i<n;i++){
        printf("%d : %d\n",i,arr[i]);
    }
}
void _pNumber(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d : %d\n",i,arr[i]);
    }

}

int main()
{
    int arr[]={1,2,3,4,5,6};

    pNumber(arr ,6);
    _pNumber(arr,6);

    return(0);
}