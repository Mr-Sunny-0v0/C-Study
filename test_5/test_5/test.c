#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	int i = 1,sum = 0;
//	while(i <= 100){
//		sum = sum + i;
//		i++;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i = 1,sum = 0;
//	do{
//		sum = sum + i;
//		i++;
//	}while(i <= 100);
//	printf("sum = %d\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i;
//	double sum=0.0,m;
//	for(i=1;i<=1000;i++){
//		printf("请输入捐款金额：");
//		scanf("%lf",&m);
//		sum = sum + m;
//		if(sum >= 100000) break;
//	}
//	printf("捐款人数：%d\t平均每人捐款数目：%lf\n",i,sum/i);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i;
//	for(i=100;i<=200;i++){
//		if(i%3==0) continue;
//		printf("%d\t",i);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=5;j++){
//			printf("%d\t",i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int sign = 1;
//	double fm = 1.0,sum = 0.0,pi;
//	while(fabs(1/fm) >= 1e-6){
//		sum = sum + sign * (1 / fm);
//		sign = (-1) * sign;
//		fm = fm + 2.0;
//	}
//	pi = 4 * sum;
//	printf("pi = %.8lf\n",pi);
//	return 0;
//}




//#include <stdio.h>
//
//int main(){
//	int i=3,f1=1,f2=1,f3;
//	printf("%d\n%d\n",f1,f2);
//	while(i<=40){
//		f3 = f1 + f2;
//		printf("%d\n",f3);
//		f1 = f2;
//		f2 = f3;
//		i++;
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int n,i=2;
//	printf("请输入大于3的整数：");
//	scanf("%d",&n);
//	while(i <= sqrt((double)n)){
//		if(n%i==0)break;
//		i++;
//	}
//	if(i <= sqrt((double)n)){
//		printf("%d不是素数\n",n);
//	}
//	else{
//		printf("%d是素数\n",n);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int i=100,n=2;
//	while(i <= 200){
//		while(n <= sqrt((double)i)){
//			if(i%n==0)break;
//			n++;
//		}
//		if(n > sqrt((double)i))printf("%d\n",i);
//		n = 2;
//		i++;
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c;
//	c = getchar();
//	while(c!='\n'){
//		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
//			if((c>='W'&&c<='Z')||(c>='w'&&c<='z')){
//				c = c - 22;
//			}
//			c = c + 4;
//		}
//		putchar(c);
//		c = getchar();
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int m,n,r,p;
//	printf("请输入两个整数（用空格隔开）：");
//	scanf("%d%d",&m,&n);
//	p = m*n;
//	if(m < n){
//		r = m;
//		m = n;
//		n = r;
//	}
//	r = m % n;
//	while(r != 0){
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("最大公约数=%d\t最小公倍数=%d\n",n,p/n);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	char c;
//	int ec=0,kc=0,sc=0,qc=0;
//	printf("请输入字符串（以回车结束）：");
//	while((c=getchar()) != '\n'){
//		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
//			ec++;
//		}
//		else if(c==' '){
//			kc++;
//		}
//		else if(c>='0'&&c<='9'){
//			sc++;
//		}
//		else{
//			qc++;
//		}
//	}
//	printf("英文字母：%d个\n空格：%d个\n数字：%d个\n其他字符：%d个\n",ec,kc,sc,qc);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int a,n,i,sum=0,mx=0;
//	printf("请输入a,n（用空格隔开）：");
//	scanf("%d%d",&a,&n);
//	for(i=1;i<=n;i++){
//		mx = mx*10+a;
//		sum = sum +mx;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,j;
//	double sum = 0,mx = 1;
//	for(i=1;i<=20;i++){
//		for(j=1;j<=i;j++){
//			mx = mx*j;
//		}
//		sum = sum + mx;
//		mx = 1;
//	}
//	printf("sum = %22.15e\n",sum);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	double x1=0,x2=0,x3=0;
//	int i;
//	for(i=1;i<=100;i++){
//		x1 = x1 + i;
//	}
//	for(i=1;i<=50;i++){
//		x2 = x2 + i*i;
//	}
//	for(i=1;i<=10;i++){
//		x3 = x3 + 1.0/i;
//	}
//	printf("%.6lf\n",x1+x2+x3);
//	return 0;
//}




//#include <stdio.h>
//
//int main(){
//	int i;
//	for(i=100;i<=999;i++){
//		if(i == ((i/100)*(i/100)*(i/100)+(i%100/10)*(i%100/10)*(i%100/10)+(i%10)*(i%10)*(i%10))) printf("%d\n",i);
//	}
//	return 0;
//}
































