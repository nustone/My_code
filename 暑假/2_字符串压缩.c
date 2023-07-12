/**************************************************************
 * File Name     : 2_字符串压缩.c
 * Creator       : 罗丹阳
 * QQ            : 3600170166
 * Email         : luody_cd@hqyj.com
 * Creat Time    : Wed 12 Jul 2023 09:40:02 AM CST
 * Description   : 
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[20] = "";

	char str2[20] = "";

	printf("请输入字符串:");
	scanf("%[^\n]", str);
	getchar();	// 吃掉\n，垃圾字符

	char *p = str2;
	char *q = str;
	char n = '0';

	*p = str[0];

	while(*p)
	{

		if(*p == *q)
		{
			q++;
			n++;
		}
		else
		{
			p++;
			*p = n;

			p++;
			*p = *q;

			n = '0';
		}

	}

	printf("%s\n", str2);
	return 0;
}
