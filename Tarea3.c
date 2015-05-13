#include <stdio.h>

int main(){
	
	int a=1, b=2, c=3, d=4, e=0;
	int total;

	total=(b+c)*d;
	e=d-c;
	d=d--;

	total=(total-b)/a;
	total=total+b-d;
	total=total*a;
	total=total++;

	printf("%d\n",total);

	return 0;
}