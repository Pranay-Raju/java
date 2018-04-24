#include<stdio.h>
typedef struct student
{
    char name[20];
    int rollno;
    struct academics
    {
    char subname[10];
    int marks;
    }sub[5];
    float avg;
} Student;
char* parser(char* name )
{
    
}
typedef struct nd
{
 Student s;
 struct nd *next;
 
} Node;

float avg(Student s)
{
int avg = 0;
for(int i=0;i<5;i++)
{
    avg+=s.sub[i].marks;
    
}
return ((float)avg)/5.0;
}

void fn(Node *ptr, int i)
{
    
        printf("\nenter name of student  \t  %d \t:" ,i+1);
        //gets(obj[i].name);
        scanf("%s",&(ptr->s.name));
        puts(ptr->s.name);
        
        scanf("%d",&(ptr->s.rollno));
        printf("ehter roll no of student  %d \t:%d \n", i+1, ptr->s.rollno);
        
        for(int j=0;j<5;j++)
        {
        scanf(" %s", &(ptr->s.sub[j].subname));
        printf("enter subjects of student %d \t:%s \n",i+1,ptr->s.sub[j].subname);
        scanf(" %d", &(ptr->s.sub[j].marks));
        printf("enter marks of studens \t  %d \t:%d \n",i+1,ptr->s.sub[j].marks);
        
        }
            
        ptr->s.avg=avg(ptr->s);
        
printf(" -------------------------------------------------------------------------------------\n");        
    
}
void fn2(Node *ptr,int k)
{
    //output code
    //dispalying code
   
    printf("%d\t|\t%d|\t%s\t",k+1,ptr->s.rollno,ptr->s.name);
   //printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("|%d\t",ptr->s.sub[i].marks);
    }
    printf("|%.2f\n--------------------------------------------------------------------------------------\n",ptr->s.avg);
}

main()
{
    
    Node *head=NULL,*ptr=NULL;
    head= (Node *)malloc(sizeof(Node));
    ptr=head;
    fn(head,0);
    for(int i=1;i<10;i++)
    {
        ptr->next=(Node *)malloc(sizeof(Node));
        ptr=ptr->next;
        fn(ptr,i);
        ptr->next=NULL;
        
        
    }
    ptr=head;
     printf("S.NO\t\tROLL\tNAME\t\t M1\t M2\t DM\t PL\t CI\t AVG\n");
    printf(" =====================================================================================\n");
    //TODO : need to display sub name


   for(int i=0;i<10;i++)
    {
        
        fn2(ptr,i);
        ptr=ptr->next;
        
    }
    
    
}//end of main
