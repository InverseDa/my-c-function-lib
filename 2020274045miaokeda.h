#pragma once
#ifndef _2020274045MIAOKEDA_H_
	#define _2020274045MIAOKEDA_H_


//����������������������κβ������������κ�ֵ�����������������������������ڲ�ִ�У�
void printPyr(void);

//�ж������Ƿ�Ϊ����������������int��������1���ǻ�������0���ǻ�������
int isHuiWen(int num);

//�����ʯ��ԲȦ�ĸ������������κβ������������κ�ֵ��
void printDiamondNum(void);

//�����ֽ⣨���ܳ�����long���������κ�ֵ������������������ֽ���������������(����)==��������
void printZhiShu(long n);

//˭���ˣ����������κβ������������κ�ֵ��
void whoIsWrong(void);

//��������ƽ����������һ����������double�����س�������double��
double newSqrtfunction(double n);

//��ǿ��ĸ���������κβ����������ַ����ͣ�
char isBiggestChar(void);

//����������͸߶ȣ�����һ������int��һ��������float�����ظ�����float��
float isMinHeight(int n, float h);

//3n+1�任���⣨����һ������������ֵ��3n+1�任���̵Ĵ�����
int isChange(int n);

//����ͬ�����⣨���ܼ����õĽ������������ӵ���С����
int chickenWithRabbitCage(int n);

//ʮ��������תʮ���������������κ�ֵ���������int������ʮ���������Ļ����ڳ�����ִ�У�
int shiliuChangetoShi(void);

//����a��n�η���������������a��n������a��n�η���
int aPlusCountN(int a, int n);

//��n����,ÿk���̻Ҿ����ٻ�һ����(����n���̺�ÿk���̻ҾͿ��Ի�һ���̣����س��̵Ĵ���)
int chouYan(int n, int k);

//�����ε��жϣ����������ߵĳ���abc���������κ�ֵ��
void judgeTriangle(int a, int b, int c);

//ת�þ���ļ��㣨����һ����ά���飬�������κ�ֵ����������ӡת�ú�ľ���
void changeMartix(int a[1000][1000], int i, int j);

//DP���⣺���������������ĸ߶�n���������κ�ֵ���������û�������������Ԫ�ص�ÿ��ֵ������ӡ���ֵ��
void dp_ShuTa(int n);

//�ַ���ת�������ַ�����you�ĳ�we�����
void changeYouToWe(char* s);

//DP���⣺�����ַ�����Ϊ�����ַ�����Ҫ����ַ�����Сֵ������һ��char�����׵�ַ��������Сֵ��
int isMinHuiWen(char* s1);

//�����ַ����ĳ��ȣ�����һ��char�����׵�ַ�������ַ������ȣ�
int str_len(char* ch);

//ʵ���ַ������ƹ��ܣ����������ַ������������κ�ֵ��
void str_cpy(char* s1, char* s2);

//�жϵ��Ƿ��ھ���{���½ǵ�Ϊ��1,1�������Ͻǵ�Ϊ��5,5��}�ڣ���������򷵻�true�����򷵻�false�����ܵ������x��y�������жϣ�
bool isPointInJu(int x, int y);

//����n!������n������n�Ľ׳ˣ�
int isN(int n);

//�������a��b֮�����������������������a��b���������κ�ֵ��ע��a<b��
void isSu(int a, int b);

//�ж�����Ƿ�Ϊ���꣨������ݣ�����ֵΪbool��
bool isRY(int year);

//�ж��Ƿ�Ϊ�׺������׺�����ָ�����������κ�һ����������һ��������Լ��֮�ͣ����������������׺�����
bool isYueShu(int a, int b);

//�ҵ�һά��������ֵ������һ��һά������׵�ַ�����鳤�ȣ�����һά�����е����ֵ��
int isMaxArray(int* arr, int len);

//�ҵ�һά�������Сֵ������һ��һά������׵�ַ�����鳤�ȣ�����һά�����е���Сֵ��
int isMinArray(int* arr, int len);

//�����������飨����һ��һά������׵�ַ�����鳤�ȣ�
void sortArray(int* arr, int n);

//����������㣨����������������a��b�����������Ĵ�С�����ؼ���ֵ��
int vectorA_plus_vectorB(int* arr, int* brr, int n);

//�ַ���ɾ����ɾ��ĳ�ַ����е�ĳ���ַ�������һ��char�ַ����׵�ַ��Ҫɾ�����ַ�ch��
void del_char(char* str, char ch);

//������Լ����������������
void isMaxGongYue(int m, int n);

//�����С����������������ֵ��
void isMinGongBei(int m, int n);

//�ַ������⣺�ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ���
void changeString(char str[], int n, int t);
#endif


