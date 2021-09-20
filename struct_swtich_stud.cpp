#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void addstudent();
void display();
void searchstudent();
void searchbyname();
void modifybyid();
void ranklist();
void aboveranklist();
void avgcgpa();
struct stud_details
{
	char name[20];
	char gender[10];
	int roll_no;
	char city[30];
	float cgpa;
}obj[100];
static int i=0;
int main()
{  
   int password;
   char b[100];
   while(1)
   {  printf("--STUDENTS ADMINISTRATION--\n");
      printf("enter the user name:\n");
   	  gets(b);
   	  printf("enter the password :");
      scanf("%d",&password);
      	system("pause");
        system("cls");
      if(password==2021&& strcmp(b,"gct")==0)
      {
      	
	  
	int choice;

	printf("\t\t ---WELCOME TO STUDENTS RECORD SYSTEM----\t\n\n");
	while(1)
	{
		printf("1.ADD STUDENT'S DETAILS\n");
		printf("2.DISPLAY SHEET         \n");
		printf("3.SEARCH BY ID          \n");
		printf("4.SEARCH BY NAME         \n");
		printf("5.MODIFY BY ID           \n");
		printf("6. RANK LIST             \n");
		printf("7. ABOVE RANK LIST       \n");
		printf("8.AVGERAGE OF TOTAL STUD CGPA\n");
		printf("\nenter your choice :\n");
	
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				system("cls");
				addstudent();
				system("cls");
				break;
			case 2:
				system("cls");
				display();
				system("PAUSE");
				system("cls");
				printf("\n");
				break;
			case 3:
				searchstudent();
				printf("\n");
				break;
		    case 4:
		    	searchbyname();
		    	printf("\n");
		    	break;
		    case 5:
			    modifybyid();
				printf("\n");	
			case 6:
			    ranklist();
			    system("pause");
			    system("CLS");
				printf("\n");
				break;
			case 7:
			     aboveranklist();
				 printf("\n");
				system("PAUSE\n");
	        	system("cls");
				 break;
			case 8:
			     avgcgpa();
				 printf("\n");
				 break;	 		
			default:
				printf("Entered choice doesnot exists\n\n\n");
				system("PAUSE");
				system("CLS");
				 
		}
	}

} 
     else
{
	printf("\n   INCORRECT USERNAME OR PASSWORD\n.\n ");
	system("pause");
	system("cls");
}
}

}
void addstudent()
{
	printf("\n");
	printf("--ENTER THE STUDENT DETAILS--\n");
	printf("Enter the student's name : \n");
	scanf("%s",&obj[i].name);
	printf("Enter the student's gender : \n");
	scanf("%s",&obj[i].gender);
	printf("Enter the student's roll number : \n");
	scanf("%d",&obj[i].roll_no);
	printf("Enter the student's city : \n");
	scanf("%s",&obj[i].city);
	printf("Enter the student's cgpa : \n");
	scanf("%f",&obj[i].cgpa);
	i=i+1;       
}
void display()
	
