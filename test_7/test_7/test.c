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

















































