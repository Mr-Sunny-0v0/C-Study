#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *fp;
//	char ch,filename[10];
//	printf("请输入所用的文件名：");
//	scanf("%s",filename);
//	getchar();
//	if((fp = fopen(filename,"w")) == NULL){
//		printf("不能打开文件\n");
//		exit(0);
//	}
//	printf("请输入一个准备存储到磁盘上的字符串（以#结束）：");
//	ch = getchar();
//	while(ch != '#'){
//		fputc(ch,fp);
//		putchar(ch);
//		ch = getchar();
//	}
//	fclose(fp);
//	putchar('\n');
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *in,*out;
//	char ch,infile[10],outfile[10];
//	printf("请输入读入文件的名字：");
//	scanf("%s",infile);
//	printf("请输入输出文件的名字：");
//	scanf("%s",outfile);
//	if((in = fopen(infile,"r")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if((out = fopen(outfile,"w")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	ch = fgetc(in);
//	while(!feof(in)){
//		fputc(ch,out);
//		putchar(ch);
//		ch = fgetc(in);
//	}
//	putchar('\n');
//	fclose(in);
//	fclose(out);
//	return 0;
//}






























































































































































































