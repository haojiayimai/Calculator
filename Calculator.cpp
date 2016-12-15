#include<stdio.h>
int main()
{
	double number1=0.0;
	char operation='0';//operation="+-*/%"
	double number2=0.0;
	scanf("%lf%c%lf",&number1,&operation,&number2);
	switch(operation)
	{
		case '+': printf("=%lf\n",number1+number2); break;
		case '-': printf("=%lf\n",number1-number2); break;
		case '*': printf("=%lf\n",number1*number2); break;
		case '/':
			if(number2==0) printf("分母为0，错误");
			else printf("=%lf\n",number1/number2);
			break;
		case '%':
			if((long)number2==0) printf("模运算分母为0，错误");
			else printf("=%ld\n",(long)number1%(long)number2);
			break;
		default: printf("error\n");
	}
	return 0;
}

