//以十进制八进制十六进制打印十进制数字100
#include<stdio.h>
int main(void){
	int num=100;
	printf("%d;%o;%x\n",num,num,num);
	printf("%#d;%#o;%#x;%#X\n",num,num,num,num);
	return 0;
}
