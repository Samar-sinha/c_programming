#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("\nEnter element no %d. ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    // index of an element = n-1, where n is the position of that element in the array.
    // float arr[4] = {1.5,6.9,5.4,3.6};
    // printf("%.1f",arr[1]);
    // char arr[4] = {'i','s','&','r'};
    // printf("%c",arr[3]);
    return 0;
}