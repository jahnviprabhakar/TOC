#include<stdio.h>
#include<string.h>
#define max 20
int main()
{
	int trans_table[4][2]={{1,3},{1,2},{1,2},{3,3}};
	int final_state=2,i;
	int present_state=0;
	int next_state=0;
	int invalid=0;
	char s[max];
	printf("enter a string:");
	scanf("%s",&s);
	int l= strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='a')
		{
		next_state=trans_table[present_state][0];
	}
		else if(s[i]=='b')
		next_state=trans_table[present_state][1];
		else
		invalid=1;
		present_state=next_state;
	}
	if(invalid==1)
	{
		printf("invalid input");
	}
	else if(present_state==final_state)
	printf("accept\n");
	else
	printf("dont accept\n");
	}
