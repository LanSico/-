#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,n,t,p,q,o,m;
	printf("������ȫ���е�����λ����");
	scanf("%d", &t);
	int a[10];/*����֪���û�������١����������ϡ������ᳬ��10�������Ǿ���50�ɡ������������Խ�硣��*/
	i = t;
	for (n=1;i > 1;i--)
		n = n * 10;
	for (m = n * 10;n < m;n++){
		o = n;
		for (i = t;i > 0;i--){
			a[i] = o % 10;
			o /= 10;
		}
		p = 0;
		for (i = t;i > 0;i--){
			if (a[i] == 0)
				p++;
			if (a[i] > t)
				p++;
				for (q = t;q > 0;q--)
					if (a[i] == a[q])
						p++;	
		}
		if (p == t)
			printf("\n%d", n);
	}
	_sleep(100000);
	return 0;
}