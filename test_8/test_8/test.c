#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	int a=100,b=10;
//	int *pointer_1,*pointer_2;
//	pointer_1 = &a;
//	pointer_2 = &b;
//	* pointer_1 = 5;
//	printf("a = %d,b = %d\n",a,b);
//	printf("*pointer_1 = %d,*pointer_2 = %d\n",*pointer_1,*pointer_2);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int *p1,*p2,*p,a,b;
//	printf("��������������");
//	scanf("%d,%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(a<b){
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("a = %d,b = %d\n",a,b);
//	printf("max = %d,min = %d\n",*p1,*p2);
//	return 0;
//}



//#include <stdio.h>
//
//void swap(int *p1,int *p2){		//�ı�����ָ���������ָ��������ֵ������ʵ��
//	int t;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//
//int main(){
//	int a,b;
//	int * pointer_1,* pointer_2;
//	printf("��������������");
//	scanf("%d,%d",&a,&b);
//	pointer_1 = &a;
//	pointer_2 = &b;
//	if(a<b)
//		swap(pointer_1,pointer_2);
//	printf("a = %d,b = %d\n",a,b);
//	printf("max = %d,min = %d\n",*pointer_1,*pointer_2);
//	return 0;
//}



//#include <stdio.h>
//
//void swap(int *p1,int *p2){		//�ı�����ָ�������ֵ������ʵ��
//	int *p;
//	p = p1;
//	p1 = p2;
//	p2 = p;
//}
//
//int main(){
//	int a,b;
//	int *pointer_1,*pointer_2;
//	printf("��������������");
//	scanf("%d,%d",&a,&b);
//	pointer_1 = &a;
//	pointer_2 = &b;
//	if(a<b)
//		swap(pointer_1,pointer_2);
//	printf("a = %d,b = %d\n",a,b);
//	printf("max = %d,min = %d\n",*pointer_1,*pointer_2);
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int *q1,int *q2,int *q3){		//�ı�ָ���������ָ��������ֵ������ʵ��
//	int t;
//	if(*q1<*q2){
//		t = *q1;
//		*q1 = *q2;
//		*q2 = t;
//	}
//	if(*q2<*q3){
//		t = *q2;
//		*q2 = *q3;
//		*q3 = t;
//	}
//	if(*q1<*q2){
//		t = *q1;
//		*q1 = *q2;
//		*q2 = t;
//	}
//}
//
//int main(){
//	int a,b,c,*p1,*p2,*p3;
//	printf("��������������");
//	scanf("%d%d%d",&a,&b,&c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	sort(p1,p2,p3);
//	printf("�����%d,%d,%d\n",*p1,*p2,*p3);
//	return 0;
//}

































































































