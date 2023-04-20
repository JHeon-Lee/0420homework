#include <stdio.h>

int myStrlen(char str[]);
char* myStrcpy(char str1[], char str2[]);
int myStrcmp(char str1[], char str2[]);
char* myStrcat(char str1[], char str2[]);


int main()
{
	char str[100] = "hello C language";

	printf("strlen : %d\n", myStrlen(str)); // 문자열의 길이 출력 (NULL 은 포함 안됨)

	char str1[20];
	printf("strcpy : %s\n", myStrcpy(str1, str)); // 복사

	str[0] = 'a';
	printf("strcmp : %d\n", myStrcmp(str, str1)); // 비교

	printf("strcat : %s\n", myStrcat(str, str1)); // 2개 병합

	return 0;
}


int myStrlen(char str[])
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return len;
}

char* myStrcpy(char str1[], char str2[])
{
	int len = 0;

	while (str1[len] != '\0' && str2[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len; i++)
	{
		str1[i] = str2[i];
	}
	str1[len] = '\0';

	return str1;
}

int myStrcmp(char str1[], char str2[])
{
	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == str2[i])
			return 0;
		else if (str1[i] > str2[i])
			return 1;
		else
			return -1;
		if (str1[i] == '\0' || str2[i] == '\0')
			break;
	}
}

char* myStrcat(char str1[], char str2[])
{
	// char str[100] = {'a'}
	int len1 = 0;
	int len2 = 0;

	while (str1[len1] != '\0')
	{
		len1++;
	}
	while (str2[len2] != '\0')
	{
		len2++;
	}
	for (int i = len1; i < len1 + len2; i++)
	{
		str1[i] = str2[i - len1];
	}
	str1[len1 + len2] = '\0'; // str1 을 변형하는 법 말고..?

	return str1; // str로 받으려하면 쓰레기 값만 나옴
}
