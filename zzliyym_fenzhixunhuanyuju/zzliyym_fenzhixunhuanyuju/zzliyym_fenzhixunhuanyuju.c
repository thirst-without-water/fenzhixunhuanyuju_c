#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
//A.��Ҫ���ݣ���֧ѭ�����
//**��֧��䣺if else;switch;
//һ.if else
//1.if else��֧��䣨����֧��
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("����sese\n");
//	}
//		return 0;
//}
//
// 
//2.if else��֧��䣨���֧��
//int main()
//{
//	int age = 20;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	return 0;
//}
// 
// 
//����else,else������������ifƥ�䣨��д���
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//	return 0;
//}
// 
// 
//��Ŀ���ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����");
//	return 0;
//}
// 
// 
//��.switch
//switch��֧���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	}
//	return 0;
//}
// 
// 
//��Ŀ1������1-5��ӡ�������ա�������6-7��ӡ����Ϣ�ա�
//int main()
//{	int day = 0;
//	scanf("%d", &day);
//	switch (day)	
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}
// 
// 
//��Ŀ2����m��n��ֵ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}
// 
// 
//switch��ŵ������ͱ��ʽ
//case�����ͳ������ʽ
// 
// 
//**ѭ����䣺for;while;do while;
//һ.do while
//1.do whileѭ�����(�����)
//int main()
//	{
//	int i = 1;
//		do
//		{
//			printf("%d ", i);
//			i++;
//		} while (i <= 10);
//		return 0;
//	}
// 
// 
//2.//do whileѭ�����(break���)
//int main()
//{
//	int i = 1;
//      do
//	{
//		if (i == 5)
//		break;
//
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
// 
// 
//3.do whileѭ�����(continue���)
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
// 
// 
// ��.while
//1.whileѭ����䣨�������
//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}
//��Ŀ������Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
// 
// 
//2.whileѭ����䣨break�����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//	printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
// 
// 
//3.whileѭ����䣨continue�����
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//	printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
// 
// 
//��whileѭ���У�break�������õ���ֹѭ��
//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
// 
// 
//��.for
//1.forѭ����䣨�������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//2.forѭ����䣨break�����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//3.forѭ����䣨continue�����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//����
//int main()
//{
//	int i = 0;
//		for (i = 1; i <= 10; i++)
//		{
//			printf("%d", i);
//			int j = 0;
//			for (j = 0; j < 10; i++)
//			{
//				printf("hehe\n");
//			}
//
//		}
//	return 0;
//}
//����forѭ�����Ʊ�����ȡֵ��ȡ��ǰ�պ����䡱д��
//����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�жϲ��ֵ�ʡ�Ժ� - �жϲ��ֺ�Ϊ��
//
//  
//B.��ϰ
//1.����n�Ľ׳�
//int main()
//	{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//		return 0;
//	}
// 
// 
//2.����1!+2!+3!+......+10!
//a.�ͼ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		printf("%d\n", sum);
//	}
//return 0;
//}
//b.Ч��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
//3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);
//  ���ܣ���v[0]<= v[1] <= v[2] <= ... <= v[n - 1]�������в���x.
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;/*Ҫ���ҵ�����*/  /*��arr������������в���k��7����ֵ*/
//	int sz = sizeof(arr) / sizeof(arr[0]);/*�����Ԫ�ظ���*/
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//} 
// 
// 
//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	char arr1[] = "�ұ����Ǹ�С��������������";
//	char arr2[] = "**************************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);/*˯��0.3��*/
//		system("cls");/*�����Ļ*/
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// 
// 
//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//(ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����)
//int main()
//{
//	/*������ȷ����Ϊ123456*/
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,�������룡");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}
// 
// 
//6.д���뽫�����������Ӵ�С��������룺2 3 1�������3 2 1��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
// 
// 
//7.дһ�������ӡ1-100֮������3�ı���������
// a.
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// b.
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//8.���������������������������Լ��
//a.
// int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ��Ϊ��%d\n",max);
//			break;
//		}
//		else
//		{
//			max--;
//		}
//	}
//	return 0;
//}
//b.շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	scanf("%d%d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ��Ϊ��%d\n", n);
//	return 0;
//}
// 
// 
//9.��ӡ1000�굽2000��֮�������
//a.
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if(y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//b.�Ż�
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
// 
// 
//10.��ӡ100-200֮�������
// a.
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//			for(j=2;j<i;j++)
//				if(i%j==0)
//				{
//					break;
//				}
//			if (i == j)
//			{
//				printf("%d ", i);
//			}
//	}
//	return 0;
//}
// b.
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//c.�Ż�
//int main()
//{
//	int i = 0;
//    for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//d.���Ż�
//int main()
//{
//	int i = 0;
//    for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		if (flag == 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
// 
// 
//11.��д������һ��1��1o0�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
// 
// 
//12.����1/1-1/2+1/3-1/4+1/5......+ 1/99 - 1/100��ֵ����ӡ�����
//a.
// int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
//b.�Ż�
// int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
// 
// 
//13.��10�����������ֵ
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i=1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
// 
// 
//14.����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)/*��ӡ��*/
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)/*��ӡ��*/
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//C.��չ���ݣ�
//defalut
//getchar
//EOF - end of file - �ļ�������־  ==  -1
//Sleep(300);/*˯��0.3��*/
//system("cls");/*�����Ļ*/
//"if(password == "123456")"�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp:"if (strcmp(password,"123456") == 0)"
//sqrt - ��ƽ������
//goto���ֻ����һ��������Χ����ת�����ܿ纯��������Ҫ ��Ҫʹ�ã�
//shutdown -s -t 60
//shutdown -a
// system() - ִ��ϵͳ����
// 
// 
//1.
// int main()
//{	int day = 0;
//	scanf("%d", &day);
//	switch (day)	
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6 :
//	case 7:
//		printf("��Ϣ��\n");
//		break;
// default;
//      printf("�������\n");
//      break;
//	}
//	return 0;
//}
// 
// 
//2.
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��:>");
//	int tmp = 0;
//	while ((tmp = getchar()) !='\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
// 
// 
//3.
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}
//
// 
//4.дһ����������Ϸ
//��1.�Զ�����һ��1 - 100֮��������
//2.������
//a.�¶��ˣ���ϲ�㣬��Ϸ����
//b.�´���, ����߲´���, ���ǲ�С��, �����£�ֱ���¶�
//3.��Ϸһ��һֱ�棬�����˳���Ϸ��
//void menu()
//{
//	printf("***************************\n");
//	printf("********   1.play   *******\n");
//	printf("********   0.exit   *******\n");
//	printf("***************************\n");
//}
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//	int ret = rand() % 100 + 1;/*rand����������һ��0-32767֮�������*/ /*%100��������0-99��Ȼ��+1*/
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("����������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));/*ʱ���*/
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//
//5.дһ���ػ�����ֻҪ�������������Ծ���һ�����ڹػ���������룺��������ȡ���ػ�����
//a.
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺�Ұ�����������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"�Ұ�������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//b.�Ż�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺�Ұ�����������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "�Ұ�������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}