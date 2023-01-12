#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * f2 - disassembled security function 2
 * @username: header of double linked list
 * @user_len: index to delete the node
 * Return: Always EXIT_SUCCESS.
 */
ulong f2(long username, int user_len)
{
uint local_10;
int local_c;

local_10 = 0;
local_c = 0;
while (local_c < user_len)
{
	local_10 = local_10 + (int)*(char *)(username + local_c);
	local_c = local_c + 1;
}
return ((ulong)((local_10 ^ 0x4f) & 0x3f));
}

/**
 * f3 - disassembled security function 2
 * @username: header of double linked list
 * @user_len: index to delete the node
 * Return: 1 if success -1 if failed
 */
ulong f3(long username, int user_len)
{
uint local_10;
int local_c;

local_10 = 1;
local_c = 0;
while (local_c < user_len)
{
	local_10 = (int)*(char *)(username + local_c) *local_10;
	local_c = local_c + 1;
}
return ((ulong)((local_10 ^ 0x55) & 0x3f));
}

/**
 * f4 - disassembled security function 4
 * @username: header of double linked list
 * @user_len: index to delete the node
 * Return: 1 if success -1 if failed
 */
ulong f4(char *username, int user_len)
{
uint uVar1;
uint local_10;
int local_c;

local_10 = (*username);
local_c = 0;
while (local_c < user_len)
{
	if ((int)local_10 < (int)username[local_c])
	{
	local_10 = (username[local_c]);
	}
	local_c = local_c + 1;
}
srand(local_10 ^ 0xe);
uVar1 = rand();
return ((ulong)(uVar1 & 0x3f));
}

/**
 * f5 - disassembled security function 5
 * @username: header of double linked list
 * @user_len: index to delete the node
 * Return: 1 if success -1 if failed
 */
ulong f5(long username, int user_len)
{
int local_10;
int local_c;

local_10 = 0;
local_c = 0;
while (local_c < user_len)
{
	local_10 = local_10 + (int)*(char *)(username + local_c)
	 *(int)*(char *)(username + local_c);
	local_c = local_c + 1;
}
return ((ulong)((local_10 ^ 0xef) & 0x3f));
}

/**
 * main - check the code for Holberton School students.
 * @argc: quantity of arguments
 * @argv: string arguments
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
	char *local_58, *first_word;
	char password[7];
	size_t sVar2;
	uint uVar1;
	ulong uVar3;
	int local_10, local_c;

	if (argc != 2)
		exit(1);
	local_10 = 0;
	local_c = 0;
	local_58 = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	first_word = argv[1];
	sVar2 = strlen(first_word);
	uVar1 = (uint)sVar2;
	uVar3 = ((ulong)((uVar1 ^ 0x3b) & 0x3f));
	password[0] = local_58[uVar3];
	uVar3 = f2((long)first_word, strlen(first_word));
	password[1] = local_58[uVar3];
	uVar3 = f3((long)first_word, strlen(first_word));
	password[2] = local_58[uVar3];
	uVar3 = f4(first_word, strlen(first_word));
	password[3] = local_58[uVar3];
	uVar3 = f5((long)first_word, strlen(first_word));
	password[4] = local_58[uVar3];
	while (local_c < *first_word)
	{
		local_10 = rand();
		local_c = local_c + 1;
	}
	uVar3 = (ulong)((local_10 ^ 0xe5) & 0x3f);
	password[5] = local_58[uVar3];
	password[6] = 0;
	printf("%s\n", password);
	return (0);
}

