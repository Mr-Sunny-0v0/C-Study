#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	int a[10],i;
//	for(i=0;i<=9;i++){
//		printf("�������%d��Ԫ�أ�",i+1);
//		scanf("%d",&a[i]);
//	}
//	printf("���������");
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
//	printf("���루�ո��������");
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
//	printf("��С���������");
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
//	printf("max = %d\n�� = %d\n�� = %d\n",max,mi,mj);
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
//	printf("�������ַ�����");
//	//scanf("%s",s);		//scanf�����ո�����
//	gets(s);			//gets�����ո񲻻����
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
//	printf("������ = %d\n",count);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	char sm[100],s1[100],s2[100],s3[100];
//	printf("�������һ���ַ�����");
//	gets(s1);
//	printf("������ڶ����ַ�����");
//	gets(s2);
//	printf("������������ַ�����");
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
//	printf("���%s\n",sm);
//	return 0;
//}








































































