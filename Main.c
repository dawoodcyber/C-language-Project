#include<conio.h>
#include<string.h>
#include<stdio.h>

int main();
void MemberShipPlan();
void QuickSet();
void Admin();
void AddAdmin();
void RemoveAdmin();
void ChangAdmin();
void RemoveMembers();
void AddMembers();
void Members_User_Pass();

void MemberShipPlan()
{
	char choice;
	printf("\n\n\t\t\t****************************************\n");
	printf("\t\t\t\t      MemberShip Plan\n");
	printf("\t\t\t****************************************\n\n");
	printf("\t\t\t[1]\t3 Month Plan		Rs 6000\n");
	printf("\t\t\t[2]\t6 Month Plan		Rs 12000\n");
	printf("\t\t\t[3]\t1 Year Plan		Rs 20000\n");
	printf("\t\t\t[4]\t5 Year Plan		Rs 30000\n\n");
	printf("\t\t\t****************************************\n\n");
	
	printf("\t\t\tPress Enter to back to Main Page");
	scanf("%c", &choice);
	choice = getch();

	if(choice == 13)
	{
		main();
	}
}
void QuickSet()
{
	int MainMenuList;
	printf("\n\t\t\t***********************\n");
	printf("\t\t\t       Quick Set\n");
	printf("\t\t\t***********************\n\n");
	printf("\t\t\t[1]\tChange Members\n");
	printf("\t\t\t[2]\tMemberShip Plan\n");
	printf("\t\t\t[3]\tBack\n\n");
	printf("\t\t\t***********************\n");
	
	scanf("%d", &MainMenuList);

	if(MainMenuList == 1)
	{
		Admin();
	}
	else if(MainMenuList ==2)
	{
		MemberShipPlan();
	}
	else if(MainMenuList == 3)
	{
		main();
	}
	else
	{
		printf("\n\t\t\tINVALID INPUT");
		QuickSet();
	}
}

void ChangeAdmin()
{
	int Ad, i, sum=0;
	char Name[50], Pass[30];
	printf("\t\t\t____________________________________\n\n");
	printf("\t\t\t[1]\tADD ADMIN\n");
	printf("\t\t\t[2]\tREMOVE ADMIN\n");
	scanf("%d", &Ad);
	
	if(Ad == 1)
	{
		AddAdmin();
	}
	else if(Ad ==2)
	{
		RemoveAdmin();
	}
	else
	{
		printf("\t\t\t INVALID INPUT\n");
		ChangeAdmin();
	}


}
	void AddAdmin()
	{	
		int i, cO=1;
		char naam[30], pass[30], N[30];
		gets(naam);
		printf("Enter a Name: (upto 10 Characters only!)");
		gets(N);
		for(i=0; N[i]!='\0'; i++)
		{
			if(i == 10)
			{
				cO=0;
				printf("\n\t\t\t\tINVALID INPUT\n");
				ChangeAdmin();
				break;
			}
		}
	
		printf("Enter Password: (upto 7 Characters only!)");
		gets(pass);
		for(i=0; pass[i]!='\0'; i++)
		{
			if(i == 7)
			{
				cO=0;
				printf("\n\t\t\t\tINVALID INPUT\n");
				ChangeAdmin();
				break;
			}
		}
		if(cO=1)
		{
			FILE *printing;
			printing = fopen("Admin.txt", "a");
			fprintf(printing, "\n");
			fprintf(printing, "%s", N);
			fprintf(printing, "\t\t");
			fprintf(printing, "%s", pass);
			fclose(printing);
		}
		
			
	}
	void RemoveAdmin()
	{	//char iN[20], Reading[30];
		//printf("\t\t\tEnter the username which you want to delete:\n");
		//gets(iN);
		//gets(iN);
		//fscanf(Read,"%s", Reading);
		//fscanf(Read,"%s", Reading);
		char str[100], fileStoring[500], AdminName[10], fileLastCharacter[500];
		int i = 0, count = 0;
		FILE *input, *output, *input1, *output1;
		input = fopen("Admin.txt", "r");

		if(input != NULL)
		{
			for(i = 0; fileStoring[i-1] != EOF; i++)
			{
				fileStoring[i] = fgetc(input);
			}
			output = fopen("New.txt", "w");
	
			if(output != NULL)
			{
				for(i = 0; fileStoring[i-1] != EOF; i++)
				{
					if(i > 0)
						fprintf(output, "%c", fileStoring[i-1]);
				}
			}
			fclose(input);
			fclose(output);
	
			input1 = fopen("New.txt", "r");
	
			if(input1 != NULL)
			{
				output1 = fopen("Admin.txt", "w");
				
				if(output1 != NULL)
				{
					fscanf(input1, "%s", str);
					fprintf(output1, "%s", str);
					fscanf(input1, "%s", str);
					fprintf(output1, "\t\t%s", str);
					printf("\n\t\tAdmin Name:");	
					scanf("%s", AdminName);
		
		
					while(fscanf(input1, "%s", str) == 1)
					{
						if(count == 2)
							count = 0;	
					
						if(strcmp(AdminName, str) == 0)
						{
							fscanf(input1, "%s", str);
						}	
						else
						{
							count++;
							strcpy(fileStoring, str);
				
							if(count == 1)
								{
									fprintf(output1, "\n");
								}
							fprintf(output1, "%s", str);
							if(count == 1)
								fprintf(output1, "\t\t");
						}
					}
					fclose(input1);
					fclose(output1);
					remove("New.txt");
				}
			}		
		}			
	
	}			

