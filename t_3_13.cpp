#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ָ��������������
//int main() {
//	int a = 13;
//	int b = 20;
//	int* arr[2] = { &a,&b};
//	int i = 0;
//	for (i = 0; i < 2; i++) {
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//дһ������������������м���1
//int count_bit_one(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count=count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//�������⣬�ж����д����ֵ
//int main() {
//	int x = 2, y = -1, z = 5;
//	if (x < y)
//		if (y < 0)
//			z = 0;
//		else
//			z = z + 1;
//	printf("%d\n", z);
//	return 0;
//}

//������n=1ʱ�����н���ǣ�2,1(ֱ��ѭ���ṹ��
//int main() {
//	int s = 0, a = 5, n;
//	scanf("%d", &n);
//	do {
//		s += 1; a = a - 2;
//	} while (a != n);
//	printf("%d,%d\n", s,a);
//	return 0;
//}

//getchar()�������ַ�����Ӧ��
//int main() {
//	char c;
//	c = getchar();
//	while (c != '?') {
//		putchar(c);
//		c = getchar();
//	}
//	return 0;
//}

//ѭ������Ӧ��
//int main() {
//	int x, y = 0;
//	for (x = 1; x <= 10; x++) {
//		if (y >= 10)//ֱ��y����10��ʱ��Ż�ִ��break�������
//			break;
//		y = y + x;
//	}
//	printf("%d  %d\n", y, x);
//	return 0;
//}

//Switch.....case��������
//int main() {
//	char ch;
//	ch = getchar();
//	switch (ch) {
//	case 'A':
//		printf("%c", 'A');
//	case 'B':
//		printf("%c", 'B');
//	case 'C':
//		printf("%c", 'C');
//		break;
//	default:
//		printf("%s\n", "other");
//	}
//	return 0;}

int main()
{
    int  x, y;
    for (x = 30, y = 0; x >= 10, y < 10; x--, y++)
        x /= 2, y += 2;
    printf("x = % d, y = % d\n", x, y);
    return 0;
}
