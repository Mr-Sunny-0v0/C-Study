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






















































































































