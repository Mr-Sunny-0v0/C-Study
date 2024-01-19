#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	int a[10],i;
//	for(i=0;i<=9;i++){
//		printf("请输入第%d个元素：",i+1);
//		scanf("%d",&a[i]);
//	}
//	printf("倒序输出：");
//	for(i=9;i>=0;i--){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int f[20]={1,1},i;
//	for(i=2;i<=19;i++){
//		f[i] = f[i-1] +f[i-2];
//	}
//	for(i=0;i<=19;i++){
//		printf("%d",f[i]);
//		if((i+1)%5==0){
//			printf("\n");
//		}
//		else{
//			printf("\t");
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[10],i,j,t;
//	printf("输入（空格隔开）：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	for(j=1;j<=9;j++){
//		for(i=0;i<=8-j;i++){
//			if(a[i] > a[i+1]){
//				t = a[i];
//				a[i] = a[i+1];
//				a[i+1] = t;
//			}
//		}
//	}
//	printf("从小到大输出：");
//	for(i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,a[2][3]={{1,2,3},{4,5,6}},b[3][2];
//	for(i=0;i<=1;i++){
//		for(j=0;j<=2;j++){
//			b[j][i] = a[i][j];
//		}
//	}
//	for(i=0;i<=2;i++){
//		for(j=0;j<=1;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a[3][4] = {{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
//	int i,j,mi,mj,max=a[0][0];
//	for(i=0;i<=2;i++){
//		for(j=0;j<=3;j++){
//			if(max < a[i][j]){
//				max = a[i][j];
//				mi = i;
//				mj = j;
//			}
//		}
//	}
//	printf("max = %d\n行 = %d\n列 = %d\n",max,mi,mj);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c[15] = {'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'};
//	//char c[16] = {"I am a student."};
//	int i;
//	for(i=0;i<=14;i++){
//		printf("%c",c[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
//	int i,j;
//	for(i=0;i<=4;i++){
//		for(j=0;j<=4;j++){
//			printf("%c",c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char s[100];
//	int word=0,count=0,i;
//	printf("请输入字符串：");
//	//scanf("%s",s);		//scanf遇到空格会分裂
//	gets(s);			//gets遇到空格不会分裂
//	for(i=0;s[i]!='\0';i++){
//		if(s[i] == ' '){
//			word = 0;
//		}
//		else{
//			if(word == 0){
//				count++;
//				word = 1;
//			}
//		}
//	}
//	printf("单词数 = %d\n",count);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char sm[100],s1[100],s2[100],s3[100];
//	printf("请输入第一个字符串：");
//	gets(s1);
//	printf("请输入第二个字符串：");
//	gets(s2);
//	printf("请输入第三个字符串：");
//	gets(s3);
//	if(strcmp(s1,s2) > 0){
//		strcpy(sm,s1);
//	}
//	else{
//		strcpy(sm,s2);
//	}
//	if(strcmp(sm,s3) <= 0){
//		strcpy(sm,s3);
//	}
//	printf("最大：%s\n",sm);
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int i,j,n,a[101];
//	for(i=1;i<=100;i++){
//		a[i] = i;
//	}
//	a[1] = 0;
//	for(i=2;i<=sqrt(100.0);i++){
//		for(j=i+1;j<=100;j++){
//			if(a[i]!=0 && a[j]!=0){
//				if(a[j]%a[i]==0){
//					a[j] = 0;
//				}
//			}
//		}
//	}
//	n = 0;
//	for(i=1;i<=100;i++){
//		if(a[i]!=0){
//			printf("%d\t",a[i]);
//			n++;
//		}
//		if(n==10){
//			printf("\n");
//			n=0;
//		}
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,t,min,a[11];
//	printf("原顺序：");
//	for(i=1;i<=10;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=1;i<=9;i++){
//		min = i;
//		for(j=i+1;j<=10;j++){
//			if(a[min] > a[j]){
//				min = j;
//			}
//		}
//		t = a[min];
//		a[min] = a[i];
//		a[i] = t;
//	}
//	printf("排序后：");
//	for(i=1;i<=10;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,sum,a[3][3];
//	printf("请输入3*3整形矩阵：\n");
//	for(i=0;i<=2;i++){
//		for(j=0;j<=2;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	sum = a[0][0] + a[1][1] + a[2][2];
//	printf("sum = %d\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j,num,a[11];
//	printf("原数组：");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("插入数：");
//	scanf("%d",&num);
//	if(num > a[9]){
//		a[10] = num;
//	}
//	else{
//		for(i=0;num>a[i];i++);
//		for(j=10;j>i;j--){
//			a[j] = a[j-1];
//		}
//		a[i] = num;
//	}
//	printf("新数组：");
//	for(i=0;i<=10;i++){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,t,a[5];
//	printf("原数组：");
//	for(i=0;i<=4;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<5/2;i++){
//		t = a[i];
//		a[i] = a[5-i-1];
//		a[5-i-1] = t;
//	}
//	printf("新数组：");
//	for(i=0;i<=4;i++){
//		printf("%d ",a[i]);
//	}
//	return 0;
//}




















































