#include <stdio.h>
#include<stdbool.h>
char boxCheck(char box1,char box2);
int main()
{
	char box1,box2;
	
	printf("Enter color of box1 and box2  : ");
	scanf(" %c %c",&box1,&box2);
	boxCheck(box1,box2);

	return 0;	
}
char boxCheck(char box1,char box2){
	if (box1== box2)
	{
		printf("inavlaid \n");
		return -1;
	}
	else if  (box1 !=box2 )
	{
		printf("valid\n");
		return 1;
	}
	else{
		;
	}
	if(box1='R'){
		if(box1='G'){
			if(box1='B'){
				if(box2='R'){
					if(box2='G'){
						if(box2='B'){
						}
					}
				}
			}
		}
	}
	
	return -1;
	}
