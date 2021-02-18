#include <stdio.h>
#include <math.h>
#include <string.h>
#include "2020274045miaokeda.h"

//输出金字塔函数（不接受任何参数，不返回任何值，所有输出金字塔操作在这个函数内部执行）
void printPyr(void) {
	//定义组数n
	int n;
	//定义金字塔行数a
	int a;
	//定义输出字符c
	char c;
	//输入组数n
	scanf("%d", &n);
	//for循环输出金字塔
	for (int i = 0; i < n; i++)
	{
		//输入金字塔行数a和字符表示c
		scanf("%d %c", &a, &c);
		for (int j = 0; j < a; j++)
		{
			for (int k = 1; k < 2 * a - 2 * j - 1; k++)
				printf(" ");
			for (int k = 0; k < 2 * j + 1; k++)
			{
				printf("%c", c);
			}
			printf("\n");
		}
		printf("\n");
	}
}

//判断数字是否为回文数（接受整数int，若返回1则是回文数，0则不是回文数）
int isHuiWen(int num) {
	scanf("%d", &num);  //输入整数
	int r = 0;
	int t = num;
	//数字倒置
	while (num != 0)
	{
		r = r * 10 + num % 10;
		num /= 10;
	}
	//如果相等则返回1，否则返回0
	if (r == t)
		return 1;
	else
		return 0;
}

//输出钻石在圆圈的个数（不接受任何参数，不返回任何值）
void printDiamondNum(void) {
	int a, b, t, T, l, w, r, sum = 0, total = 0;
	scanf("%d", &T); //输入测试次数
	for (t = 1; t <= T; t++)
	{ //循环T次
		scanf("%d%d", &l, &w);
		getchar();
		scanf("%d%d%d", &a, &b, &r);

		int need = r * r;
		for (int i = 0; i <= w; i++)
		{ //对于第n行的坐标
			for (int j = 0; j <= l; j++)
			{                                                //对于第n行中第m列的坐标
				sum = (j - a) * (j - a) + (i - b) * (i - b); //sum为点到圆心距离的平方
				if (sum <= need)
				{            //如果距离平方小于半径平方
					total++; //则钻石加一
				}
			}
		}
		printf("%d\n", total); //输出总钻石数
		sum = total = 0;       //初始化数据
	}
}

//质数分解（接受长整数long，不返回任何值，函数将输出长整数分解出的质数，满足∏(质数)==长整数）
void printZhiShu(long n) {
	int i = 2;
	scanf("%ld", &n);   //用户输入
	while (true)    //无限循环
	{
		for (i = 2; i <= n; i++)
		{
			while (n % i == 0)
			{
				printf("%d ", i);
				n = n / i;
			}
		}
		break;  //跳出循环
	}
}

//谁错了？（不接受任何参数，不返回任何值）
void whoIsWrong(void) {
	int A, x;
	for (A = 'A'; A < 'D'; A++)
	{
		x = (A != 'A') + (A == 'C') + (A == 'D') + (A != 'D');
		if (x = 3)
		{
			printf("C");
			break;
		}
	}
}

//迭代法求平方根（接受一个长浮点数double，返回长浮点数double）
double newSqrtfunction(double n) {
	double a, b;
	scanf("%lf", &n);      //输入要就平方根的数
	b = n / 2;             //b等于n的二分之一
	a = (b + n / b) / 2.0; //迭代公式
	while ((b - a) > 0.00001)
	{ //进行迭代
		double temp = a;
		a = (a + n / a) / 2.0;
		b = temp;
	}
	return a;
}

//最强字母（不接受任何参数，返回字符类型）
char isBiggestChar(void) {
	char ch;
	char max = 'z';
	while ((ch = getchar()) != '\n') {  //输入一个字符串
		if (ch < max)
			max = ch;   //在字符串中寻找最大的字母
	}
	return max;
}

//自由落体最低高度（接受一个整数int和一个浮点数float，返回浮点数float），返回的h为第n次的n+1落下的最低高度
float isMinHeight(int n, float h) {
	scanf("%f %d", &h, &n); //输入自由落体高度和第n次
	float sum = h;
	if (n == 1)
	{
		sum += h / 2;
		h /= 2; //每次都除以2
	}
	else
	{   //循环，直到第n-1
		for (int i = 0; i < n - 1; i++)
		{
			h = (int)(((h / 2) * 1000 + 5) / 10) / 100.0;
			sum = (int)(((sum + h * 2) * 1000 + 5) / 10) / 100.0;
		}
	}
	h = (int)(((h / 2) * 1000 + 5) / 10) / 100.0;   //最后四舍五入存入h
	return h;
}

//3n+1变换问题（接受一个整数，返回值在3n+1变换过程的次数）
int isChange(int n) {
	int i = 0, k, j;
	for (i = 0; n != 1; i++)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			continue;
		}
		else
		{
			n = 3 * n + 1;
			continue;
		}
		return i;
	}
}

