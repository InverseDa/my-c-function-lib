#include <stdio.h>
#include <math.h>
#include <string.h>
#include "2020274045miaokeda.h"

//����������������������κβ������������κ�ֵ�����������������������������ڲ�ִ�У�
void printPyr(void) {
	//��������n
	int n;
	//�������������a
	int a;
	//��������ַ�c
	char c;
	//��������n
	scanf("%d", &n);
	//forѭ�����������
	for (int i = 0; i < n; i++)
	{
		//�������������a���ַ���ʾc
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

//�ж������Ƿ�Ϊ����������������int��������1���ǻ�������0���ǻ�������
int isHuiWen(int num) {
	scanf("%d", &num);  //��������
	int r = 0;
	int t = num;
	//���ֵ���
	while (num != 0)
	{
		r = r * 10 + num % 10;
		num /= 10;
	}
	//�������򷵻�1�����򷵻�0
	if (r == t)
		return 1;
	else
		return 0;
}

//�����ʯ��ԲȦ�ĸ������������κβ������������κ�ֵ��
void printDiamondNum(void) {
	int a, b, t, T, l, w, r, sum = 0, total = 0;
	scanf("%d", &T); //������Դ���
	for (t = 1; t <= T; t++)
	{ //ѭ��T��
		scanf("%d%d", &l, &w);
		getchar();
		scanf("%d%d%d", &a, &b, &r);

		int need = r * r;
		for (int i = 0; i <= w; i++)
		{ //���ڵ�n�е�����
			for (int j = 0; j <= l; j++)
			{                                                //���ڵ�n���е�m�е�����
				sum = (j - a) * (j - a) + (i - b) * (i - b); //sumΪ�㵽Բ�ľ����ƽ��
				if (sum <= need)
				{            //�������ƽ��С�ڰ뾶ƽ��
					total++; //����ʯ��һ
				}
			}
		}
		printf("%d\n", total); //�������ʯ��
		sum = total = 0;       //��ʼ������
	}
}

//�����ֽ⣨���ܳ�����long���������κ�ֵ������������������ֽ���������������(����)==��������
void printZhiShu(long n) {
	int i = 2;
	scanf("%ld", &n);   //�û�����
	while (true)    //����ѭ��
	{
		for (i = 2; i <= n; i++)
		{
			while (n % i == 0)
			{
				printf("%d ", i);
				n = n / i;
			}
		}
		break;  //����ѭ��
	}
}

//˭���ˣ����������κβ������������κ�ֵ��
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

//��������ƽ����������һ����������double�����س�������double��
double newSqrtfunction(double n) {
	double a, b;
	scanf("%lf", &n);      //����Ҫ��ƽ��������
	b = n / 2;             //b����n�Ķ���֮һ
	a = (b + n / b) / 2.0; //������ʽ
	while ((b - a) > 0.00001)
	{ //���е���
		double temp = a;
		a = (a + n / a) / 2.0;
		b = temp;
	}
	return a;
}

//��ǿ��ĸ���������κβ����������ַ����ͣ�
char isBiggestChar(void) {
	char ch;
	char max = 'z';
	while ((ch = getchar()) != '\n') {  //����һ���ַ���
		if (ch < max)
			max = ch;   //���ַ�����Ѱ��������ĸ
	}
	return max;
}

//����������͸߶ȣ�����һ������int��һ��������float�����ظ�����float�������ص�hΪ��n�ε�n+1���µ���͸߶�
float isMinHeight(int n, float h) {
	scanf("%f %d", &h, &n); //������������߶Ⱥ͵�n��
	float sum = h;
	if (n == 1)
	{
		sum += h / 2;
		h /= 2; //ÿ�ζ�����2
	}
	else
	{   //ѭ����ֱ����n-1
		for (int i = 0; i < n - 1; i++)
		{
			h = (int)(((h / 2) * 1000 + 5) / 10) / 100.0;
			sum = (int)(((sum + h * 2) * 1000 + 5) / 10) / 100.0;
		}
	}
	h = (int)(((h / 2) * 1000 + 5) / 10) / 100.0;   //��������������h
	return h;
}

//3n+1�任���⣨����һ������������ֵ��3n+1�任���̵Ĵ�����
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

//����ͬ�����⣨���ܼ����õĽ������������ӵ���С����
int chickenWithRabbitCage(int a) {
	//a��ʾ��
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
		b = a / 4; //��ֻ����
		b = b + 1; //����ֻ����
		x = b, y = a / 2;
	}
	return x;
}

//ʮ��������תʮ���������������κ�ֵ���������int������ʮ���������Ļ����ڳ�����ִ�У�
int shiliuChangetoShi(void) {
	int sum = 0, flag = 0;
	char ch;
	while ((ch = getchar()) != '\n')	//�û�����ʮ��������
	{	//ת��
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
	//�ֿ��������
	if (flag)
		return -1 * sum;
	else
		return sum;
}

//����a��n�η���������������a��n������a��n�η���
int aPlusCountN(int a, int n) {
	int sum = 1;
	for (int i = 0; i < a; i++)
	{
		sum = sum * n;
	}
	return sum;
}

//��n����,ÿk���̻Ҿ����ٻ�һ����(����n���̺�ÿk���̻ҾͿ��Ի�һ���̣����س��̵Ĵ���)
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

//�����ε��жϣ����������ߵĳ���abc���������κ�ֵ��
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

//ת�þ���ļ��㣨����һ����ά������׵�ַ���������κ�ֵ��
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

//DP���⣺���������������ĸ߶�n���������κ�ֵ���������û�������������Ԫ�ص�ÿ��ֵ������ӡ���ֵ��
void dp_ShuTa(int n) {
	int dp[100][100] = { 0 }, i, j;
	for (i = 0; i < n; i++)
	{ //�ӣ�0��0����ʼ����
		for (j = 0; j <= i; j++)
		{
			scanf("%d", &dp[i][j]);
		}
	}
	for (i = n - 2; i >= 0; i--)
	{ //�ӵ����ڶ��п�ʼ����
		for (j = 0; j <= i; j++)
		{
			if (dp[i + 1][j] > dp[i + 1][j + 1])
				dp[i][j] += dp[i + 1][j];
			else
				dp[i][j] += dp[i + 1][j + 1]; //�������±ߵģ���ߵ������ұߵ����������ֵ
		}
	}
	printf("%d\n", dp[0][0]); //��0��0����������ĺ�
}

//�ַ���ת�������ַ�����you�ĳ�we�����
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

//DP���⣺�����ַ�����Ϊ�����ַ�����Ҫ����ַ�����Сֵ������һ��char�����׵�ַ��������Сֵ��
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

//�����ַ����ĳ��ȣ�����һ��char�����׵�ַ�������ַ������ȣ�
int str_len(char* ch) {
	int len = 0;
	for (int i = 0; ch[i] != '\n'; i++) {
		if (ch[i] != '\n')
			len++;
	}
	return len;
}

//ʵ���ַ������ƹ��ܣ����������ַ������������κ�ֵ��
void str_cpy(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2), k = 0;
	for (int i = 0; i < len2; i++) {
		s1[k] = s2[i];
		k++;
	}
}

//�жϵ��Ƿ��ھ���{���½ǵ�Ϊ��1,1�������Ͻǵ�Ϊ��5,5��}�ڣ���������򷵻�true�����򷵻�false�����ܵ������x��y�������жϣ�
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

//����n!������n������n�Ľ׳ˣ�
int isN(int n) {
	if (n == 1)
		return 1;
	else
		return n * isN(n - 1);
}

//�������a��b֮�����������������������a��b���������κ�ֵ��ע��a<b��
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

//�ж�����Ƿ�Ϊ���꣨������ݣ�����ֵΪbool��
bool isRY(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		return true;
	}
	else
		return false;
}

