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



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double a,b,c,x1,x2,pb,sb,xb;
//	printf("������a,b,c���ÿո������:");
//	scanf("%lf%lf%lf",&a,&b,&c);
//	pb = b*b-4*a*c;
//	if(fabs(a) <= 1e-10){
//		printf("���Ƕ��η���\nΨһ��x = %.2lf\n",-c/b);
//	}
//	else{
//		if(fabs(pb) <= 1e-10){
//			x1=x2=-b/(2*a);
//			printf("���η��̵ĸ�Ϊ��\nx1=%.2lf\tx2=%.2lf\n",x1,x2);
//		}
//		else{
//			if(pb > 1e-10){
//				x1 = -b/(2*a)+sqrt(pb)/(2*a);
//				x2 = -b/(2*a)-sqrt(pb)/(2*a);
//				printf("���η��̵ĸ�Ϊ��\nx1=%.2lf\tx2=%.2lf\n",x1,x2);
//			}
//			else{
//				sb = -b/(2*a);
//				xb = sqrt(-pb)/(2*a);
//				printf("���η��̵ĸ�Ϊ��\nx1=%.2lf+%.2lfi\tx2=%.2lf-%.2lfi\n",sb,xb,sb,xb);
//			}
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double f,p,w,d;
//	int s,c;
//	printf("����������˷ѡ��������������루�ÿո��������");
//	scanf("%lf%lf%d",&p,&w,&s);
//	if(s >= 3000){
//		c = 12;
//	}
//	else{
//		c = s/250;
//	}
//	switch(c){
//		case 0: d=0.0;break;
//		case 1: d=0.02;break;
//		case 2:
//		case 3: d=0.05;break;
//		case 4:
//		case 5:
//		case 6:
//		case 7: d=0.08;break;
//		case 8:
//		case 9:
//		case 10:
//		case 11: d=0.10;break;
//		case 12: d=0.15;
//	}
//	f = p*w*s*(1-d);
//	printf("���˷�=%.2lf\n",f);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a,b,c,m;
//	printf("���������������ÿո��������");
//	scanf("%d%d%d",&a,&b,&c);
//	m = a;
//	if(m < b){
//		m = b;
//	}
//	if(m < c){
//		m = c;
//	}
//	printf("�����������ֵΪ��%d\n",m);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double x;
//	int y;
//	printf("������һ��С��1000��������");
//	scanf("%lf",&x);
//	if(x<=0 || x>=1000){
//		printf("�������ݴ������������룺");
//		scanf("%lf",&x);	
//	}
//	y = sqrt(x);
//	printf("%.2lf��ƽ����=%.d\n",x,y);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double x,y;
//	printf("������x��");
//	scanf("%lf",&x);
//	if(x < 1){
//		y = x;
//	}
//	else{
//		if(x >= 10){
//			y = 3*x-11;
//		}
//		else{
//			y = 2*x-1;
//		}
//	}
//	printf("y = %.2lf\n",y);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double score;
//	int t;
//	printf("���������(0-100)��");
//	scanf("%lf",&score);
//	while(score<0 || score>100){
//		printf("����������������룺");
//		scanf("%lf",&score);
//	}
//	if(score < 60){
//		t = 5;
//	}
//	else{
//		t = score/10;
//	}
//	switch(t){
//		case 5:putchar('E');break;
//		case 6:putchar('D');break;
//		case 7:putchar('C');break;
//		case 8:putchar('B');break;
//		case 9:
//		case 10:putchar('A');
//	}
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int num,count,g,s,b,q,w;
//	printf("������һ��������5λ����������");
//	scanf("%d",&num);
//	if(num > 9999){
//		count = 5;
//	}
//	else if(num > 999){
//		count = 4;
//	}
//	else if(num > 99){
//		count = 3;
//	}
//	else if(num > 9){
//		count = 2;
//	}
//	else{
//		count = 1;
//	}
//	printf("%d��%dλ��\n",num,count);
//	g = num%10;
//	s = num%100/10;
//	b = num%1000/100;
//	q = num%10000/1000;
//	w = num/10000;
//	switch(count){
//		case 1:
//			printf("��λ=%d\n",g);
//			printf("���������%d\n",g);
//			break;
//		case 2:
//			printf("��λ=%d,ʮλ=%d\n",g,s);
//			printf("���������%d%d\n",g,s);
//			break;
//		case 3:
//			printf("��λ=%d,ʮλ=%d,��λ=%d\n",g,s,b);
//			printf("���������%d%d%d\n",g,s,b);
//			break;
//		case 4:
//			printf("��λ=%d,ʮλ=%d,��λ=%d,ǧλ=%d\n",g,s,b,q);
//			printf("���������%d%d%d%d\n",g,s,b,q);
//			break;
//		case 5:
//			printf("��λ=%d,ʮλ=%d,��λ=%d,ǧλ=%d,��λ=%d\n",g,s,b,q,w);
//			printf("���������%d%d%d%d%d\n",g,s,b,q,w);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double num,b1=0.0,b2=0.0,b3=0.0,b4=0.0,b5=0.0,b6=0.0;
//	printf("����������");
//	scanf("%lf",&num);
//	while(num < 0){
//		printf("���������������������");
//		scanf("%lf",&num);
//	}
//	if(num <= 100000){
//		b1 = num*0.1;
//	}
//	else if(num <= 200000){
//		b1 = 100000*0.1;
//		b2 = (num-100000)*0.075;
//	}
//	else if(num <= 400000){
//		b1 = 100000*0.1;
//		b2 = 100000*0.075;
//		b3 = (num-200000)*0.05;
//	}
//	else if(num <= 600000){
//		b1 = 100000*0.1;
//		b2 = 100000*0.075;
//		b3 = 200000*0.05;
//		b4 = (num-400000)*0.03;
//	}
//	else if(num <= 1000000){
//		b1 = 100000*0.1;
//		b2 = 100000*0.075;
//		b3 = 200000*0.05;
//		b4 = 200000*0.03;
//		b5 = (num-600000)*0.015;
//	}
//	else{
//		b1 = 100000*0.1;
//		b2 = 100000*0.075;
//		b3 = 200000*0.05;
//		b4 = 200000*0.03;
//		b5 = 400000*0.015;
//		b6 = (num-1000000)*0.01;
//	}
//	printf("����=%.2lf\n",b1+b2+b3+b4+b5+b6);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a,b,c,d,t;
//	printf("������a,b,c,d(�ÿո����)��");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	if(a>b){
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a>c){
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(a>d){
//		t=a;
//		a=d;
//		d=t;
//	}
//	if(b>c){
//		t=b;
//		b=c;
//		c=t;
//	}
//	if(b>d){
//		t=b;
//		b=d;
//		d=t;
//	}
//	if(c>d){
//		t=c;
//		c=d;
//		d=t;
//	}
//	printf("%d%d%d%d\n",a,b,c,d);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double x,y;
//	int h;
//	printf("����������x,y���ÿո��������");
//	scanf("%lf%lf",&x,&y);
//	if(sqrt((x-2)*(x-2)+(y-2)*(y-2))>1 && sqrt((x+2)*(x+2)+(y-2)*(y-2))>1 && sqrt((x-2)*(x-2)+(y+2)*(y+2))>1 && sqrt((x+2)*(x+2)+(y+2)*(y+2))>1){
//		h = 0;
//	}
//	else{
//		h = 10;
//	}
//	printf("�߶�=%d\n",h);
//	return 0;
//}






















