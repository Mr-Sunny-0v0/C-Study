#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double a,b,c,pb,x1,x2,a1,b1;
//	printf("������a,b,c(�ö��Ÿ���):");
//	scanf("%lf,%lf,%lf",&a,&b,&c);
//	pb = b*b-4*a*c;
//	if(pb >= 0){
//		if(pb > 0){
//			x1 = (-b+sqrt(pb))/(2*a);
//			x2 = (-b-sqrt(pb))/(2*a);
//		}
//		else{
//			x1 = x2 = -b/(2*a);
//		}
//		printf("���̵ĸ�Ϊ��\nx1=%.2lf,x2=%.2lf\n",x1,x2);
//	}
//	else{
//		a1 = -b/(2*a);
//		b1 = sqrt(-pb)/(2*a);
//		printf("���̵ĸ�Ϊ��\nx1=%.2lf+%.2lfi,x2=%.2lf-%.2lfi",a1,b1,a1,b1);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int num;
//	printf("������һ��������");
//	scanf("%d",&num);
//	if(num >= 0){
//		num = num;
//	}
//	else{
//		num = -num;
//	}
//	printf("����ֵΪ:%d\n",num);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double a,b;
//	printf("����������ʵ�����ÿո��������");
//	scanf("%lf%lf",&a,&b);
//	if(a >= b){
//		printf("��С����%.2lf,%.2lf\n",b,a);
//	}
//	else{
//		printf("��С����%.2lf,%.2lf\n",a,b);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double a,b,c;
//	printf("����������ʵ�����ÿո��������");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(a >= b){
//		if(b >= c){
//			printf("��С����%.2lf,%.2lf,%.2lf\n",c,b,a);
//		}
//		else{
//			if(a >= c){
//				printf("��С����%.2lf,%.2lf,%.2lf\n",b,c,a);
//			}
//			else{
//				printf("��С����%.2lf,%.2lf,%.2lf\n",b,a,c);
//			}
//		}
//	}
//	else{
//		if(a >= c){
//			printf("��С����%.2lf,%.2lf,%.2lf\n",c,a,b);
//		}
//		else{
//			if(b >= c){
//				printf("��С����%.2lf,%.2lf,%.2lf\n",a,c,b);
//			}
//			else{
//				printf("��С����%.2lf,%.2lf,%.2lf\n",a,b,c);
//			}
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double a,b,t;
//	printf("����������ʵ�����ÿո��������");
//	scanf("%lf%lf",&a,&b);
//	if(a >= b){
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("��С����%.2lf,%.2lf\n",a,b);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double a,b,c,t;
//	printf("����������ʵ�����ÿո��������");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if(a >= b){
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(a >= c){
//		t = a;
//		a = c;
//		c = t;
//	}
//	if(b >= c){
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("��С����%.2lf,%.2lf,%.2lf\n",a,b,c);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c,t;
//	c = getchar();
//	//(c>=65 && c<=90) ? (c=c+32) : (c=c);
//	//(c>=65 && c<=90) ? (c=c+32) : c ;
//	c = (c>=65 && c<=90) ? (c+32) : c;
//	putchar(c);
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double x;
//	int y;
//	printf("������x��ֵ��");
//	scanf("%lf",&x);
//	if(x < 0){
//		y = -1;
//	}
//	else{
//		if(x > 0){
//			y = 1;
//		}
//		else{
//			y = 0;
//		}
//	}
//	printf("y = %d\n",y);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double x;
//	int y;
//	printf("������x��ֵ��");
//	scanf("%lf",&x);
//	if(x < 0){
//		y = -1;
//	}
//	else if(x > 0){
//		y = 1;
//	}
//	else{
//		y = 0;
//	}
//	printf("y = %d\n",y);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char grades;
//	printf("������ɼ��ȼ���");
//	grades = getchar();
//	switch(grades){
//		case 'A':printf("85-100\n");
//			break;
//		case 'B':printf("70-84\n");
//			break;
//		case 'C':printf("60-69\n");
//			break;
//		case 'D':printf("<60\n");
//			break;
//		default:printf("�������");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int year;
//	printf("��������ݣ�");
//	scanf("%d",&year);
//	if((year%4==0 && year%100!=0) || year%400==0){
//		printf("%d��������\n",year);
//	}
//	else{
//		printf("%d�겻������\n",year);
//	}
//	return 0;
//}





























