//�ж��Ƿ�Ϊ�׺������׺�����ָ�����������κ�һ����������һ��������Լ��֮�ͣ����������������׺�����
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

//�ҵ�һά��������ֵ������һ��һά������׵�ַ�����鳤�ȣ�����һά�����е����ֵ��
int isMaxArray(int* arr, int len) {
	int MAX = arr[0];
	for (int i = 0; i < len; i++) {
		if (MAX < arr[i]) {
			MAX = arr[i];
		}
	}
	return MAX;
}

//�ҵ�һά�������Сֵ������һ��һά������׵�ַ�����鳤�ȣ�����һά�����е���Сֵ��
int isMinArray(int* arr, int len) {
	int Min = arr[0];
	for (int i = 0; i < len; i++) {
		if (Min > arr[i]) {
			Min = arr[i];
		}
	}
	return Min;
}

//�����������飨����һ��һά������׵�ַ�����鳤�ȣ�
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

//����������㣨����������������a��b�����������Ĵ�С�����ؼ���ֵ��
int vectorA_plus_vectorB(int* arr, int* brr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i] * brr[i];
	}
	return sum;
}

//�ַ���ɾ����ɾ��ĳ�ַ����е�ĳ���ַ�������һ��char�ַ����׵�ַ��Ҫɾ�����ַ�ch��
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

//������Լ����������������
void isMaxGongYue(int m, int n)
{
	int temp = 0;
	int i = 0;
	if (m < n) /*�Ƚϴ�С��ʹ��m�д洢������n�д洢С��*/
	{          /*����m��n��ֵ*/
		temp = m;
		m = n;
		n = temp;
	}
	for (i = n; i > 0; i--) /*���մӴ�С��˳��Ѱ��������������Ȼ��*/
		if (m % i == 0 && n % i == 0)
		{ /*���������������Ȼ��������ѭ��*/
			printf("%d", i);
			break;
		}
}

//�����С����������������ֵ��
void isMinGongBei(int m, int n)
{
	int temp = 0;
	int i = 0;
	if (m < n) /*�Ƚϴ�С��ʹ��m�д洢������n�д洢С��*/
	{
		temp = m;
		m = n;
		n = temp;
	}
	for (i = m; i > 0; i++) /*�Ӵ�����ʼѰ��������������Ȼ��*/
		if (i % m == 0 && i % n == 0)
		{ /*���������������Ȼ��������ѭ��*/
			printf(" %d\n", i);
			break;
		}
}

//�ַ������⣺�ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ���
void changeString(char str[], int n, int t)
{
	for (int i = t - 1; i < n; i++)
	{
		printf("%c", str[i]);
	}
}
