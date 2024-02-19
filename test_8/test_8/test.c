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
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("从大到小：%d,%d\n",*p1,*p2);
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
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		ex(p1,p2);
//	}
//	printf("从大到小：%d,%d\n",a,b);
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
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&a,&b);
//	p1 = &a;
//	p2 = &b;
//	if(*p1 < *p2){
//		ex(p1,p2);
//	}
//	printf("从大到小：%d,%d\n",a,b);
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
//	printf("请输入三个整数（用空格隔开）：");
//	scanf("%d%d%d",&a,&b,&c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	sort(p1,p2,p3);
//	printf("从大到小：%d,%d,%d\n",a,b,c);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[10];
//	int i;
//	printf("请输入10个整数（用空格隔开）：");
//	for(i=0;i<10;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("数组元素：");
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
//	printf("请输入10个整数(用空格隔开)：");
//	for(p=a;p < a+10;p++){
//		scanf("%d",p);
//	}
//	printf("数组元素：");
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
//	printf("反序后数组元素：");
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
//	printf("请输入10个整数（用空格隔开）：");
//	for(p=a;p<a+10;p++){
//		scanf("%d",p);
//	}
//	p = a;
//	f(p,10);
//	printf("逆序后数组：");
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
//	printf("请输入10个整数（用空格隔开）：");
//	for(p=a;p<a+10;p++){
//		scanf("%d",p);
//	}
//	p = a;
//	sort(p,10);
//	printf("从大到小排序后：");
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
//	printf("请输入行序号和列序号（用空格隔开）：");
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
//	printf("平均成绩 = %5.2f\n",sum/n);
//}
//
//void search(float (*p)[4],int n){
//	int i;
//	printf("序号为%d的学生成绩：",n);
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
//			printf("序号为%d的学生有不及格科目，各科成绩为：",i);
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
//	printf("字符串a = %s\n",a);
//	printf("字符串b = %s\n",b);
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
//	printf("字符串a = %s\n",a);
//	printf("字符串b = %s\n",b);
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
//	printf("字符串a = %s\n",a);
//	printf("字符串b = %s\n",b);
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
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&a,&b);
//	printf("较大值为%d\n",(*p)(a,b));
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
//	printf("请输入两个整数a和b（用空格隔开）：");
//	scanf("%d%d",&a,&b);
//	printf("请输入1（max）或2（min）选择函数：");
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
//	printf("请选择模式（1,2,3）：");
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
//	printf("请输入函数下限a和上限b(用空格隔开)：");
//	scanf("%f%f",&a,&b);
//	printf("函数(1+x)在上限为%5.2f下限为%5.2f的定积分 = %5.2f\n",a,b,integral(a,b,f1));
//	printf("函数(2x+3)在上限为%5.2f下限为%5.2f的定积分 = %5.2f\n",a,b,integral(a,b,f2));
//	printf("函数(e^x+1)在上限为%5.2f下限为%5.2f的定积分 = %5.2f\n",a,b,integral(a,b,f3));
//	printf("函数(1+x)^2在上限为%5.2f下限为%5.2f的定积分 = %5.2f\n",a,b,integral(a,b,f4));
//	printf("函数(x^3)在上限为%5.2f下限为%5.2f的定积分 = %5.2f\n",a,b,integral(a,b,f5));
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
//	printf("请输入学生序号：");
//	scanf("%d",&n);
//	p = search(score,n);
//	printf("序号为%d的学生成绩：",n);
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
//			printf("序号为%d的学生存在不及格，各科成绩为：",i);
//			for(j=0;j<4;j++){
//				printf("%7.2f",*(p+j));
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//void sort(char *name[],int n){
//	int i,j,k;
//	char *temp;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(strcmp(name[k],name[j]) > 0)
//				k=j;
//		}
//		if(k!=i){
//			temp = name[k];
//			name[k] = name[i];
//			name[i] = temp;
//		}
//	}
//}
//
//void print(char *name[],int n){
//	int i;
//	for(i=0;i<n;i++){
//		printf("%s\n",name[i]);
//	}
//}
//
//int main(){
//	char *name[5] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
//	sort(name,5);
//	print(name,5);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char *name[5] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
//	char **p;
//	int i;
//	for(i=0;i<5;i++){
//		p = name + i;
//		printf("%s\n",*p);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int *name[],int n){
//	int **p = name;
//	int i,j,k,temp;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(**(p+k) > **(p+j))
//				k=j;
//		}
//		if(k!=i){
//			temp = **(p+k);
//			**(p+k) = **(p+i);
//			**(p+i) = temp;
//		}
//	}
//}
//
//int main(){
//	int num[5] = {3,1,5,7,9};
//	int *name[5] = {&num[0],&num[1],&num[2],&num[3],&num[4]};
//	int **p,i;
//	for(i=0;i<5;i++){
//		p = name+i;
//		printf("%d ",**p);
//	}
//	printf("\n");
//	sort(name,5);
//	for(i=0;i<5;i++){
//		p = name+i;
//		printf("%d ",**p);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdlib.h>
//#include <stdio.h>
//
//void check(int *p,int n){
//	int i;
//	for(i=0;i<n;i++){
//		if(*(p+i) < 60)
//			printf("不及格成绩：%d\n",*(p+i));
//	}
//}
//
//int main(){
//	int i;
//	int *p = (int *)malloc(5*sizeof(int));
//	printf("请输入5名学生成绩（用空格隔开）：");
//	for(i=0;i<5;i++){
//		scanf("%d",p+i);
//	}
//	check(p,5);
//	free(p);
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int *p,int n){
//	int i,j,k,temp;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(*(p+k) > *(p+j))
//				k = j;
//		}
//		if(k!=i){
//			temp = *(p+k);
//			*(p+k) = *(p+i);
//			*(p+i) = temp;
//		}
//	}
//}
//
//int main(){
//	int i,a[3];
//	printf("请输入三个整数（用空格隔开）：");
//	for(i=0;i<3;i++){
//		scanf("%d",&a[i]);
//	}
//	sort(a,3);
//	printf("由小到大排序后：");
//	for(i=0;i<3;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//void sort(char *p[3],int n){
//	int i,j,k;
//	char *temp;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(strcmp(p[k],p[j]) > 0)
//				k = j;
//		}
//		if(k != i){
//			temp = p[k];
//			p[k] = p[i];
//			p[i] = temp;
//		}
//	}
//}
//
//int main(){
//	int i;
//	char str1[50],str2[50],str3[50];
//	char *p[3] = {str1,str2,str3};
//	for(i=0;i<3;i++){
//		printf("请输入第%d个字符串：",i+1);
//		gets(p[i]);
//	}
//	sort(p,3);
//	printf("由小到大排序后：\n");
//	for(i=0;i<3;i++){
//		puts(p[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void ru(int *p,int n){
//	int i;
//	printf("请输入%d个整数（用空格隔开）：",n);
//	for(i=0;i<n;i++){
//		scanf("%d",p+i);
//	}
//}
//
//void ex(int *p,int n){
//	int i,min=0,max=0,temp;
//	for(i=1;i<n;i++){
//		if(*(p+min) > *(p+i))
//			min = i;
//		if(*(p+max) < *(p+i))
//			max = i;
//	}
//	if(min != 0){
//		temp = *(p+min);
//		*(p+min) = *p;
//		*p = temp;
//	}
//	if(max != n-1){
//		if(max == 0)
//			max = min;			//最大值是第一个数，第一次交换把他换跑了
//		temp = *(p+max);
//		*(p+max) = *(p+n-1);
//		*(p+n-1) = temp;
//	}
//}
//
//void chu(int *p,int n){
//	int i;
//	printf("处理后：");
//	for(i=0;i<n;i++){
//		printf("%d ",*(p+i));
//	}
//	printf("\n");
//}
//
//int main(){
//	int a[10];
//	ru(a,10);
//	ex(a,10);
//	chu(a,10);
//	return 0;
//}



//#include <stdio.h>
//
//void ex(int *p,int n,int m){
//	int i;
//	for(i=n-1;i>=0;i--){
//		*(p+i+m) = *(p+i);
//	}
//	for(i=n;i<n+m;i++){
//		*(p+i-n) = *(p+i);
//	}
//}
//
//int main(){
//	int i,n,m,num[50];
//	printf("请输入整数个数 n ：");
//	scanf("%d",&n);
//	printf("请输入%d个整数（用空格隔开）：",n);
//	for(i=0;i<n;i++){
//		scanf("%d",&num[i]);
//	}
//	printf("请输入后移个数 m ：");
//	scanf("%d",&m);
//	ex(num,n,m);
//	printf("移动后：");
//	for(i=0;i<n;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,k,m,n,*p,num[50];
//	p=num;
//	printf("请输入有几个人：");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		*(p+i) = i+1;
//	}
//	i=0;
//	k=0;
//	m=0;
//	while(m<n-1){
//		if(*(p+i) != 0)
//			k++;
//		if(k == 3){
//			*(p+i) = 0;
//			k = 0;
//			m++;
//		}
//		i++;
//		if(i == n)
//			i = 0;
//	}
//	i=0;
//	while(*(p+i)==0){
//		i++;
//	}
//	printf("最后留下的是原来的第%d号\n",i+1);
//	return 0;
//}



//#include <stdio.h>
//
//int count_long(char *p){
//	int count = 0;
//	while(*p != '\0'){
//		p++;
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	char str[50];
//	printf("请输入字符串：");
//	gets(str);
//	printf("字符串长度 = %d\n",count_long(str));
//	return 0;
//}



//#include <stdio.h>
//
//void copy_m(char *from,int m,char *to){
//	char *p = from + m - 1;
//	while(*p != '\0'){
//		*to++ = *p++;
//	}
//	*to = '\0';
//}
//
//int main(){
//	char str[50],strcp[50];
//	int m;
//	printf("请输入字符串：");
//	gets(str);
//	printf("请输入从第几个字符开始复制：");
//	scanf("%d",&m);
//	copy_m(str,m,strcp);
//	printf("新字符串：");
//	puts(strcp);
//	return 0;
//}



//#include <stdio.h>
//
//void count(char *p){
//	int bword = 0,sword = 0,k = 0,num = 0,qt = 0;
//	while(*p != '\0'){
//		if(*p>='A' && *p<='Z')
//			bword++;
//		else if(*p>='a' && *p<='z')
//			sword++;
//		else if(*p==' ')
//			k++;
//		else if(*p>='0' && *p<='9')
//			num++;
//		else
//			qt++;
//		p++;
//	}
//	printf("大写字母：%d\n小写字母：%d\n空格：%d\n数字：%d\n其他：%d\n",bword,sword,k,num,qt);
//}
//
//int main(){
//	char str[100];
//	printf("请输入字符串：");
//	gets(str);
//	count(str);
//	return 0;
//}



//#include <stdio.h>
//
//void zz(int (*p)[3]){
//	int i,j,temp;
//	for(i=0;i<3;i++){
//		for(j=0;j<i;j++){
//			temp = p[i][j];
//			p[i][j] = p[j][i];
//			p[j][i] = temp;
//		}
//	}
//}
//
//int main(){
//	int i,j,num[3][3];
//	int (*p)[3] = num;
//	printf("请输入3*3矩阵元素：\n");
//	for(i=0;i<9;i++){
//		scanf("%d",*p+i);
//	}
//	zz(num);
//	printf("转置后矩阵：\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int (*p)[5]){
//	int i,k,temp;
//
//	//最大值
//	k=0;
//	for(i=1;i<25;i++){
//		if(*(*p+k) < *(*p+i))
//			k=i;
//	}
//	if(k!=12){
//		temp = *(*p+k);
//		*(*p+k) = *(*p+12);
//		*(*p+12) = temp;
//	}
//
//	//第1个最小值
//	k=0;
//	for(i=1;i<25;i++){
//		if(*(*p+k) > *(*p+i))
//			k=i;
//	}
//	if(k!=0){
//		temp = *(*p+k);
//		*(*p+k) = *(*p+0);
//		*(*p+0) = temp;
//	}
//
//	//第2个最小值
//	k=1;
//	for(i=2;i<25;i++){
//		if(*(*p+k) > *(*p+i))
//			k=i;
//	}
//	if(k!=4){
//		temp = *(*p+k);
//		*(*p+k) = *(*p+4);
//		*(*p+4) = temp;
//	}
//
//	//第3个最小值
//	k=1;
//	for(i=2;i<25;i++){
//		if(i==4)
//			continue;
//		if(*(*p+k) > *(*p+i))
//			k=i;
//	}
//	if(k!=20){
//		temp = *(*p+k);
//		*(*p+k) = *(*p+20);
//		*(*p+20) = temp;
//	}
//
//	//第4个最小值
//	k=1;
//	for(i=2;i<25;i++){
//		if(i==4 || i==20)
//			continue;
//		if(*(*p+k) > *(*p+i))
//			k=i;
//	}
//	if(k!=24){
//		temp = *(*p+k);
//		*(*p+k) = *(*p+24);
//		*(*p+24) = temp;
//	}
//}
//
//int main(){
//	int i,j,num[5][5];
//	int (*p)[5] = num;
//	printf("请输入5*5矩阵元素：\n");
//	for(i=0;i<25;i++){
//		scanf("%d",*p+i);
//	}
//	sort(num);
//	printf("排序后：\n");
//	for(i=0;i<5;i++){
//		for(j=0;j<5;j++){
//			printf("%d ",num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



////11+12
//
//#include <stdio.h>
//#include <string.h>
//
//void sort(char *p[10],int n){
//	int i,j,k;
//	char *temp;
//	for(i=0;i<n-1;i++){
//		k=i;
//		for(j=i+1;j<n;j++){
//			if(strcmp(p[k],p[j]) > 0){
//				k = j;
//			}
//		}
//		if(k!=i){
//			temp = p[k];
//			p[k] = p[i];
//			p[i]  =temp;
//		}
//	}
//}
//
//int main(){
//	char str1[50],str2[50],str3[50],str4[50],str5[50],str6[50],str7[50],str8[50],str9[50],str10[50];
//	char *p[10] = {str1,str2,str3,str4,str5,str6,str7,str8,str9,str10};
//	int i;
//	for(i=0;i<10;i++){
//		printf("请输入第%d个字符串：",i+1);
//		gets(p[i]);
//	}
//	sort(p,10);
//	printf("排序后字符串：\n");
//	for(i=0;i<10;i++){
//		puts(p[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//float w_sin(float a){
//	return sin(a);
//}
//
//float w_cos(float a){
//	return cos(a);
//}
//
//float w_e(float a){
//	return exp(a);
//}
//
//float integral(float a,float b,float (*p)(float)){
//	float d = (b-a)/20;
//	float result = 0;
//	float x = a;
//	int i;
//	for(i=1;i<=20;i++){
//		x = x+d;						//用区间右端点的函数值
//		result = result + d*(*p)(x);
//	}
//	return result;
//}
//
//int main(){
//	float a,b;
//	printf("请输入函数sin(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数sin(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_sin));
//	
//	printf("请输入函数cos(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数cos(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_cos));
//
//	printf("请输入函数e^(x)的下限a和上限b：");
//	scanf("%f%f",&a,&b);
//	printf("函数e^(x)在%.2f~~~%.2f上的定积分 = %f\n",a,b,integral(a,b,w_e));
//	return 0;
//}



//#include <stdio.h>
//
//void sort(int *p,int n){
//	int i,temp;
//	for(i=0;i<n/2;i++){
//		temp = *(p+i);
//		*(p+i) = *(p+n-1-i);
//		*(p+n-1-i) = temp;
//	}
//}
//
//int main(){
//	int i,n,num[100];
//	printf("请输入数字个数：");
//	scanf("%d",&n);
//	printf("请输入这%d个数：",n);
//	for(i=0;i<n;i++){
//		scanf("%d",&num[i]);
//	}
//	sort(num,n);
//	printf("逆序后：");
//	for(i=0;i<n;i++){
//		printf("%d ",num[i]);
//	}
//	printf("\n");
//	return 0;
//}



#include <stdio.h>

int main(){
	float score[4][5];
	int i,j;
	for(i=0;i<4;i++){
		printf("请输入第%d名学生的成绩：",i+1);
		for(j=0;j<5;j++){
			scanf("%d",&score[i][j]);
		}
	}
	aver_1
	return 0;
}





