void Members()
{
	char choice;
	printf("\t\t\t C O N T I N U E\n\n");
	printf("\t\t\tB A C K S P A C E\n\n");
	printf("\t\t\tpress Enter to Continue Or Backspace to go Back\n\n");
	choice = getch();
	
	if(choice == 13)
	{
		Members_User_Pass();
	}
	else if(choice == 8)
	{
		main();
	}
}
void Members_User_Pass()
{
	int MembersMenuList;
	printf("\t\t\t*****************\n");
	printf("\t\t\t    Membors Page\n");
	printf("\t\t\t*****************\n\n");
	printf("\t\t\t[1]\tLOGIN\n");
	printf("\t\t\t[2]\tSIGNUP\n");
	printf("\t\t\t[3]\tEXIT\n");
	printf("\t\t\t*****************\n\n");
	scanf("%d", &MembersMenuList);
	if(MembersMenuList == 1)
	{
		int j=0;
		while(j!=1)
		{
			char members_id[30], members_pass[100], str[100];
			printf("\t\t\tUSERNAME:\t\n");
			scanf("%s", members_id);
			printf("\n\t\t\tPASSWORD:\t\n");
			scanf("%s", members_pass);
			FILE *in;
			in = fopen("Members.txt", "r");
			if(in == NULL)
			{
				printf("\t\t\tThere is some issue in Opening file!");
				int main();
			}
			else
			{
				fscanf(in,"%s",str);
				fscanf(in,"%s",str);
				fscanf(in,"%s",str);
				int i, n=100; // n is a number of lines we'll read from text file
				for(i=0; i<n; i++)
				{
					fscanf(in,"%s",str);
					if(strcmp(str,members_id) == 0)
					{
						//printf("\t\n\t\tcondition true\n");
						fscanf(in,"%s",str);
						if(strcmp(str,members_pass) == 0)
						{
							fscanf(in,"%s",str);
							printf("\t\t\tYou're membership is valid till %s",str);
							i=1000;
							j=1;
									
						}
						
						else
						{
							printf("\n\t\t\tINCORRECT PASSWORD\n");
							i=1000;
						}
					}
					else
					{
						//fscanf(in, "%s", str);
					}
					if(i==n-1) printf("\t\t\tINVALID USERNAME\n");
				
				}
			
			}
		}
	}
	else if(MembersMenuList == 2)
	{
		Admin();
	}
	else if(MembersMenuList == 3)
	{
		main();
	}
	else
	{
		printf("\n\t\t\tINVALID INPUT\n\n");
		Members_User_Pass();
	}								

}
void Admin_User_Pass();
void Admin()
{
	char choice;
	int WrongPassCount = 0;
	printf("\n\t\t\t*****************");
	printf("\n\t\t\t    Admin Page");
	printf("\n\t\t\t*****************\n\n");
	printf("\t\t\t   L O G I N\n\n");
	printf("\t\t\tB A C K S P A C E\n\n");
	printf("\t\t\tpress Enter for Login & Backspace to go Back\n");
	choice = getch();
	
	if(choice == 13)
	{
		Admin_User_Pass(&WrongPassCount);
	}
	else if(choice == 8)
	{
		main();
	}
}

