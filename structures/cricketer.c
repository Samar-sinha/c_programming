#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfmatches;
        float average;
    } cricketer;

    cricketer arr[3];

    for(int i=0; i<3; i++){
        printf("Enter the name : ");
        scanf(" %[^\n]",arr[i].name);
        // getchar();
        // fgets(arr[i].name, 15, stdin);
        // arr[i].name[strcspn(arr[i].name, "\n")] = '\0'; // Remove newline character for fgets

        printf("Enter the age : ");
        scanf("%d",&arr[i].age);

        printf("Enter the no. of matches played : ");
        scanf("%d",&arr[i].noOfmatches);

        printf("Enter the average : ");
        scanf("%f",&arr[i].average);
    }

    for(int i=0; i<3; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("No. of matches played : %d\n",arr[i].noOfmatches);
        printf("Average : %f\n",arr[i].average);
        printf("\n");
    }
    return 0;
}