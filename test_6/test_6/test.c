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
























































































