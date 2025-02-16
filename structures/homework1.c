#include<stdio.h>
#include<string.h>
    typedef struct student{
        int roll_no;
        char department[20];
        char course[20];
        int YOJ;
        char name[15];
    } student;

    void fun(student ram, student ramu){
        if(strcmp(ram.department, ramu.department) == 0){
            printf("Same department");
        }
        else {
            printf("Different department");
        }
        return ;
    }
int main(){
    student ram, ramu;
    
    strcpy(ram.name, "Ram kumar");
    strcpy(ram.course, "BCA");
    strcpy(ram.department, "Technical");
    ram.roll_no = 246003;
    ram.YOJ = 2024;

    strcpy(ramu.name, "Ramu kumar");
    strcpy(ramu.course, "MCA");
    strcpy(ramu.department, "Technical");
    ramu.roll_no = 236003;
    ramu.YOJ = 2023;

    fun(ram, ramu);
    return 0;
}