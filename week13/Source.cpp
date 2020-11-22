#include<stdio.h>
#include<string.h>

void pegazuy(char*);

int main()
{
	char messege[101];
	scanf_s("%[^\n]s", messege, 50);
	char* pMessege = messege;
	pegazuy(pMessege);
	printf("%s", messege);
}

void pegazuy(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if ((*(str+i) >= 'A' && *(str+i) <= 'Z') || (*(str+i) >= 'a' && *(str+i) <= 'z'))
		{
			
			if (*(str + i) > 'V' && *(str + i) > 'v')
			{
				*(str + i) -= 26;
			}
				*(str + i) += 4;
		}
	}
}