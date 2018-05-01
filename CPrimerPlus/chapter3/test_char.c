//C将字符常量视为int类型，所以在将能用int类型表示的常量赋值给char类型的时候，只会取常量的低八位赋值给char
//验证蜂鸣器
#include<stdio.h>
int main(void){
	char a='c';
	char b='FARC';
	char c=56;
	char d=49976;
	printf("'c':%c;\n'FARC':%c;\n56:%c;\n49976:%c\n",a,b,c,d);
	printf("\a\a\a\a\a\a\n");
	return 0;
}
