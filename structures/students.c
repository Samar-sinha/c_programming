#include<stdio.h>
#include<string.h>
int main(){
    typedef struct students {
        int M_maths;
        int M_phy;
        int M_chem;
        char grade;
        char name[15];
    } students;

    students arr[3]; 
    strcpy(arr[0].name, "samar");
    arr[0].M_chem = 80;
    arr[0].M_maths = 50;
    arr[0].M_phy = 100;
    arr[0].grade = 'B';
    
    strcpy(arr[1].name, "sahil");
    arr[1].M_chem = 85;
    arr[1].M_maths = 70;
    arr[1].M_phy = 90;
    arr[1].grade = 'A';

    strcpy(arr[2].name, "suraj");
    arr[2].M_chem = 90;
    arr[2].M_maths = 85;
    arr[2].M_phy = 85;
    arr[2].grade = 'A';

    for(int i=0; i<3; i++){
        printf("%s\n",arr[i].name);
        printf("MATHS MARKS : %d\n",arr[i].M_maths);
        printf("CHEM MARKS : %d\n",arr[i].M_chem);
        printf("PHY MARKS : %d\n",arr[i].M_phy);
        printf("GRADE : %c\n",arr[i].grade);
        printf("\n");
    }
    return 0;
}