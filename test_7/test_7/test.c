#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//void print_star(){
//	printf("******************\n");
//}
//
//void print_word(){
//	printf("  How do you do!\n");
//}
//
//int main(){
//	print_star();
//	print_word();
//	print_star();
//	return 0;
//}



//#include <stdio.h>
//
//int Max(int x,int y){
//	if(x>y){
//		return x;
//	}
//	else{
//		return y;
//	}
//}
//
//int main(){
//	int num1,num2,max;
//	printf("���������������ո��������");
//	scanf("%d%d",&num1,&num2);
//	max = Max(num1,num2);
//	printf("���ֵ = %d\n",max);
//	return 0;
//}



//#include <stdio.h>
//
//int Max(float x,float y){
//	float z;
//	if(x>y){
//		z=x;
//	}
//	else{
//		z=y;
//	}
//	return z;
//}
//
//int main(){
//	double num1,num2;
//	int max;
//	printf("���������������ÿո��������");
//	scanf("%lf%lf",&num1,&num2);
//	max = Max(num1,num2);
//	printf("max = %d\n",max);
//	return 0;
//}



//#include <stdio.h>
//
//double Sum(double x,double y){
//	return x+y;
//}
//
//int main(){
//	double num1,num2,sum;
//	printf("����������ʵ�����ÿո��������");
//	scanf("%lf%lf",&num1,&num2);
//	sum = Sum(num1,num2);
//	printf("sum = %lf\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int Max2(int a,int b){
//	if(a>b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//int Max4(int a,int b,int c,int d){
//	int max;
//	max = Max2(a,b);
//	max = Max2(max,c);
//	max = Max2(max,d);
//	return max;
//}
//
//int main(){
//	int a,b,c,d,max;
//	printf("�������ĸ������ÿո��������");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	max = Max4(a,b,c,d);
//	printf("max = %d\n",max);
//	return 0;
//}



//#include <stdio.h>
//
//int Age(int n){
//	if(n==1){
//		return 10;
//	}
//	else{
//		return Age(n-1)+2;
//	}
//}
//
//int main(){
//	printf("��5��ѧ�������� = %d\n",Age(5));
//	return 0;
//}



//#include <stdio.h>
//
//int Jc(int n){
//	if(n==0||n==1){
//		return 1;
//	}
//	else{
//		return Jc(n-1)*n;
//	}
//}
//
//int main(){
//	int n,jc;
//	printf("������һ��������");
//	scanf("%d",&n);
//	jc = Jc(n);
//	printf("%d! = %d\n",n,jc);
//	return 0;
//}



//#include <stdio.h>
//
//void move(char x,char y){
//	printf("%c�ƶ�һ�����ӵ�%c\n",x,y);
//}
//
//void hanoi(int n,char x,char y,char z){		//��n�����Ӵ�x����y�ƶ���z
//	if(n==1){
//		move(x,z);
//	}
//	else{
//		hanoi(n-1,x,z,y);
//		move(x,z);
//		hanoi(n-1,y,x,z);
//	}
//}
//
//int main(){
//	int n;
//	printf("�������ƶ���������");
//	scanf("%d",&n);
//	printf("�ƶ��������£�\n");
//	hanoi(n,'A','B','C');
//	return 0;
//}



//#include <stdio.h>
//
//int Max(int a,int b){
//	if(a>b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//int main(){
//	int i,max,maxi,a[10];
//	printf("������10���������ÿո��������");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	max = a[0];
//	maxi = 0;
//	for(i=1;i<=9;i++){
//		if(Max(max,a[i]) > max){
//			max = Max(max,a[i]);
//			maxi = i;
//		}
//	}
//	printf("max = %d\n���ǵ�%d����\n",max,maxi+1);
//	return 0;
//}



//#include <stdio.h>
//
//double Aver(double num[]){
//	int i;
//	double sum = 0.0;
//	for(i=0;i<=9;i++){
//		sum = sum + num[i];
//	}
//	return sum/10; 
//}
//
//int main(){
//	double c[10];
//	int i;
//	printf("������10������\n");
//	for(i=0;i<=9;i++){
//		scanf("%lf",&c[i]);
//	}
//	printf("ƽ��ֵ = %lf\n",Aver(c));
//	return 0;
//}



//#include <stdio.h>
//
//double Aver(double s[],int n){
//	int i;
//	double sum=0.0;
//	for(i=0;i<n;i++){
//		sum = sum +s[i];
//	}
//	return sum/n;
//}
//
//int main(){
//	double s1[5] = {98.5,97,91.5,60,55};
//	double s2[10] = {67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
//	printf("s1��ƽ���� = %lf\n",Aver(s1,5));
//	printf("s2��ƽ���� = %lf\n",Aver(s2,10));
//	return 0;
//}



