#include<stdio.h>
int main(){
	int number;
	printf("ban hay nhap vao 1 so nguyen");
	scanf("%d",&number);
	switch(number){
		case(number/3==0)
			printf("%d chia het cho 3",number);
			break;
			
	    case(number/5==0):
	    	printf("%d chia het cho 5",number);
	    	break;
	    case(number/3==0&&number/5==0):
	    	printf("%d chia het cho ca 3 va 5",number);
	    	break;
	    defaut:
	    	printf("%d khong chia het cho ca 3 va 5");
			
	}
	 
} 

