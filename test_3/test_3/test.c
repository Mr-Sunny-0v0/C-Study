#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	double f = 0.0;
//	double c = 0.0;
//	printf("请输入华氏温度：");
//	scanf("%lf",&f);
//	c = ( 5.0 / 9 ) * ( f - 32 );
//	printf("%lf华氏温度 = %lf摄氏温度\n",f,c);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double p0,p1,p2,p3;
//	double r1 = 0.0036;
//	double r2 = 0.0225;
//	double r3 = 0.0198;
//	printf("请输入存入金额：");
//	scanf("%lf",&p0);
//	p1 = p0 * (1 + r1);
//	p2 = p0 * (1 + r2);
//	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
//	printf("一年后总金额：\n");
//	printf("活期：%lf\n一年定期：%lf\n半年定期：%lf\n",p1,p2,p3);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char ch1,ch2;
//	printf("输入大写字母：");
//	scanf("%c",&ch1);
//	ch2 = ch1 + 32;
//	printf("对应小写字母：%c\n",ch2);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double a,b,c,p,s;
//	printf("请输入三角形的三条边长度（用逗号隔开）：");
//	scanf("%lf,%lf,%lf",&a,&b,&c);
//	p = (a + b + c)/2;
//	s = sqrt(p*(p-a)*(p-b)*(p-c));
//	printf("三角形面积=%lf\n",s);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double d = 123.456789e10;
//	float f = d;
//	printf("%f\n",f);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	double a,b,c,x1,x2;
//	printf("请输入a,b,c（用逗号隔开）:");
//	scanf("%lf,%lf,%lf",&a,&b,&c);
//	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
//	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
//	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double a = 1.0;
//	printf("%-5.1f\n",a);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	float a = 10000/3.0;
//	printf("%f\n",a);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char a = 'B',b = 'O',c = 'Y';
//	putchar(a);
//	putchar('O');
//	putchar(c);
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a=66,b=79,c=89;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a=66,b=79,c=89;
//	putchar(a);
//	putchar('\015');
//	putchar(b);
//	putchar('\015');
//	putchar(c);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char a,b,c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}




//#include <stdio.h>
//
//int main(){
//	putchar(getchar());
//	putchar(getchar());
//	putchar(getchar());
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	putchar(getchar() + 32);
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int n = 10;
//	double r = 0.07;
//	double p = pow((1+r),n);
//	double add = (p-1)*r;
//	printf("增长了%f倍，增长百分比为%f%%\n",p,add*100);
//	return 0 ;
//}



//#include <math.h>
//#include <stdio.h>
//
//int main(){
//	double m0 = 1000.0;
//	double m1 = m0*(1+5*0.03);
//	double m2 = m0*(1+2*0.021)*(1+3*0.0275);
//	double m3 = m0*(1+3*0.0275)*(1+2*0.021);
//	double m4 = m0*pow((1+0.015),5);
//	double m5 = m0*pow((1+0.0035/4),4*5);
//	printf("方案1总金额：%f\n",m1);
//	printf("方案2总金额：%f\n",m2);
//	printf("方案3总金额：%f\n",m3);
//	printf("方案4总金额：%f\n",m4);
//	printf("方案5总金额：%f\n",m5);
//	return 0;
//}



//#include <math.h>
//#include <stdio.h>
//
//int main(){
//	double d=300000.0,p=6000.0,r=0.01,m;
//	m = log10(p/(p-d*r))/log10(1+r);
//	printf("%.1f\n",m);
//	printf("%.2f\n",m);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a,b;
//	float x,y;
//	char c1,c2;
//	scanf("a=%db=%d",&a,&b);
//	scanf("%f%e",&x,&y);
//	scanf("%c%c",&c1,&c2);
//	printf("%d,%d,%f,%f,%c,%c\n",a,b,x,y,c1,c2);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c1='C',c2='h',c3='i',c4='n',c5='a';
//	c1 += 4;
//	c2 += 4;
//	c3 += 4;
//	c4 += 4;
//	c5 += 4;
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	putchar('\n');
//	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
//	return 0;
//}




//#include <stdio.h>
//
//int main(){
//	double r=1.5,h=3,pi=3.141526,yl,ys,qs,qv,zv;
//	yl = 2*pi*r;
//	ys = pi*r*r;
//	qs = 4*pi*r*r;
//	qv = 4.0/3.0*pi*r*r*r;
//	zv = pi*r*r*h;
//	printf("圆周长=%.2f\n",yl);
//	printf("圆面积=%.2f\n",ys);
//	printf("圆球表面积=%.2f\n",qs);
//	printf("圆球体积=%.2f\n",qv);
//	printf("圆柱体积=%.2f\n",zv);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c1,c2;
//	printf("请输入两个字符：");
//	c1 = getchar();
//	c2 = getchar();
//	putchar(c1);
//	putchar(c2);
//	putchar('\n');
//	printf("%c%c\n",c1,c2);
//	printf("%d%d\n",c1,c2);
//	return 0;
//}
















