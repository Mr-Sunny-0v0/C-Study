#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *fp;
//	char ch,filename[10];
//	printf("����������ļ������ƣ�");
//	scanf("%s",filename);
//	if((fp = fopen(filename,"w")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	getchar();
//	printf("������һ���ַ�������#��������");
//	ch = getchar();
//	while(ch != '#'){
//		fputc(ch,fp);
//		putchar(ch);
//		ch = getchar();
//	}
//	putchar('\n');
//	fclose(fp);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *in,*out;
//	char ch,inname[10],outname[10];
//	printf("����������ļ������ƣ�");
//	scanf("%s",inname);
//	printf("����������ļ������ƣ�");
//	scanf("%s",outname);
//	if((in = fopen(inname,"r")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	if((out = fopen(outname,"w")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	ch = fgetc(in);
//	while(ch != EOF){
//		fputc(ch,out);
//		putchar(ch);
//		ch = fgetc(in);
//	}
//	putchar('\n');
//	fclose(in);
//	fclose(out);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void sort(char (*p)[50]){
//	int i,j,k;
//	char temp[50];
//	for(i=0;i<2;i++){
//		k=i;
//		for(j=i+1;j<3;j++){
//			if(strcmp(p[k],p[j]) > 0){
//				k = j;
//			}
//		}
//		if(k!=i){
//			strcpy(temp,p[k]);
//			strcpy(p[k],p[i]);
//			strcpy(p[i],temp);
//		}
//	}
//}
//
//int main(){
//	FILE *fp;
//	char str[3][50],filename[20];
//	int i;
//	printf("****���ļ�****\n");
//	printf("����������ļ������ƣ�");
//	scanf("%s",filename);
//	getchar();
//	if((fp = fopen(filename,"w")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	printf("****�����ַ���****\n");
//	for(i=0;i<3;i++){
//		printf("�������%d���ַ�����",i+1);
//		gets(str[i]);
//	}
//	sort(str);
//	for(i=0;i<3;i++){
//		fputs(str[i],fp);
//		fputs("\n",fp);
//	}
//	fclose(fp);
//	printf("****����ַ���****\n");
//	if((fp = fopen(filename,"r")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	for(i=0;i<3;i++){
//		fgets(str[i],50,fp);
//		printf("%s",str[i]);
//	}
//	fclose(fp);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	char name[20];
//	int num;
//	int age;
//	char addr[20];
//};
//
//void save(struct Student *p){
//	FILE *fp;
//	int i;
//	if((fp = fopen("stu.dat","wb")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	for(i=0;i<10;i++){
//		if(fwrite(&p[i],sizeof(struct Student),1,fp) != 1){
//			printf("�ļ�д��ʧ��\n");
//		}
//	}
//	fclose(fp);
//}
//
//int main(){
//	struct Student st[10];
//	int i;
//	for(i=0;i<10;i++){
//		printf("�������%d��ѧ�������ݣ�",i+1);
//		scanf("%s %d %d %s",st[i].name,&st[i].num,&st[i].age,st[i].addr);
//	}
//	save(st);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	char name[20];
//	int num;
//	int age;
//	char addr[20];
//};
//
//int main(){
//	FILE *fp;
//	struct Student st[10];
//	int i;
//	if((fp = fopen("stu.dat","rb")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	for(i=0;i<10;i++){
//		fread(&st[i],sizeof(struct Student),1,fp);
//		printf("%s\t%d\t%d\t%s\n",st[i].name,st[i].num,st[i].age,st[i].addr);
//	}
//	fclose(fp);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *fp1,*fp2;
//	char ch;
//	if((fp1 = fopen("file1.dat","r")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	if((fp2 = fopen("file2.dat","w")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//
//	ch = fgetc(fp1);
//	while(ch != EOF){
//		putchar(ch);
//		ch = fgetc(fp1);
//	}
//	putchar('\n');
//
//	rewind(fp1);
//
//	ch = fgetc(fp1);
//	while(ch != EOF){
//		fputc(ch,fp2);
//		ch = fgetc(fp1);
//	}
//
//	fclose(fp1);
//	fclose(fp2);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	char name[20];
//	int num;
//	int age;
//	char addr[20];
//};
//
//int main(){
//	struct Student st[10];
//	int i;
//	FILE *fp;
//	if((fp = fopen("stu.dat","rb")) == NULL){
//		printf("�ļ���ʧ��\n");
//		exit(0);
//	}
//	for(i=0;i<10;i+=2){
//		fseek(fp,i*sizeof(struct Student),0);
//		fread(&st[i],sizeof(struct Student),1,fp);
//		printf("%s\t%d\t%d\t%s\n",st[i].name,st[i].num,st[i].age,st[i].addr);
//	}
//	fclose(fp);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//void change(char *p){
//	while(*p!='!'){
//		if(*p>='a' && *p<='z'){
//			*p = *p - ('a'-'A');
//		}
//		p++;
//	}
//}
//
//int main(){
//	char str[50];
//	int i;
//	FILE *fp;
//	if((fp = fopen("a1","w")) == NULL){
//		printf("���ļ�ʧ��\n");
//		exit(0);
//	}
//	printf("�������ַ���(�ԣ�����)��");
//	gets(str);
//	change(str);
//	for(i=0;str[i]!='!';i++){
//		fputc(str[i],fp);
//	}
//	fclose(fp);
//	fp = fopen("a1","r");
//	fgets(str,50,fp);
//	printf("%s\n",str);
//	fclose(fp);
//	return 0;
//}
































































































































