//鸡兔同笼问题（接受鸡和兔的脚数，返回兔子的最小数）
int chickenWithRabbitCage(int a) {
	//a表示脚
	int x = 0, y = 0, b = 0;
	if (a % 2 != 0)
	{
		x = 0, y = 0;
	}
	else if (a % 4 == 0)
	{
		x = a / 4, y = a / 2;
	}
	else
	{
		b = a / 4; //兔只数。
		b = b + 1; //最少只数。
		x = b, y = a / 2;
	}
	return x;
}

//十六进制数转十进制数（不接受任何值，输出整数int，输入十六进制数的环节在程序中执行）
int shiliuChangetoShi(void) {
	int sum = 0, flag = 0;
	char ch;
	while ((ch = getchar()) != '\n')	//用户输入十六进制数
	{	//转换
		if (ch == '-')
		{
			flag = 1;
			continue;
		}
		if (ch >= 'A' && ch <= 'F')
			sum = sum * 16 + ((ch - '0') - (55 - '0'));
		else if (ch >= '0' && ch <= '9')
			sum = sum * 16 + (ch - '0');
	}
	//分开正负输出
	if (flag)
		return -1 * sum;
	else
		return sum;
}

//计算a的n次方（接受两个整数a和n，返回a的n次方）
int aPlusCountN(int a, int n) {
	int sum = 1;
	for (int i = 0; i < a; i++)
	{
		sum = sum * n;
	}
	return sum;
}

//有n个烟,每k根烟灰就能再换一根烟(接受n根烟和每k根烟灰就可以换一根烟，返回抽烟的次数)
int chouYan(int n, int k) {
	int sum;
	sum = n;
	while (n / k)
	{
		sum += n / k;
		n = n / k + n % k;
	}
	return sum;
}

//三角形的判断（接受三条边的长度abc，不返回任何值）
void judgeTriangle(int a, int b, int c) {
	float s = (a + b + c) / 2.0f;
	float A = sqrt(s * (s - a) * (s - b) * (s - c));
	if (a + b > c && a - b < c)
	{
		if ((fabs(a - b) < 0.001 && fabs(a - c) < 0.001) || (fabs(b - a) < 0.001 && fabs(b - c) < 0.001))
		{
			printf("equilateral triangle, %.1f\n", A);
		}
		else if (fabs(a - b) < 0.001 || fabs(a - c) < 0.001 || fabs(b - c) < 0.001)
		{
			if (fabs(a * a + b * b - c * c) < 0.001 || fabs(a * a + c * c - b * b) < 0.001 || fabs(b * b + c * c - a * a) < 0.001)
				printf("isosceles right triangle, %.1f\n", A);

			else
				printf("isosceles triangle, %.1f", A);
		}
		else if (fabs(a * a + b * b - c * c) < 0.001 || fabs(a * a + c * c - b * b) < 0.001 || fabs(b * b + c * c - a * a) < 0.001)
			printf("right triangle, %.1f\n", A);
		else
			printf("general triangle, %.1f\n", A);
	}
	else
		printf("no triangle\n");
}

//转置矩阵的计算（接受一个二维数组的首地址，不返回任何值）
void changeMartix(int a[1000][1000], int i, int j) {

	for (int m = 0; m < j; m++) {
		for (int n = 0; n < i; n++) {
			if (n == i - 1) {
				printf("%d\n", a[n][m]);
			}
			else if ((n == j - 1) && (m == i - 1)) {
				printf("%d", a[n][m]);
			}
			else
			{
				printf("%d ", a[n][m]);
			}

		}
	}
}

//DP问题：数塔（接受数塔的高度n，不返回任何值，函数中用户将输入数塔中元素的每个值，并打印最大值）
void dp_ShuTa(int n) {
	int dp[100][100] = { 0 }, i, j;
	for (i = 0; i < n; i++)
	{ //从（0，0）开始输入
		for (j = 0; j <= i; j++)
		{
			scanf("%d", &dp[i][j]);
		}
	}
	for (i = n - 2; i >= 0; i--)
	{ //从倒数第二行开始计算
		for (j = 0; j <= i; j++)
		{
			if (dp[i + 1][j] > dp[i + 1][j + 1])
				dp[i][j] += dp[i + 1][j];
			else
				dp[i][j] += dp[i + 1][j + 1]; //加上它下边的（左边的数，右边的数）的最大值
		}
	}
	printf("%d\n", dp[0][0]); //（0，0）点就是最大的和
}