void Admin_User_Pass(int *WrongPassCount)
{
		char user_id[30], user_pass[100], str[100];
		int wrongPassCount = 0, i, j;
		if(*WrongPassCount == 2)
		{
			printf("\n\t\t\t L A S T  C H A N C E\n\n");
		}

		printf("\t\t\tUSERNAME:\t\n");
		scanf("%s", user_id);
		printf("\n\t\t\tPASSWORD:\t\n");
		scanf("%s", user_pass);

		FILE *in;
		in = fopen("Admin.txt", "r");
		if(in == NULL)
		{
			printf("\t\t\tThere is some issue in Opening file!");
			int main();
		}
		else
		{
			fscanf(in,"%s",str);
			fscanf(in,"%s",str);
			int i, n=10; // n is a number of lines we'll read from text file
			for(i=0; i<n; i++)
			{
				fscanf(in,"%s",str);
				if(strcmp(str,user_id) == 0)
				{
					fscanf(in,"%s",str);
					if(strcmp(str,user_pass) == 0)
					{
						int sUbMenuList;
						printf("\n\t\t\tYou are Logged in!\n\n");
						printf("\t\t\t***************************\n\n");
						printf("\t\t\t[1]\tADD MEMBER\n");
						printf("\t\t\t[2]\tREMOVE MEMBER\n");
						printf("\t\t\t[3]\tCHANGE ADMIN\n\n");
						printf("\t\t\t***************************\n\n");
						printf("\t\t\tChoose any of the above options: ");
						scanf("%d", &sUbMenuList);
						i = 50;
		
						if(sUbMenuList == 2)
						{
							RemoveMembers();
						}
						else if(sUbMenuList == 1)
						{
							AddMembers();
						}
						else if(sUbMenuList ==3)
						{
							ChangeAdmin();
						}
						else
						{
							main();
						}
				
					}
					
					else
					{
						printf("\n\t\t\tINCORRECT PASSWORD\n\n");
						*WrongPassCount += 1;
						if(*WrongPassCount != 3 && *WrongPassCount < 3)
						{
							Admin_User_Pass(WrongPassCount);
						}
						i=50;
					}
				}
				else
				{
					fscanf(in, "%s", str);
				}
				if(i==n-1) 
				{	
					printf("\t\t\tINVALID USERNAME\n\n");
					*WrongPassCount += 1;
					if(*WrongPassCount != 3 && *WrongPassCount < 3)
					{
						Admin_User_Pass(WrongPassCount);
					}
				}
			
			}
			if(*WrongPassCount == 3)
				Admin();
		
		}		

}

