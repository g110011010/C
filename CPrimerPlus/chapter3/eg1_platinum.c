/*your weight in platinum*/
/*2018年4月30日 19点19分*/
#include<stdio.h>
int main(void){
	float weight;//重量
	float value;//等量铂金的价值

	printf("Do you know your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds.\n");

	//获取用户的输入
	scanf("%f",&weight);
	//假设白金的价格是$1700每盎司
	//14.5833用于把英镑场衡盎司转化为金衡盎司
	value=1700.00*weight*14.5833;
	printf("Your weight in paltinum is worth %.2f.\n",value);
	printf("You are easily worth it, if the platinum price drop,\n");
	printf("Eat more to maintain your value.\n");

	return 0;
}
