//Simple Calculator

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int add(float,float);
int sub(float,float);
int mul(float,float);
int dive(float, float);
int loge(float,float);
int square_root(float,float);

int main()
{
	while(1){
	float a,b;
	int operaters;
	printf("\nEnter the operaters: 1.add 2.sub 3.multiplication 4.div 5.logiritham 6.square root 7.exit  :");
	scanf("%d",&operaters);
	if (operaters == 7) {
        exit(0);
    }
    printf("Enter num1: ");
    scanf("%f",&a);
    printf("Enter num2: ");
	scanf("%f",&b);
	switch(operaters){
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			dive(a,b);
			break;
		case 5:
			loge(a,b);
		case 6:
			square_root(a,b);
			break;	
		default:
		 	printf("invalid input given");	
	}
}
	return 0;
}

int add(float a, float b)
{
	float c;
	c=a+b;
	printf("%f",c);
}

int sub(float a, float b)
{
	float c;
	c=a-b;
	printf("%f",c);
}

int mul(float a, float b)
{
	float c;
	c=a*b;
	printf("%f",c);
}

int dive(float a, float b)
{
	float c;
	if(b>0){
		c=a/b;
		printf("%f",c);
	}
	else{
		printf("invalid input !");
	}
}

int loge(float a, float b)
{
	float c;
	if(a>0 && b>0 && b !=1){
		c=log(a)/log(b);
		printf("%d",c);	
	}
	else{
		printf("invalid input");
	}
}

int square_root(float a, float b)
{
	float c;
	if(b>0){
		c=pow(a,b);
		printf("%f",c);
	}
	else{
		printf("invalid input ");
		}
	
}

/*
	No any problem for this code execuation only 5.logiritham 6.square root value is not verify so 
	varify it and thing about if i required sum or sub etc for three value , four value ... what i do.
*/
