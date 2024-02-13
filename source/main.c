/* DO NOT INCLUDE! THIS IS JUST FOR TESTING AND NOT PART OF THE WINLOG LIBRARY! */

#include "winalert.h"
#include <stdio.h> 
#include <stdlib.h>

void run_winalert_demo()
{		
	show_alert(MESSAGE, "Test Alert - Message");
	show_alert(WARNING, "Test Alert - Warning");
	show_alert(ERR,     "Test Alert - Error");
}

int main()
{
	char running = '1';
	int choice;
	
	while (running == '1')
	{		
		run_winalert_demo();
		
		printf("Run demo again?\n\n");
		
		printf("1: Yes\n");
		printf("2: No\n\n");
		
		while (1)
		{
			printf("Choice: ");
			fflush(stdin);
			choice = getchar();
			
			switch(choice)
			{			
				case '1':
				{
					system("cls");
					break;
				}
				case '2':
				{
					system("cls");
					running = '0';
					return 0;
				}
				default:
				{
					printf("\nINVALID RESPONSE\n\n");
					continue;
				}
				
				break;
			}
			
			break;
		}
		
		system("cls");
	} 
		
	return 0;
}

