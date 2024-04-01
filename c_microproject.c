#include<stdio.h>


typedef struct data{
        char name[100];
        int enroll;
        char div[100];
        char dept[100];
        int pract[5];
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
        for(int j=0;j<5;j++){
            printf("%d practical marks : \n",j+1);
            scanf("%d",&student[i].pract[j]);
            student[i].pract_total+=student[i].pract[j];
        }
        student[i].pract_total=student[i].pract_total/5;
        printf("\nEnter marks of UT 1 : ");
        scanf("%d",&student[i].ut[0]);
        printf("Enter marks of UT 2 : ");
        scanf("%d",&student[i].ut[1]);
        student[i].ut_total = (student[i].ut[0]+student[i].ut[1])/2;

    }
    int a, count=0;
    int search;
    printf("Enter enrollment number to search : ");
    scanf("%d",&search);
    for(a=0;a<n;a++){
        if(search==student[a].enroll){
            printf("Name : %s\n",student[a].name);
    printf("Enrollment number : %d\n",student[a].enroll);
    printf("Division : %s\n",student[a].div);
    printf("Department : %s\n",student[a].dept);
    printf("----------------------------------------\n");
    printf("|            Practical Marks           |\n");
    printf("|--------------------------------------|\n");
    printf("|  PR1 \t|  PR2 \t|  PR3 \t|  PR4 \t|  PR5 |\n");
    
    for(int b=0;b<5;b++){
        printf("|  %d   ",student[a].pract[b]);
        
    }printf("|");
    printf("\n----------------------------------------\n");
    printf("----------------------------------------\n");
           printf("|\t     Unit Test Marks           |");
           printf("\n|--------------------------------------|\n");
                printf("|     UT1    |     UT2    |  Avg Total |\n");
    for(int f=0;f<2;f++){
        printf("|     %d     ",student[a].ut[f]);
    }
    printf("|      %d    |",student[a].ut_total);
    printf("\n----------------------------------------\n");
    if (student[a].ut_total<=11)
    {
       printf("You are fail in Unit Test");
    }
    else
    {
      printf("You are passed in Unit Test ");
    }
    
     count++;
        }
        else
        printf("Invalid Enrollment Number.");
    } 
       
    return 0;
}
