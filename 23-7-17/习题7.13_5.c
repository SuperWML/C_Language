#include <stdio.h>
#include <stdio.h>
#include <math.h>
int IsPrime(int m);
int IsPerfect(int m);
int main (void) {
	int m;
	scanf("%d", &m);
	if (IsPerfect(m)) {
		printf ("%d is a Perfect number", m);
	} else {
		printf ("%d is not a Perfect number", m);
	}
	return 0;
}
//函数功能：判断是否是素数
int IsPrime(int m) {
	int i = 0;
	for (i = 2; i <= sqrt(m); i++) {
		if (m % i == 0) {
			return 0;
		}
	}
	return 1;
}
//函数功能：判断是否是完全数
int IsPerfect(int m) {
	int i = 0, sum = 0;
	for (i = 1; i < m; i++) {
		if (m % i == 0) {
			sum += i;
		}
	}
	if (sum == m) {
		return 1;
	}
	return 0;
}
