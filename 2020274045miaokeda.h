#pragma once
#ifndef _2020274045MIAOKEDA_H_
	#define _2020274045MIAOKEDA_H_


//输出金字塔函数（不接受任何参数，不返回任何值，所有输出金字塔操作在这个函数内部执行）
void printPyr(void);

//判断数字是否为回文数（接受整数int，若返回1则是回文数，0则不是回文数）
int isHuiWen(int num);

//输出钻石在圆圈的个数（不接受任何参数，不返回任何值）
void printDiamondNum(void);

//质数分解（接受长整数long，不返回任何值，函数将输出长整数分解出的质数，满足∏(质数)==长整数）
void printZhiShu(long n);

//谁错了？（不接受任何参数，不返回任何值）
void whoIsWrong(void);

//迭代法求平方根（接受一个长浮点数double，返回长浮点数double）
double newSqrtfunction(double n);

//最强字母（不接受任何参数，返回字符类型）
char isBiggestChar(void);

//自由落体最低高度（接受一个整数int和一个浮点数float，返回浮点数float）
float isMinHeight(int n, float h);

//3n+1变换问题（接受一个整数，返回值在3n+1变换过程的次数）
int isChange(int n);

//鸡兔同笼问题（接受鸡和兔的脚数，返回兔子的最小数）
int chickenWithRabbitCage(int n);

//十六进制数转十进制数（不接受任何值，输出整数int，输入十六进制数的环节在程序中执行）
int shiliuChangetoShi(void);

//计算a的n次方（接受两个整数a和n，返回a的n次方）
int aPlusCountN(int a, int n);

//有n个烟,每k根烟灰就能再换一根烟(接受n根烟和每k根烟灰就可以换一根烟，返回抽烟的次数)
int chouYan(int n, int k);

//三角形的判断（接受三条边的长度abc，不返回任何值）
void judgeTriangle(int a, int b, int c);

//转置矩阵的计算（接受一个二维数组，不返回任何值，函数将打印转置后的矩阵）
void changeMartix(int a[1000][1000], int i, int j);

//DP问题：数塔（接受数塔的高度n，不返回任何值，函数中用户将输入数塔中元素的每个值，并打印最大值）
void dp_ShuTa(int n);

//字符串转换：将字符串的you改成we并输出
void changeYouToWe(char* s);

//DP问题：计算字符串成为回文字符串需要添加字符的最小值（接受一个char数组首地址，返回最小值）
int isMinHuiWen(char* s1);

//计算字符串的长度（接受一个char数组首地址，返回字符串长度）
int str_len(char* ch);

//实现字符串复制功能（接受两个字符串，不返回任何值）
void str_cpy(char* s1, char* s2);

//判断点是否在矩形{左下角点为（1,1），右上角点为（5,5）}内，如果在内则返回true，否则返回false（接受点的坐标x和y，进行判断）
bool isPointInJu(int x, int y);

//计算n!（接受n，返回n的阶乘）
int isN(int n);

//输出在数a和b之间的所有素数（接受两个数a和b，不返回任何值，注意a<b）
void isSu(int a, int b);

//判断年份是否为闰年（接受年份，返回值为bool）
bool isRY(int year);

//判断是否为亲和数（亲和数是指：两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数）
bool isYueShu(int a, int b);

//找到一维数组的最大值（接受一个一维数组的首地址和数组长度，返回一维数组中的最大值）
int isMaxArray(int* arr, int len);

//找到一维数组的最小值（接受一个一维数组的首地址和数组长度，返回一维数组中的最小值）
int isMinArray(int* arr, int len);

//升序排序数组（接受一个一维数组的首地址和数组长度）
void sortArray(int* arr, int n);

//向量点积计算（接受两个向量数组a和b和两个向量的大小，返回计算值）
int vectorA_plus_vectorB(int* arr, int* brr, int n);

//字符串删除：删除某字符串中的某个字符（接受一个char字符串首地址和要删除的字符ch）
void del_char(char* str, char ch);

//输出最大公约数（接受两个数）
void isMaxGongYue(int m, int n);

//输出最小公倍数（接受两个值）
void isMinGongBei(int m, int n);

//字符串问题：字符串中从第m个字符开始的全部字符复制成为另一个字符串
void changeString(char str[], int n, int t);
#endif


