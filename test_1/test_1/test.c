#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main(){
//	printf("This is a C program.\n");
//	return 0;
//}


//
//#include <stdio.h>
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("��������֮�� = %d\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&num1,&num2);
//	if(num1 > num2){
//		max = num1;
//	}
//	else{
//		max = num2;
//	}
//	printf("�ϴ�ֵ = %d\n",max);
//	return 0;
//}



//#include <stdio.h>
//
//int Max(int num1,int num2){
//	if(num1 > num2)
//		return num1;
//	else
//		return num2;
//}
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	printf("�����������������ö��Ÿ�������");
//	scanf("%d,%d",&num1,&num2);
//	max = Max(num1,num2);
//	printf("�ϴ�ֵ = %d\n",max);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	printf("Hello World!\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	return 0;
//}



#include <stdio.h>

int Max(int a,int b,int c){
	if(a > b){
		if(a > c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b > c){
			return b;
		}
		else{
			return c;
		}
	}
}

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	printf("�����������������ö��Ÿ�������");
	scanf("%d,%d,%d",&a,&b,&c);
	max = Max(a,b,c);
	printf("���ֵ = %d\n",max);
	return 0;
}









