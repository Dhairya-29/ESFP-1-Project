#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int homepage()
{
	char fname[10];
	char mname[10];
	char lname[10];
	char branch[30];
	char mail[30];
	printf("\nENTER NAME :");
	fflush(stdin);
	scanf("%s %s %s",&fname,&mname,&lname);
	printf("\nENTER MAIL:");
	fflush(stdin);
	scanf("%s",&mail);
	printf("\nENTER BRANCH:");
	fflush(stdin);
	scanf("%s",&branch);
	
	printf("\n NAME IS %s %s %s",fname,mname,lname);
	printf("\n MAIL IS %s",mail);
	printf("\n BRANCH IS %s",branch);
}
int main()
{
	char *uid="ADMIN",*psd="12345";
	char uname[5],pass[5],a[10],d[10],e[10];
	int len1,len2,c,b;
	char ch;
	FILE *p;
	
	int choice;
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	printf("\n                                                    LAW WEBSITE                                                ");
	printf("\n                                                       INDIA                                                       ");
	printf("\n                                                ACADEMIC YEAR 2022-23                                                 ");
	printf("\n                                                 BY : DHAIRYA DAVE                                                    \n");
	printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	
	printf("                                                   TELL US ABOUT YOURSELF                ");
	printf("\n");
	printf("\n");	
	
	printf("\nPRESS <1> know more about CRIMINAL LAW ~");
	printf("\nPRESS <2> know more about INDIAN PENAL CODE ~");
    printf("\nPRESS <3> know more about THE CODE OF CRIMINAL PROCEDURE ~");
    printf("\nPRESS <4> know more about CIVIL LAW ~");
    
	printf("\n");
	printf("\nENTER YOUR CHOICE :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
	
	
	p=fopen("D:\\GUNI\\ESFP-1\\C_L.txt","r");
	while((ch=getc(p))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p);
	
	break;
	
	case 2:
		
	p=fopen("D:\\GUNI\\ESFP-1\\ipc.txt","r");
	while((ch=getc(p))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p);
		

	break;
		
	case 3:
	
	p=fopen("D:\\GUNI\\ESFP-1\\crpc.txt","r");
	while((ch=getc(p))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p);
	
	break;
		
	case 4:
		
	p=fopen("D:\\GUNI\\ESFP-1\\civil_law.txt","r");
	while((ch=getc(p))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(p);

	break;
		
	}
		
		
		
		
		
	return 0;
}
