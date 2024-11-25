#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap vao 1 so nguyen tu 1 den 10 : ");
	scanf("%d",&n);
	printf("bang cuu chuong cua %d la: ");
	for (int i=1; i<=10; i++){
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
