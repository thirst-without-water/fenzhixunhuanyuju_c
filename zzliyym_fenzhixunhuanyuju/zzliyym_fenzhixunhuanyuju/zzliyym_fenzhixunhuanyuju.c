#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
//A.主要内容：分支循环语句
//**分支语句：if else;switch;
//一.if else
//1.if else分支语句（单分支）
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能sese\n");
//	}
//		return 0;
//}
//
// 
//2.if else分支语句（多分支）
//int main()
//{
//	int age = 20;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}
// 
// 
//悬空else,else和它离得最近的if匹配（书写风格）
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
//题目：判断一个数是否为奇数
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数");
//	return 0;
//}
// 
// 
//二.switch
//switch分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
//}
// 
// 
//题目1：输入1-5打印“工作日”，输入6-7打印“休息日”
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}
// 
// 
//题目2：求m、n的值
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
//switch后放的是整型表达式
//case后整型常量表达式
// 
// 
//**循环语句：for;while;do while;
//一.do while
//1.do while循环语句(最基本)
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
//2.//do while循环语句(break情况)
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
//3.do while循环语句(continue情况)
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
// 二.while
//1.while循环语句（最基本）
//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}
//题目：在屏幕上打印1-10的数字
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
//2.while循环语句（break情况）
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
//3.while循环语句（continue情况）
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
//在while循环中，break用于永久的终止循环
//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环
// 
// 
//三.for
//1.for循环语句（最基本）
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
//2.for循环语句（break情况）
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
//3.for循环语句（continue情况）
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
//不可在for循环体内修改循环变量，防止for循环失去控制
//例：
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
//建议for循环控制变量的取值采取“前闭后开区间”写法
//例：
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
//判断部分的省略恒 - 判断部分恒为真
//
//  
//B.练习
//1.计算n的阶乘
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
//2.计算1!+2!+3!+......+10!
//a.低级
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
//b.效率
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
//3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);
//  功能：在v[0]<= v[1] <= v[2] <= ... <= v[n - 1]的数组中查找x.
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;/*要查找的数字*/  /*在arr这个有序数组中查找k（7）的值*/
//	int sz = sizeof(arr) / sizeof(arr[0]);/*数组的元素个数*/
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
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//} 
// 
// 
//4.编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char arr1[] = "我宝贝是个小笨蛋！！！！！";
//	char arr2[] = "**************************";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);/*睡眠0.3秒*/
//		system("cls");/*清空屏幕*/
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// 
// 
//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
//(只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。)
//int main()
//{
//	/*假设正确密码为123456*/
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,重新输入！");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}
// 
// 
//6.写代码将三个整数按从大到小输出（输入：2 3 1，输出：3 2 1）
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
//7.写一个代码打印1-100之间所有3的倍数的数字
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
//8.给定两个数，求这两个数的最大公约数
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
//			printf("最大公约数为：%d\n",max);
//			break;
//		}
//		else
//		{
//			max--;
//		}
//	}
//	return 0;
//}
//b.辗转相除法
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
//	printf("最大公约数为：%d\n", n);
//	return 0;
//}
// 
// 
//9.打印1000年到2000年之间的闰年
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
//b.优化
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
//10.打印100-200之间的素数
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
//c.优化
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
//d.再优化
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
//11.编写程序数一下1到1o0的所有整数中出现多少个数字9
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
//12.计算1/1-1/2+1/3-1/4+1/5......+ 1/99 - 1/100的值，打印出结果
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
//b.优化
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
//13.求10个整数中最大值
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
//14.在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)/*打印行*/
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)/*打印列*/
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//C.拓展内容：
//defalut
//getchar
//EOF - end of file - 文件结束标志  ==  -1
//Sleep(300);/*睡眠0.3秒*/
//system("cls");/*清空屏幕*/
//"if(password == "123456")"两个字符串比较，不能使用==，应该使用strcmp:"if (strcmp(password,"123456") == 0)"
//sqrt - 开平方函数
//goto语句只能在一个函数范围内跳转，不能跨函数（不必要 不要使用）
//shutdown -s -t 60
//shutdown -a
// system() - 执行系统函数
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
//		printf("工作日\n");
//		break;
//	case 6 :
//	case 7:
//		printf("休息日\n");
//		break;
// default;
//      printf("输入错误\n");
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
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）:>");
//	int tmp = 0;
//	while ((tmp = getchar()) !='\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
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
//4.写一个猜数字游戏
//（1.自动产生一个1 - 100之间的随机数
//2.猜数字
//a.猜对了，恭喜你，游戏结束
//b.猜错了, 会告诉猜大了, 还是猜小了, 继续猜，直到猜对
//3.游戏一个一直玩，除非退出游戏）
//void menu()
//{
//	printf("***************************\n");
//	printf("********   1.play   *******\n");
//	printf("********   0.exit   *******\n");
//	printf("***************************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	int ret = rand() % 100 + 1;/*rand函数返回了一个0-32767之间的数字*/ /*%100的余数是0-99，然后+1*/
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));/*时间戳*/
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//
//5.写一个关机程序（只要运行起来，电脑就在一分钟内关机，如果输入：我是猪，就取消关机！）
//a.
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入：我爱赵梓龙，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"我爱赵梓龙") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//b.优化
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑将在一分钟内关机，如果输入：我爱赵梓龙，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我爱赵梓龙") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}