// GYYXTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdio.h"

//ʹ������ָ�룬��һ��ָ��ָ���ַ����ĵ�һ���ַ�������һ��ָ��ָ����һ���ַ���ÿ�ζ������ж������ַ��Ƿ���ͬ������ͬ���1
//��ͬ�����ָ�룬�������ȶԱ�֮ǰ�ļ�¼��ѡ�����֪���ַ�������

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
	char str[] = "absdjbjhhbsdbugggsda"; //�����������Ը���
	int len = CountString(str);
	printf("%d", len);
	//getchar();
}

