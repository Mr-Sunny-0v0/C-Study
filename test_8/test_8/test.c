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
//	printf("请输入两个数：");
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
//void swap(int *p1,int *p2){		//改变两个指针变量“所指变量”的值，可以实现
//	int t;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//
//int main(){
//	int a,b;
//	int * pointer_1,* pointer_2;
//	printf("请输入两个数：");
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
//void swap(int *p1,int *p2){		//改变两个指针变量的值，不能实现
//	int *p;
//	p = p1;
//	p1 = p2;
//	p2 = p;
//}
//
//int main(){
//	int a,b;
//	int *pointer_1,*pointer_2;
//	printf("请输入两个数：");
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
//void sort(int *q1,int *q2,int *q3){		//改变指针变量“所指变量”的值，可以实现
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
//	printf("请输入三个数：");
//	scanf("%d%d%d",&a,&b,&c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	sort(p1,p2,p3);
//	printf("排序后：%d,%d,%d\n",*p1,*p2,*p3);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,a[10];
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("数组元素：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,a[10];
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("数组元素：");
//	for(i=0;i<=9;i++){
//		printf("%d ",*(a+i));
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,a[10],*p;
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",a+i);
//	}
//	printf("数组元素：");
//	for(p=a;p<=a+9;p++){
//		printf("%d ",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,*p,a[10];
//	printf("请输入10个整数：");
//	for(p=a;p<=a+9;p++){
//		scanf("%d",p);
//	}
//	//p=a;
//	for(i=0;i<=9;i++,p++){
//		printf("%d ",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void f_sort(int a[],int n){
//	int i,t;
//	for(i=0;i<=(n-1)/2;i++){
//		t = a[i];
//		a[i] = a[n-1-i];
//		a[n-1-i] = t;
//	}
//}
//
//int main(){
//	int i,a[10];
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	f_sort(a,10);
//	printf("排序后数组：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void f_sort(int *a,int n){
//	int i,t;
//	for(i=0;i<=(n-1)/2;i++){
//		t = *(a+i);
//		*(a+i) = *(a+n-1-i);
//		*(a+n-1-i) = t;
//	}
//}
//
//int main(){
//	int i,a[10];
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	f_sort(a,10);
//	printf("排序后数组：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void f_sort(int *x,int n){
//	int i,t;
//	for(i=0;i<=(n-1)/2;i++){
//		t = *(x+i);
//		*(x+i) = *(x+n-1-i);
//		*(x+n-1-i) = t;
//	}
//}
//
//int main(){
//	int i,*p,a[10];
//	printf("请输入10个整数：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	p = a;
//	f_sort(p,10);
//	printf("排序后数组：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int a[],int n){
//	int i,j,t,max;
//	for(i=0;i<=n-2;i++){
//		max = i;
//		for(j=i+1;j<=n-1;j++){
//			if(a[max] < a[j]){
//				max = j;
//			}
//		}
//		if(max != i){
//			t = a[i];
//			a[i] = a[max];
//			a[max] = t;
//		}
//	}
//}
//
//int main(){
//	int i,*p,a[10];
//	printf("请输入10个整数（用空格隔开）：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	p = a;
//	sort(p,10);
//	printf("排序后数组：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
//	printf("a---->%d\t\t*a---->%d\n",a,*a);
//	printf("a[0]---->%d\t*(a+0)---->%d\n",a[0],*(a+0));
//	printf("&a[0]---->%d\t&a[0][0]---->%d\n",&a[0],&a[0][0]);
//	printf("a[1]---->%d\ta+1---->%d\n",a[1],a+1);
//	printf("&a[1][0]---->%d\t*(a+1)+0---->%d\n",&a[1][0],*(a+1)+0);
//	printf("a[2]---->%d\t*(a+2)---->%d\n",a[2],*(a+2));
//	printf("&a[2]---->%d\ta+2---->%d\n",&a[2],a+2);
//	printf("a[1][0]---->%d\t\t*(*(a+1)+0)---->%d\n",a[1][0],*(*(a+1)+0));
//	printf("*a[2]---->%d\t\t*(*(a+2)+0)---->%d\n",*a[2],*(*(a+2)+0));
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,*p,a[3][4];
//	printf("请输入12个整数：");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			scanf("%d",&a[i][j]);
//			//scanf("%d",*(a+i)+j);
//		}
//	}
//	for(p=a[0];p<=a[0]+11;p++){
//		if((p-a[0])%4==0)
//			printf("\n");
//		printf("%4d",*p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,(*p)[4],a[3][4];
//	p=a;
//	printf("请输入12个整数：\n");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			scanf("%d",*(p+i)+j);
//		}
//	}
//	p=a;
//	printf("请输入行，列（用空格隔开）：");
//	scanf("%d%d",&i,&j);
//	printf("a[%d][%d] = %d\n",i-1,j-1,*(*(p+i-1)+j-1));
//	return 0;
//}



//#include <stdio.h>
//
//double aver(double (*p)[4],int n){
//	int i,j;
//	double sum=0.0;
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			sum = sum + *(*(p+i)+j);
//		}	
//	}
//	return sum/n;
//}
//
//void search(double (*p)[4],int n){
//	int i;
//	printf("第%d个学生的成绩：",n);
//	for(i=0;i<=3;i++){
//		printf("%lf ",*(*(p+n-1)+i));
//	}
//	printf("\n");
//}
//
//int main(){
//	int i,j;
//	double score[3][4];
//	for(i=0;i<=2;i++){
//		printf("请输入第%d个学生的成绩：",i+1);
//		for(j=0;j<=3;j++){
//			scanf("%lf",*(score+i)+j);
//		}
//	}
//	printf("总平均分 = %lf\n",aver(score,12));
//	search(score,2);
//	return 0;
//}



//#include <stdio.h>
//
//void search_bjg(double (*p)[4],int i,int j){
//	int k;
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			if(*(*(p+i)+j)<60){
//				printf("第%d个学生不及格，成绩为：",i+1);
//				for(k=0;k<=3;k++){
//					printf("%lf ",*(*(p+i)+k));
//				}
//				printf("\n");
//				break;
//			}
//		}
//	}
//}
//
//int main(){
//	double score[3][4];
//	int i,j;
//	for(i=0;i<=2;i++){
//		printf("请输入第%d个学生的成绩：",i+1);
//		for(j=0;j<=3;j++){
//			scanf("%lf",*(score+i)+j);
//		}
//	}
//	search_bjg(score,3,4);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char s[100];
//	printf("请输入字符串：");
//	gets(s);
//	printf("%s\n",s);
//	printf("%c\n",s[7]);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char s[100];
//	char *p=s;
//	printf("请输入字符串：");
//	gets(p);
//	printf("%s\n",p);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char s1[]="I am a student.",s2[20];
//	int i;
//	for(i=0;*(s1+i)!='\0';i++){
//		*(s2+i) = *(s1+i);
//	}
//	*(s2+i) = '\0';
//	printf("%s\n",s1);
//	puts(s2);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char s1[]="I am a atudent.",s2[20],*p1,*p2;
//	for(p1=s1,p2=s2;*p1!='\0';p1++,p2++){
//		*p2 = *p1;
//	}
//	*p2 = '\0';
//	puts(s1);
//	puts(s2);
//	return 0;
//}





