//字符串转换：将字符串的you改成we并输出
void changeYouToWe(char* s) {
	int len = strlen(s);
	for (int i = 0; i < len - 2; i++)
	{
		if (s[i] == 'y' && s[i + 1] == 'o' && s[i + 2] == 'u')
		{
			s[i] = 'w';
			s[i + 1] = 'e';
			s[i + 2] = '@';
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (s[i] == '@')
			continue;
		printf("%c", s[i]);
	}
	printf("\n");
}

//DP问题：计算字符串成为回文字符串需要添加字符的最小值（接受一个char数组首地址，返回最小值）
int isMinHuiWen(char* s1) {
	int i, j, dp[1000][1000];
	char s2[1000];
	int len = strlen(s1);
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		s2[j] = s1[i];
	}
	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= len; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				if (dp[i][j - 1] > dp[i - 1][j]) {
					dp[i][j] = dp[i][j - 1];
				}
				else {
					dp[i][j] = dp[i - 1][j];
				}

			}
		}
	}
	return len - dp[len][len];
}

//计算字符串的长度（接受一个char数组首地址，返回字符串长度）
int str_len(char* ch) {
	int len = 0;
	for (int i = 0; ch[i] != '\n'; i++) {
		if (ch[i] != '\n')
			len++;
	}
	return len;
}

//实现字符串复制功能（接受两个字符串，不返回任何值）
void str_cpy(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2), k = 0;
	for (int i = 0; i < len2; i++) {
		s1[k] = s2[i];
		k++;
	}
}

//判断点是否在矩形{左下角点为（1,1），右上角点为（5,5）}内，如果在内则返回true，否则返回false（接受点的坐标x和y，进行判断）
bool isPointInJu(int x, int y) {
	if (x >= 1 && x <= 5) {
		if (y >= 1 && y <= 5) {
			return true;
		}
		else return false;
	}
	else
		return false;
}

//计算n!（接受n，返回n的阶乘）
int isN(int n) {
	if (n == 1)
		return 1;
	else
		return n * isN(n - 1);
}

//输出在数a和b之间的所有素数（接受两个数a和b，不返回任何值，注意a<b）
void isSu(int a, int b) {
	for (int i = a; i <= b; i++) {
		int flag = 0;
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", i);
	}
	printf("\n");
}

//判断年份是否为闰年（接受年份，返回值为bool）
bool isRY(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return true;
	}
	else
		return false;
}

//判断是否为亲和数（亲和数是指：两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数）
bool isYueShu(int a, int b) {
	int sum = 0, k = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			sum += i;
		}
	}
	if (a == b) {
		return false;
	}
	else if (sum == b) {
		return true;
	}
	else
		return false;
}

//找到一维数组的最大值（接受一个一维数组的首地址和数组长度，返回一维数组中的最大值）
int isMaxArray(int* arr, int len) {
	int MAX = arr[0];
	for (int i = 0; i < len; i++) {
		if (MAX < arr[i]) {
			MAX = arr[i];
		}
	}
	return MAX;
}

//找到一维数组的最小值（接受一个一维数组的首地址和数组长度，返回一维数组中的最小值）
int isMinArray(int* arr, int len) {
	int Min = arr[0];
	for (int i = 0; i < len; i++) {
		if (Min > arr[i]) {
			Min = arr[i];
		}
	}
	return Min;
}

//升序排序数组（接受一个一维数组的首地址和数组长度）
void sortArray(int* arr, int n) {
	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) {
			if (arr[i + 1] < arr[i]) {
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

//向量点积计算（接受两个向量数组a和b和两个向量的大小，返回计算值）
int vectorA_plus_vectorB(int* arr, int* brr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i] * brr[i];
	}
	return sum;
}

//字符串删除：删除某字符串中的某个字符（接受一个char字符串首地址和要删除的字符ch）
void del_char(char* str, char ch)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
			continue;
		else
		{
			printf("%c", str[i]);
		}
	}
}

//输出最大公约数（接受两个数）
void isMaxGongYue(int m, int n)
{
	int temp = 0;
	int i = 0;
	if (m < n) /*比较大小，使得m中存储大数，n中存储小数*/
	{          /*交换m和n的值*/
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i > 0; i--) /*按照从大到小的顺序寻找满足条件的自然数*/
		if (m % i == 0 && n % i == 0)
		{ /*输出满足条件的自然数并结束循环*/
			printf("%d", i);
			break;
		}
}

//输出最小公倍数（接受两个值）
void isMinGongBei(int m, int n)
{
	int temp = 0;
	int i = 0;
	if (m < n) /*比较大小，使得m中存储大数，n中存储小数*/
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i > 0; i++) /*从大数开始寻找满足条件的自然数*/
		if (i % m == 0 && i % n == 0)
		{ /*输出满足条件的自然数并结束循环*/
			printf(" %d\n", i);
			break;
		}
}

//字符串问题：字符串中从第m个字符开始的全部字符复制成为另一个字符串
void changeString(char str[], int n, int t)
{
	for (int i = t - 1; i < n; i++)
	{
		printf("%c", str[i]);
	}
}