void AddMembers()
{
	int i, j;
	char fileStoring[500], MemberName[10], Password[8], Validation[15];
	FILE *input, *output;
	input = fopen("Members.txt", "r");

	if(input != NULL)
	{
		for(i = 0; fileStoring[i-1] != EOF; i++)
		{
			fileStoring[i] = fgetc(input);
		}
		for(i = 0; fileStoring[i] != EOF; i++)
		{
			printf("%c", fileStoring[i]);
		}
		printf("\n\t\t\tMember Name(upto 7 characters only):");
		scanf("%s", MemberName);
		printf("\n\t\t\tPassword(upto 7 characters only):");
		scanf("%s", Password);
		printf("\n\t\t\tValidation");
		scanf("%s", Validation);

		for(i = 0; MemberName[i] != '\0'; i++)
		{
		}
		
		for(j = 0; Password[j] != '\0'; j++)
		{
		}

		if(i < 8 && j < 8)
		{
			fclose(input);
		
			output = fopen("Members.txt", "w");
		
			if(output != NULL)
			{
				for(i = 0; fileStoring[i] != EOF; i++)
				{
					fprintf(output, "%c", fileStoring[i]);
				}
				fprintf(output, "\n");
				fprintf(output, "%s\t\t", MemberName);
				fprintf(output, "%s\t\t", Password);
				fprintf(output, "%s", Validation);
				fclose(output);
			}
		}		
	}
	else
	{
		printf("\n\t\t\tThere is some issue in opening file!");\
		AddMembers();
	}
}

void RemoveMembers()
{
	char str[100], fileStoring[500], MemberName[10], fileLastCharacter[500];
	int i = 0, count = 0;
	FILE *input, *output, *input1, *output1;
	input = fopen("Members.txt", "r");

	if(input != NULL)
	{
		for(i = 0; fileStoring[i-1] != EOF; i++)
		{
			fileStoring[i] = fgetc(input);
		}
		output = fopen("New.txt", "w");

		if(output != NULL)
		{
			for(i = 0; fileStoring[i-1] != EOF; i++)
			{
				if(i > 0)
					fprintf(output, "%c", fileStoring[i-1]);
			}
		}
		fclose(input);
		fclose(output);

		input1 = fopen("New.txt", "r");

		if(input1 != NULL)
		{
			output1 = fopen("Members.txt", "w");
			
			if(output1 != NULL)
			{
				fscanf(input1, "%s", str);
				fprintf(output1, "%s", str);
				fscanf(input1, "%s", str);
				fprintf(output1, "\t\t%s", str);
				fscanf(input1, "%s", str);
				fprintf(output1, "\t%s", str);
				printf("\n\t\tMember Name:");
				scanf("%s", MemberName);
		
		
				while(fscanf(input1, "%s", str) == 1)
				{
					if(count == 3)
						count = 0;	
				
					if(strcmp(MemberName, str) == 0)
					{
						fscanf(input1, "%s", str);
						fscanf(input1, "%s", str);
					}
					else
					{
						count++;
						strcpy(fileStoring, str);
				
						if(count == 1)
						{
							fprintf(output1, "\n");
						}
						fprintf(output1, "%s", str);
						if(count == 1)
							fprintf(output1, "\t\t");
	
						if(count == 2)
							fprintf(output1, "\t\t");
					}
				}
				fclose(input1);
				fclose(output1);
				remove("New.txt");
			}
		}		
	}
}
int main()
{
	int MainMenuList;
	printf("\n\t\t\t*****************\n");
	printf("\t\t\t       GYM\n");
	printf("\t\t\t*****************\n\n");
	printf("\t\t\t[1]\tMembers\n");
	printf("\t\t\t[2]\tQuick Set\n");
	printf("\t\t\t[3]\tAdmin\n");
	printf("\t\t\t[4]\tExit\n\n");
	printf("\t\t\t*****************\n\n");
	scanf("%d", &MainMenuList);
	
	if(MainMenuList == 3)
	{
		Admin();
	}
	else if(MainMenuList == 1)
	{
		Members();
	}
	else if(MainMenuList == 2)
	{
		QuickSet();
	}
	else if(MainMenuList == 4)
	{
		return 0;
	}
	else
	{
		printf("\n\t\t\tINVALID INPUT!\n");
		main();
	}
	return 0;
}