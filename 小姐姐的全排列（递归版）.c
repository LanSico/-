#include<stdio.h>
#include<stdlib.h>
int a[10] = { 0 };
int i, p, q, o;
int comp(int n,int m,int t)
{
	o = n;
	p = 0;
	for (i = t;i > 0;i--) {
		a[i] = o % 10;
		o /= 10;
		if (a[i] == 0)
			p++;
		if (a[i] > t)
			p++;
		for (q = t;q > 0;q--)
			if (a[i] == a[q])
				p++;
	}
	if(p==t)
	printf("\n%d", n);
	if (n < m)
		comp(n+1, m, t);
	return 0;
}

int main(void) {
	printf("请输入全排列的数的位数：");
	int f, c,d,e;
	scanf("%d", &c);
	f = c;
	for (d = 1;f > 1;f--)
		d = d * 10;
	e = d * 10;
		comp(d, e,c);
	_sleep(100000);
	return 0;
}