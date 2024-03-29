#include<stdio.h>


typedef struct data{
        char name[100];
        int enroll;
        char div[5];
        char dept[5];
        int pract[20];
        int pract_total;
        int ut[2];
        int ut_total;
    }data;

int main(){
    
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter Student Data Sequentially : ");
    data student[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Data For 230600%d : ",i+1);
        printf("\nName : ");
        scanf("%s",student[i].name);
        student[i].enroll = 2306001+i;
        printf("Enter division: ");
        scanf("%s",student[i].div);
        printf("Enter department : ");
        scanf("%s",student[i].dept);
        printf("Enter Practical marks : \n");
        student[i].pract_total=0;
        for(int j=0;j<20;j++){
            printf("%d practical marks : \n",j+1);
            scanf("%d",&student[i].pract[j]);
            student[i].pract_total+=student[i].pract[j];
        }
        student[i].pract_total=student[i].pract_total/4;
        printf("\nEnter marks of UT 1 : ");
        scanf("%d",&student[i].ut[0]);
        printf("Enter marks of UT 2 : ");
        scanf("%d",&student[i].ut[1]);
        student[i].ut_total = (student[i].ut[0]+student[i].ut[1])/2;

    }
    int a;
    int search;
    printf("Enter enrollment number to search : ");
    scanf("%d",&search);
    for(a=0;a<n;a++){
        if(search==student[a].enroll){
            printf("Name : %s\n",student[a].name);
    printf("Enrollment number : %d\n",student[a].enroll);
    printf("Division : %s\n",student[a].div);
    printf("Department : %s\n",student[a].dept);
    printf("                   Practical Marks                   \n");
    printf("PR1\tPR2\tPR3\tPR4\tPR5\tPR6\tPR7\tPR8\tPR9\tPR10\n");
    for(int b=0;b<10;b++){
        printf(" %d \t",student[a].pract[b]);
    }
    printf("\nPR11\tPR12\tPR13\tPR14\tPR15\tPR16\tPR17\tPR18\tPR19\tPR20\n");
    for(int b=10;b<20;b++){
        printf(" %d \t",student[a].pract[b]);
    }
        }
        else
        printf("Invalid Enrollment Number.");
    }
    
    
    return 0;
}