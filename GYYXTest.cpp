// GYYXTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"

//使用两个指针，第一个指针指向字符串的第一个字符，另外一个指针指向下一个字符，每次都进行判断两个字符是否相同，不相同则加1
//相同则更新指针，并将长度对比之前的记录，选出最长，知道字符串结束

int CountString(char *str)
{
	char *h = str;
	char *t = str;
	t++;
	int len = 0;
	int count = 1;
	while (t != "\0")
	{
		//t += gap;
		if (h != t)
		{
			count++;
			t++;
		}
		else
		{
			h = t;
			t++;
			if (count > len)
			{
				len = count;
				count = 1;
			}
		}
	}

	return len;
}

void main()
{
	char str[] = "absdjbjhhbsdbugggsda"; //这里的输入可以更换
	int len = CountString(str);
	printf("%d", len);
	//getchar();
}

