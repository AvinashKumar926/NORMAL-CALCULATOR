#include<stdio.h>
#include<stdlib.h>
void display(int c)		//FOR DISPLAYING
{	printf("THE ANSWER IS:%d",c);
}
int add(int a,int b)		//for addition
{	int c;
	c=a+b;
	break;
}
int sub(int a,int b)		//FOR SUBTRACTION
{	int c;
	c=a-b;
	break;
}

int multiply(int a,int b)	//FOR MULTIPLICATION
{	int c;
	c=a*b;
	break;
}

int divide(int a,int b)		//FOR DIVISION
{	int c;
	c=a/b;
	break;
}



int main()
{	int a,b,c,l;
	char ch;
	system("clear");
	do{
		printf("MENU");
		printf("\n\t+\n\t-\n\t*\n\t/");
		printf("\nENTER YOUR CHOICE:");
		scanf("%c",&ch);
		switch(ch)							
		{	case '+':printf("\nENTER TWO NUBER TO BE CALCULATED:");
				scanf("%d%d",&a,&b);
				c=add(a,b);
				display(c);
				break;	
			case '-':printf("E\nNTER TWO NUBER TO BE CALCULATED:");
				scanf("%d%d",&a,&b);
				c=sub(a,b);
				display(c);
				break;
			case '*':printf("\nENTER TWO NUBER TO BE CALCULATED:");
				scanf("%d%d",&a,&b);
				c=multiply(a,b);
				display(c);
				break;	
			case '/':printf("\nENTER TWO NUBER TO BE CALCULATED:");
				scanf("%d%d",&a,&b);
				c=divide(a,b);
				display(c);
				break;
			default:printf("The command you has input is invalid or not medtioned in the program and it will be updated in the upcomming future^!^\n");	
		}
		printf("ENTER 1 IF U WANT TO CONTINUE:");
		scanf("%d",&l);
		system("clear");
	}while(l==1);	
	return 0;

}