//#include <stdio.h>
//
//void Sort(int a[],int n){
//	int i,j,t,mini;
//	for(i=0;i<=n-2;i++){
//		mini = i;
//		for(j=i+1;j<=n-1;j++){
//			if(a[mini] > a[j]){
//				mini = j;
//			}
//		}
//		if(mini != i){
//			t = a[i];
//			a[i] = a[mini];
//			a[mini] = t;
//		}
//	}
//}
//
//int main(){
//	int i,a[10];
//	printf("ԭ���飺");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	Sort(a,10);
//	printf("�����飺");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int Max(int a[3][4]){
//	int i,j,max=a[0][0];
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			if(max < a[i][j]){
//				max = a[i][j];
//			}
//		}
//	}
//	return max;
//}
//
//int main(){
//	int a[3][4] = {{1,3,5,7},{2,4,6,8},{15,17,34,12}};
//	printf("max = %d\n",Max(a));
//	return 0;
//}



//#include <stdio.h>
//
//double Max,Min;
//
//double Aver(double num[]){
//	double sum = 0.0;
//	int i;
//	Max = num[0];
//	Min = num[0];
//	for(i=0;i<=9;i++){
//		if(Min > num[i])
//			Min = num[i];
//		else if(Max <num[i])
//			Max = num[i];
//		sum = sum + num[i];
//	}
//	return sum/10;
//}
//
//int main(){
//	int i;
//	double score[10];
//	printf("����������Ԫ�أ�\n");
//	for(i=0;i<=9;i++){
//		scanf("%lf",&score[i]);
//	}
//	printf("Max = %lf\nMin = %lf\nAver = %lf\n",Max,Min,Aver(score));
//	return 0;
//}



//#include <stdio.h>
//
//int jc(int n){
//	static int f = 1;
//	f = f*n;
//	return f;
//}
//
//int main(){
//	int i,n;
//	printf("������һ��������");
//	scanf("%d",&n);
//	for(i=1;i<=5;i++){
//		printf("%d! = %d\n",i,jc(i));
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int A;
//
//int main(){
//	int b=3,m;
//	int cf(int num);
//	printf("������a��m���ÿո��������");
//	scanf("%d%d",&A,&m);
//	printf("%d*%d = %d\n",A,b,A*b);
//	printf("%d**%d = %d\n",A,m,cf(m));
//	return 0;
//}



//#include <stdio.h>
//
//int zdy(int x,int y){
//	int t;
//	if(x < y){
//		t = x;
//		x = y;
//		y = t;
//	}
//	while(x%y!=0){
//		t = x%y;
//		x = y;
//		y = t;
//	}
//	return y;
//}
//
//int zxb(int x,int y){
//	return x*y/zdy(x,y);
//}
//
//int main(){
//	int num1,num2;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&num1,&num2);
//	printf("���Լ�� = %d\t��С������ = %d\n",zdy(num1,num2),zxb(num1,num2));
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//void sg2(double a,double b,double c){
//	double x1,x2;
//	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
//	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
//	printf("x1 = %lf\nx2 = %lf\n",x1,x2);
//}
//
//void sg1(double a,double b,double c){
//	double x;
//	x = (-b)/(2*a);
//	printf("x1 = x2 = %lf\n",x);
//}
//
//void xg2(double a,double b,double c){
//	double ai,bi;
//	ai = (-b)/(2*a);
//	bi = sqrt(4*a*c-b*b)/(2*a);
//	printf("x1 = %lf + %lfi\nx2 = %lf - %lfi\n",ai,bi,ai,bi);
//}
//
//int main(){
//	double a,b,c,pb;
//	printf("������a,b,c��");
//	scanf("%lf,%lf,%lf",&a,&b,&c);
//	pb = b*b-4*a*c;
//	if(pb>1e-10)
//		sg2(a,b,c);
//	else if(fabs(pb)<1e-10)
//		sg1(a,b,c);
//	else
//		xg2(a,b,c);
//	return 0;
//}



//#include <stdio.h>
//
//int pss(int x){
//	int i;
//	for(i=2;i<=x/2;i++){
//		if(x%i==0){
//			break;
//		}
//	}
//	if(i>x/2)
//		return 1;
//	else
//		return 0;
//}
//
//int main(){
//	int num;
//	printf("������һ��������");
//	scanf("%d",&num);
//	if(pss(num)){
//		printf("%d������!\n",num);
//	}
//	else{
//		printf("%d��������!\n",num);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void zz(int a[3][3]){
//	int i,j,t;
//	for(i=0;i<=2;i++){
//		for(j=i+1;j<=2;j++){
//			t = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = t;
//		}
//	}
//}
//
//int main(){
//	int i,j,a[3][3];
//	printf("������3*3���������Ԫ�أ�\n");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	zz(a);
//	printf("ת�ú����飺\n");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void fx(char c[]){
//	int i,j;
//	char t;
//	for(i=0;c[i]!='\0';i++);
//	for(j=0;j<i/2;j++){
//		t = c[j];
//		c[j] = c[i-j-1];
//		c[i-j-1] = t;
//	}
//}
//
//int main(){
//	char c[100];
//	printf("�������ַ�����");
//	gets(c);
//	fx(c);
//	printf("������ַ�����");
//	puts(c);
//	return 0;
//}



//#include <stdio.h>
//
//void lj(char s1[],char s2[],char s[]){		//s1��s2���Ӻ����s
//	int i,j;
//	for(i=0;s1[i]!='\0';i++){
//		s[i] = s1[i];
//	}
//	for(j=0;s2[j]!='\0';j++){
//		s[i++] = s2[j];
//	}
//	s[i] = '\0';
//}
//
//int main(){
//	char s1[50],s2[50],s[100];
//	printf("�������ַ���1��");
//	gets(s1);
//	printf("�������ַ���2��");
//	gets(s2);
//	lj(s1,s2,s);
//	printf("���Ӻ��ַ�����");
//	puts(s);
//	return 0;
//}



//#include <stdio.h>
//
//void fy(char s1[],char s2[]){
//	int i,j;
//	for(i=0,j=0;s1[i]!='\0';i++){
//		if(s1[i]=='A'||s1[i]=='a'||s1[i]=='E'||s1[i]=='e'||s1[i]=='I'||s1[i]=='i'||s1[i]=='O'||s1[i]=='o'||s1[i]=='U'||s1[i]=='u'){
//			s2[j] = s1[i];
//			j++;
//		}
//	}
//	s2[j] = '\0';
//}
//
//int main(){
//	char s1[100],s2[100];
//	printf("�������ַ�����");
//	gets(s1);
//	fy(s1,s2);
//	printf("Ԫ����ĸ��");
//	puts(s2);
//	return 0;
//}



//#include <stdio.h>
//
//void ck(char s[]){
//	int i,j;
//	for(i=0;s[i]!='\0';i++);
//	for(j=i;j>0;j--){
//		s[2*j] = s[j];
//		s[2*j-1] = ' ';
//	}
//}
//
//int main(){
//	char s[10];
//	printf("������4λ������");
//	gets(s);
//	ck(s);
//	printf("����ո��");
//	puts(s);
//	return 0;
//}



//#include <stdio.h>
//
//int z=0,sz=0,k=0,q=0;
//
//void tj(char s[]){
//	int i;
//	for(i=0;s[i]!='\0';i++){
//		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
//			z++;
//		else if(s[i]>='0'&&s[i]<='9')
//			sz++;
//		else if(s[i]==' ')
//			k++;
//		else
//			q++;
//	}
//}
//
//int main(){
//	char s[100];
//	printf("�������ַ�����");
//	gets(s);
//	tj(s);
//	printf("��ĸ��%d��\n���֣�%d��\n�ո�%d��\n������%d��\n",z,sz,k,q);
//	return 0;
//}



//#include <stdio.h>
//
//void max_word(char s[]){
//	int i=0,tlen=0,k=0,len=0;
//	for(i=0;s[i]!='\0';i++){
//		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
//			tlen++;
//		}
//		else{
//			if(len < tlen){
//				len = tlen;
//				k = i-tlen;
//			}
//			tlen = 0;
//		}
//
//	}
//	printf("����ʣ�");
//	for(i=k;(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z');i++){
//		printf("%c",s[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//	char s[100];
//	printf("�������ַ���");
//	gets(s);
//	max_word(s);
//	return 0;
//}



//#include <stdio.h>
//
//void sort(char s[]){
//	int i,j;
//	char t;
//	for(i=0;i<=8;i++){
//		for(j=0;j<=8-i;j++){
//			if(s[j] > s[j+1]){
//				t = s[j];
//				s[j] = s[j+1];
//				s[j+1] = t;
//			}
//		}
//	}
//}
//
//int main(){
//	char s[10];
//	int i;
//	printf("������10���ַ���");
//	for(i=0;i<=9;i++){
//		scanf("%c",&s[i]);
//	}
//	sort(s);
//	printf("������ַ���");
//	for(i=0;i<=9;i++){
//		printf("%c",s[i]);
//	}
//	printf("\n");
//	return 0;
//}























































































