{  
    printf("\nDISPLAYING THE STUDENTS DETAILS\n\n");
    if(i==0)
    {
    	printf("--THERE IS NO STUDENT DETAILS ---\n\n\n\n");
	}
	
	for(int j=0;j<i;j++)
	{   printf("STUDENT %d ,\n\n",j+1);
		printf("NAME    : %s\n",obj[j].name);
		printf("GENDER  : %s\n",obj[j].gender);
		printf("ROLL_NO : %d\n",obj[j].roll_no);
		printf("CITY    : %s\n",obj[j].city);
		printf("CGPA    : %.1f\n",obj[j].cgpa);
		printf("\n");
	}
	
	
}
void searchstudent()
{   if(i==0)
   {
	  printf("--THERE IS NO STUDENT DETAILS--\n\n\n");
	    system("PAUSE\n");
	  	system("cls");
   }
   else
   {
   	
	int id;
	printf("searching the details of a student\n");
	printf("enter the rollnum of student\n");
	scanf("%d",&id);
	for(int j=0;j<i;j++)
	{
	  if(obj[j].roll_no==id)
	  {
	  	printf("NAME     : %s\n",obj[j].name);
		printf("GENDER   : %s\n",obj[j].gender);
		printf("ROLL_NO  : %d\n",obj[j].roll_no);
		printf("CITY     : %s\n",obj[j].city);
		printf("CGPA     : %.1f\n",obj[j].cgpa);
		  }	
	}	
}
}
void searchbyname()
{  if(i==0)
   {
	  printf("--THERE IS NO STUDENT DETAILS--\n\n\n");
	  system("PAUSE\n");
    	system("cls");
   }
   else
   {
   	
  char stud_name[100];
   int count=0, j=0;
  printf("enter stud name\n");
  scanf("%s",&stud_name);
  for(j=0;j<i;j++)
  {
  	if(strcmp(obj[j].name,stud_name)==0)
    {
       count=count+1;
       
     }
    
  } 
   printf("%d\n",count);
	if(count==1)
  {
  	for(j=0;j<i;j++)
  	{
	  if(strcmp(obj[j].name,stud_name)==0)
	  {
	  
  		printf("NAME    : %s\n",obj[j].name);
		printf("GENDER  : %s\n",obj[j].gender);
		printf("ROLL_NO : %d\n",obj[j].roll_no);
		printf("CITY    : %s\n",obj[j].city);
		printf("CGPA    : %.1f\n",obj[j].cgpa);
	}
  }
  
}

  else
  printf("More students in same name available\n");
     searchstudent();
}
  
}
void modifybyid()
 {  
    if(i==0)
   {
	  printf("--THERE IS NO STUDENT DETAILS--\n\n\n");
	  system("PAUSE\n");
	  	system("cls");
   }
   else
   {
   	
 	int id;
	printf("Enter the stud id\n");
	scanf("%d",&id);
	printf("Changing the mentioned student's details\n");
	for(int j=0;j<i;j++)
	{
		if(obj[j].roll_no==id)
		{
			printf("\n");
        	printf("--ENTER THE NEW STUDENT DETAILS--\n");
        	printf("Enter the student's name : \n");
        	scanf("%s",&obj[j].name);
        	printf("Enter the student's gender : \n");
        	scanf("%s",&obj[j].gender);
         	printf("Enter the student's roll number : \n");
        	scanf("%d",&obj[j].roll_no);
        	printf("Enter the student's city : \n");
        	scanf("%s",&obj[j].city);
         	printf("Enter the student's cgpa : \n");
        	scanf("%f",&obj[j].cgpa);
        	break;
		}
	}
   }
}
void ranklist()
{  
    if(i==0)
   {
	  printf("--THERE IS NO STUDENT DETAILS--\n\n\n");
	  system("PAUSE\n");
	  	system("cls");
   }
   else
   {
   
  float a[100],temp;
	for(int j=0;j<i;j++)
	{
	  a[j]=obj[j].cgpa;

	}
	for(int j=0;j<i;j++)
       {
          for(int k=0;k<i;k++)
          {  
            if(a[j]>a[k])
            {
           	temp=a[j];
          	a[j]=a[k];
          	a[k]=temp;
			}
          	
		  }
		  
		 }
		 for(int k=0;k<i;k++)
		 {
		 	for(int j=0;j<i;j++)
		 	{
		 		 if(obj[j].cgpa==a[k])
		     	{
		 		printf("RANK - %d ,\n",k+1);
	           	printf("NAME    : %s\n",obj[j].name);
	        	printf("GENDER  : %s\n",obj[j].gender);
	        	printf("ROLL_NO : %d\n",obj[j].roll_no);
	        	printf("CITY    : %s\n",obj[j].city);
		        printf("CGPA    : %.1f\n",obj[j].cgpa);
	         	printf("\n");
		    	 }
			 }
			
		 }	
	}
}
void aboveranklist()

{   
      if(i==0)
   {
	  printf("--THERE IS NO STUDENT DETAILS--\n\n\n");
	  system("PAUSE\n");
	  	system("cls");
   }
    else
   {  
       float cgpa;
       printf("enter the cgpa\n");
      scanf("%f",&cgpa);
       for(int j=0;j<i;j++)
       {
       	 if(cgpa<=obj[j].cgpa)
       	 {  
       	        printf("NAME    : %s\n",obj[j].name);
	        	printf("GENDER  : %s\n",obj[j].gender);
	        	printf("ROLL_NO : %d\n",obj[j].roll_no);
	        	printf("CITY    : %s\n",obj[j].city);
		        printf("CGPA    : %.1f\n",obj[j].cgpa);
	         	printf("\n");
       	 	
			}
	   }
	  
  }
  
} 
void avgcgpa()
 {    float sum=0;
      float a[100];
 	for(int j=0;j<i;j++)
 	{
 		a[j]=obj[j].cgpa;
 		sum+=a[j];
	 }
	 printf("\nAVERAGE OF TOTAL STUDENTS: %.2f\n\n", sum/i);
	 system("pause");
	 system("cls");
	 
 }

