#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_LETTERS 500

int is_password_legal(char* password,int password_lenth);
int is_password_lenth_6_to_8(char* password, int password_lenth);
int is_password_have_number(char* password, int password_lenth);
int is_password_have_lower_letter(char* password, int password_lenth);
int is_password_have_cap_letter(char* password, int password_lenth);
int is_password_have_same_char_in_sequence(char* password, int password_lenth);

int main() 
{
	char password [MAX_LETTERS];
	int password_lenth = 0;
	printf("Enter password: ");
	scanf("%s", password);
	password_lenth = strlen(password);
	if (is_password_legal(password, password_lenth))
		printf("Yes");
	else
		printf("No");
	
	return 1;
}

int is_password_legal(char* password, int password_lenth)
{
	if (!(is_password_lenth_6_to_8(password, password_lenth)))
		return 0;
	if (!(is_password_have_number(password, password_lenth)))
		return 0;
	if (!(is_password_have_lower_letter(password, password_lenth)))
		return 0;
	if (!(is_password_have_cap_letter(password, password_lenth)))
		return 0;
	if (is_password_have_same_char_in_sequence(password, password_lenth))
		return 0;
	return 1;
}

int is_password_lenth_6_to_8(char* password, int password_lenth)
{
	if (password_lenth >= 6 && password_lenth <= 8)
		return 1;
	return 0;
}

int is_password_have_number(char* password, int password_lenth)
{
	int i = 0;

	for (i = 0; i < password_lenth; i++) 
	{
		if (password[i] >= '0' && password[i] <= '9')
			return 1;
	}
	return 0;
}

int is_password_have_lower_letter(char* password, int password_lenth)
{
	int i = 0;
	for (i = 0; i < password_lenth; i++) 
	{
		if (password[i] >= 'a' && password[i] <= 'z')
			return 1;
	}
	return 0;
}

int is_password_have_cap_letter(char* password, int password_lenth)
{
	int i = 0;
	for (i = 0; i < password_lenth; i++)
	{
		if (password[i] >= 'A' && password[i] <= 'Z')
			return 1;
	}
	return 0;
}

int is_password_have_same_char_in_sequence(char* password, int password_lenth)
{
	int i = 0;
	for (i = 0; i < password_lenth - 1; i++)
	{
		if (password[i] == password[i + 1])
			return 1;
	}
	return 0;
}
