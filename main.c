#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    struct academics
    {
    char subname[10];
    int marks;
    }sub[5];
}obj[10];
main()
{
    //input code
    //taking input from usser
    for(int i=0;i<10;i++)
    {
        printf("\nenter name of student  \t  %d \t:" ,i+1);
        //gets(obj[i].name);
        scanf("%s",&(obj[i].name));
        puts(obj[i].name);
        
        scanf("%d",&(obj[i].rollno));
        printf("ehter roll no of student  %d \t:%d \n", i+1, obj[i].rollno);
        
        for(int j=0;j<5;j++)
        {
        scanf(" %s", &(obj[i].sub[j].subname));
        printf("enter subjects of student %d \t:%s \n",i+1,obj[i].sub[j].subname);
        scanf(" %d", &(obj[i].sub[j].marks));
        printf("enter marks of studens \t  %d \t:%d \n",i+1,obj[i].sub[j].marks);
        
        
            
        }
        
printf(" ------------------------------------------------------------------------\n");        
    }
    
    
    //output code
    //dispalying code
    printf("s.no\t\tRoll\tname\tsubs\tM1\tM2\tDM\tPL\tavg\n");
    printf(" ===========================================================================\n");
    //TODO : need to display sub name
for(int k=0;k<10;k++)
{
    printf("%d\t|\t%d|\t%s\t",k+1,obj[k].rollno,obj[k].name);
   //printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("|%d\t",obj[k].sub[i].marks);
    }
    printf("\n------------------------------------------------------------------------------------\n");
}
    
}