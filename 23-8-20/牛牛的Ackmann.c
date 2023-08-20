#include <stdio.h>
int Ackmann(int n,int m);
int main (void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",Ackmann(m,n));
	return 0;
}
//函数功能：实现阿克曼函数
int Ackmann(int m,int n)
{
	if(m > 0 && n > 0)
	{
		return Ackmann(m-1,Ackmann(m,n - 1));
	}
	if(m > 0 && n == 0)
	{
		return Ackmann(m - 1,1);
	}
	if(m == 0)
	{
		return n+1;
	}
	return 0;
}
////#include<stdio.h>/*上网查了一下，题目m,n参数给反了，函数内第二条应该是ackmann(m-1,1)，函数也
////给错了，都改完就好了，实在不行就加几条m==1,2,3，缩小下递归试试吧*/
////  long long x=0;
////  int ackmann(long long m,long long n)
////  {
////  if(m==0)
////  {
////  return n+1;
////  }
////  if(m>0&&n==0)
////  return ackmann(m-1,1);
////  if(m>0&&n>0) 
////  return ackmann(m-1,ackmann(m,n-1));
////  return 0;
////  }
////  int main()
////  {
////  long long n;
////  long long m;
////  scanf("%lld %lld",&n,&m);
////  printf("%lld",ackmann(m,n));
////  return 0;
////  }
//
//#include <stdio.h>
//
//// 递归方法一
//int ack(int m, int n) {
//	if (m == 0)
//		return n + 1;
//	else if (m > 0 && n == 0)
//		return ack(m - 1, 1);
//	else
//		return ack(m - 1, ack(m, n - 1));
//}
//
///* 递归方法二
//  int ack(int m, int n) {
//  while (m != 0) {
//  if (n == 0) n = 1;
//  else n = ack(m, n - 1);
//  m--;
//  }
//  return n + 1;
//  }
// */
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d", ack(m, n));
//	return 0;
//}

