#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	int a=100,b=10;
//	int * pointer_1,* pointer_2;
//	pointer_1 = &a;
//	pointer_2 = &b;
//	printf("a = %d , b = %d\n",a,b);
//	printf("* pointer_1 = %d , * pointer_2 = %d\n",* pointer_1,* pointer_2);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a,b;
//	int *p1,*p2,*p;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("�Ӵ�С��%d,%d\n",*p1,*p2);
//	return 0;
//}



//#include <stdio.h>
//
//void ex(int *p1,int *p2){
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main(){
//	int a,b;
//	int *p1,*p2;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		ex(p1,p2);
//	}
//	printf("�Ӵ�С��%d,%d\n",a,b);
//	return 0;
//}



//#include <stdio.h>
//
//void ex(int *p1,int *p2){
//	int *temp;
//	temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main(){
//	int a,b;
//	int *p1,*p2;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		ex(p1,p2);
//	}
//	printf("�Ӵ�С��%d,%d\n",a,b);
//	return 0;
//}



//#include <stdio.h>
//
//void ex(int *p1,int *p2){
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//void sort(int *p1,int *p2,int *p3){
//	if(*p1 < *p2) ex(p1,p2);
//	if(*p1 < *p3) ex(p1,p3);
//	if(*p2 < *p3) ex(p2,p3);
//}
//
//int main(){
//	int a,b,c;
//	int *p1,*p2,*p3;
//	printf("�����������������ÿո��������");
//	scanf("%d%d%d",&a,&b,&c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	sort(p1,p2,p3);
//	printf("�Ӵ�С��%d,%d,%d\n",a,b,c);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[10];
//	int i;
//	printf("������10���������ÿո��������");
//	for(i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("����Ԫ�أ�");
//	for(i=0;i<10;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int *p,a[10];
//	printf("������10������(�ÿո����)��");
//	for(p=a;p < a+10;p++){
//		scanf("%d",p);
//	}
//	printf("����Ԫ�أ�");
//	for(p=a;p<a+10;p++){
//		printf("%d ",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void f(int a[],int n){
//	int i,temp;
//	for(i=0;i<=(n-1)/2;i++){
//		temp = a[i];
//		a[i] = a[n-1-i];
//		a[n-1-i] = temp;
//	}
//}
//
//int main(){
//	int i,a[10] = {3,7,9,11,0,6,7,5,4,2};
//	f(a,10);
//	printf("���������Ԫ�أ�");
//	for(i=0;i<10;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void f(int *p,int n){
//	int i,temp;
//	for(i=0;i<=(n-1)/2;i++){
//		temp = *(p+i);
//		*(p+i) = *(p+n-1-i);
//		*(p+n-1-i) = temp;
//	}
//}
//
//int main(){
//	int *p,a[10];
//	printf("������10���������ÿո��������");
//	for(p=a;p<a+10;p++){
//		scanf("%d",p);
//	}
//	p = a;
//	f(p,10);
//	printf("��������飺");
//	for(p=a;p<a+10;p++){
//		printf("%d ",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int a[],int n){
//	int i,j,k,t;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(a[k] < a[j]){
//				k=j;
//			}
//		}
//		if(k!=i){
//			t = a[i];
//			a[i] = a[k];
//			a[k] = t;
//		}
//	}
//}
//
//int main(){
//	int *p,a[10];
//	printf("������10���������ÿո��������");
//	for(p=a;p<a+10;p++){
//		scanf("%d",p);
//	}
//	p = a;
//	sort(p,10);
//	printf("�Ӵ�С�����");
//	for(p=a;p<a+10;p++){
//		printf("%d ",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[3][4] = {{1,3,5,7},{9,11,13,15},{17,19,21,23}};
//	printf("%d,%d\n",a,*a);
//	printf("%d,%d\n",a[0],*(a+0));
//	printf("%d,%d\n",&a[0],&a[0][0]);
//	printf("%d,%d\n",a[1],a+1);
//	printf("%d,%d\n",&a[1][0],*(a+1)+0);
//	printf("%d,%d\n",a[2],*(a+2));
//	printf("%d,%d\n",&a[2],a+2);
//	printf("%d,%d\n",a[1][0],*(*(a+1)+0));
//	printf("%d,%d\n",*a[2],*(*(a+2)+0));
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int *p,a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
//	for(p=a[0];p<a[0]+12;p++){
//		if((p-a[0])%4==0) printf("\n");
//		printf("%4d",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
//	int (*p)[4] = a;
//	int i,j;
//	printf("����������ź�����ţ��ÿո��������");
//	scanf("%d%d",&i,&j);
//	printf("a[%d][%d] = %d\n",i,j,*(*(p+i)+j));
//	return 0;
//}



//#include <stdio.h>
//
//void average(float *p,int n){
//	float sum = 0.0;
//	int i;
//	for(i=0;i<n;i++){
//		sum = sum + *(p+i);
//	}
//	printf("ƽ���ɼ� = %5.2f\n",sum/n);
//}
//
//void search(float (*p)[4],int n){
//	int i;
//	printf("���Ϊ%d��ѧ���ɼ���",n);
//	for(i=0;i<4;i++){
//		printf("%5.2f ",*(*(p+n)+i));
//	}
//	printf("\n");
//}
//
//int main(){
//	float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
//	average(*score,12);
//	search(score,2);
//	return 0;
//}



//#include <stdio.h>
//
//void search(float (*p)[4],int n){
//	int i,j,count;
//	for(i=0;i<n;i++){
//		count = 0;
//		for(j=0;j<4;j++){
//			if(*(*(p+i)+j) < 60) count=1;
//		}
//		if(count == 1){
//			printf("���Ϊ%d��ѧ���в������Ŀ�����Ƴɼ�Ϊ��",i);
//			for(j=0;j<4;j++){
//				printf("%5.1f",*(*(p+i)+j));
//			}
//			printf("\n");
//		}
//
//	}
//}
//
//int main(){
//	float score[3][4] = {{65,57,70,60},{58,87,90,81},{90,99,100,98}};
//	search(score,3);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char string[] = "I love China!";
//	printf("%s\n",string);
//	printf("%c\n",string[7]);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char *string = "I love China!";
//	printf("%s\n",string);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i;
//	char a[] = "I am a student.";
//	char b[20];
//	for(i=0;*(a+i)!='\0';i++){
//		*(b+i) = *(a+i);
//	}
//	*(b+i) = '\0';
//	printf("�ַ���a = %s\n",a);
//	printf("�ַ���b = %s\n",b);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char a[] = "I am a boy.";
//	char b[20];
//	char *p1,*p2;
//	for(p1=a,p2=b;*p1 != '\0';p1++,p2++){
//		*p2 = *p1;
//	}
//	*p2 = '\0';
//	printf("�ַ���a = %s\n",a);
//	printf("�ַ���b = %s\n",b);
//	return 0;
//}



//#include <stdio.h>
//
//void copy(char *from,char *to){
//	for(;*from!='\0';from++,to++){
//		*to = *from;
//	}
//	*to = '\0';
//}
//
//int main(){
//	char a[] = "I am a teacher.";
//	char b[] = "You are a student.";
//	copy(a,b);
//	printf("�ַ���a = %s\n",a);
//	printf("�ַ���b = %s\n",b);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	//char a[] = "I love China!";
//	//a = a+7;
//	char *p = "I love China!";
//	p = p+7;
//	printf("%s\n",p);
//	return 0;
//}



//#include <stdio.h>
//
//int max(int a,int b){
//	if(a>b) 
//		return a;
//	else 
//		return b;
//}
//
//int main(){
//	int a,b;
//	int (*p)(int,int) = max;
//	printf("�����������������ÿո��������");
//	scanf("%d%d",&a,&b);
//	printf("�ϴ�ֵΪ%d\n",(*p)(a,b));
//	return 0;
//}



//#include <stdio.h>
//
//int max(int a,int b){
//	if(a>b)
//		return a;
//	else
//		return b;
//}
//
//int min(int a,int b){
//	if(a<b)
//		return a;
//	else
//		return b;
//}
//
//int main(){
//	int a,b,c;
//	int (*p)(int,int);
//	printf("��������������a��b���ÿո��������");
//	scanf("%d%d",&a,&b);
//	printf("������1��max����2��min��ѡ������");
//	scanf("%d",&c);
//	if(c==1){
//		p = max;
//		printf("max = %d\n",(*p)(a,b));
//	}
//	else{
//		p=min;
//		printf("min = %d\n",(*p)(a,b));
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int max(int a,int b){
//	printf("max = ");
//	if(a>b)
//		return a;
//	else
//		return b;
//}
//
//int min(int a,int b){
//	printf("min = ");
//	if(a<b)
//		return a;
//	else
//		return b;
//}
//
//int add(int a,int b){
//	printf("add = ");
//	return a+b;
//}
//
//void fun(int a,int b,int (*p)(int,int)){
//	printf("%d\n",(*p)(a,b));
//}
//
//int main(){
//	int a=34,b=-21,n;
//	printf("��ѡ��ģʽ��1,2,3����");
//	scanf("%d",&n);
//	if(n == 1)
//		fun(a,b,max);
//	else if(n == 2)
//		fun(a,b,min);
//	else if(n == 3)
//		fun(a,b,add);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//float f1(float a,float b){
//	return 0.5*(b*b-a*a)+b-a;
//}
//
//float f2(float a,float b){
//	return b*b+3*b-a*a-3*a;
//}
//
//float f3(float a,float b){
//	return exp(b)+b-exp(a)-a;
//}
//
//float f4(float a,float b){
//	return (1.0/3.0)*b*b*b+b*b+b-(1.0/3.0)*a*a*a-a*a-a;
//}
//
//float f5(float a,float b){
//	return 0.25*b*b*b*b-0.25*a*a*a*a;
//}
//
//float integral(float a,float b,float (*p)(float,float)){
//	return (*p)(a,b);
//}
//
//int main(){
//	float a,b;
//	printf("�����뺯������a������b(�ÿո����)��");
//	scanf("%f%f",&a,&b);
//	printf("����(1+x)������Ϊ%5.2f����Ϊ%5.2f�Ķ����� = %5.2f\n",a,b,integral(a,b,f1));
//	printf("����(2x+3)������Ϊ%5.2f����Ϊ%5.2f�Ķ����� = %5.2f\n",a,b,integral(a,b,f2));
//	printf("����(e^x+1)������Ϊ%5.2f����Ϊ%5.2f�Ķ����� = %5.2f\n",a,b,integral(a,b,f3));
//	printf("����(1+x)^2������Ϊ%5.2f����Ϊ%5.2f�Ķ����� = %5.2f\n",a,b,integral(a,b,f4));
//	printf("����(x^3)������Ϊ%5.2f����Ϊ%5.2f�Ķ����� = %5.2f\n",a,b,integral(a,b,f5));
//	return 0;
//}



//#include <stdio.h>
//
//float * search(float(*p)[4],int n){
//	return *(p+n);
//}
//
//int main(){
//	float *p,score[3][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
//	int i,n;
//	printf("������ѧ����ţ�");
//	scanf("%d",&n);
//	p = search(score,n);
//	printf("���Ϊ%d��ѧ���ɼ���",n);
//	for(i=0;i<4;i++){
//		printf("%6.2f",*(p+i));
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//float * search(float(*p)[4],int n){
//	return *(p+n);
//}
//
//int main(){
//	float *p,score[3][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
//	int i,j,flag;
//	for(i=0;i<3;i++){
//		p = search(score,i);
//		flag = 0;
//		for(j=0;j<4;j++){
//			if(*(p+j) < 60)
//				flag = 1;
//		}
//		if(flag == 1){
//			printf("���Ϊ%d��ѧ�����ڲ����񣬸��Ƴɼ�Ϊ��",i);
//			for(j=0;j<4;j++){
//				printf("%7.2f",*(p+j));
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

















































