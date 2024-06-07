#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
//模拟实现qsort排序

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void my_qort(void* base, int sz, int width, int(*cmp)(const int* e1, const int* e2))
//{
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 0;
//
//		int j = 0;
//
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//
//		}
//
//
//
//	}
//
//
//}
//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qort(arr, sz, sizeof(arr[0]),cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//
//	return 0;
//}


//模拟实现 strlen

//size_t my_strlen(char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str!='\0')
//	{
//		str++;
//		count++;
//	}
//
//	return count;
//
//}
//int main()
//{
//
//	char arr[] = "abcf";
//	size_t j = my_strlen(arr);
//
//	printf("%u", j);
//	return 0;
//}


//模拟实现strcat

//char* my_strcat(char* dest, const char* str)
//{
//	assert(dest && str);
//	char* tmp = dest;
//
//	while (*dest!= '\0')
//	{
//		*dest++;//先找到要追加的位置
//	}
//
//	while (*dest++ = *str++)
//	{
//		
//	}
//
//	return tmp;
//}
//
//int  main()
//{
//	char arr1[20] = "hello";
//	char arr2[10] = "c++";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}


//模拟实现strcmp

//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//
//	while (*arr1 != *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//
//		arr1++;
//		arr2++;
//
//	}
//
//	if (*arr1 - *arr2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = "abcder";
//	int n = my_strcmp(arr1,arr2);
//	printf("%d",n);
//	return 0;
//
//}

//模拟实现strcpy

//char* my_strcpy(char* dest, const char* str)
//{
//	assert(dest && str);
//	char* ret = dest;
//	while (*dest++=*str++  )
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "qqqqqqqqqqqqqq";
//	char arr2[20] = "helloc++";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}












