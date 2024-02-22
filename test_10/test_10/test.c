#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	FILE *fp;
//	char ch,filename[10];
//	printf("请输入输出文件的名称：");
//	scanf("%s",filename);
//	if((fp = fopen(filename,"w")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	getchar();
//	printf("请输入一个字符串（以#结束）：");
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
//	printf("请输入读入文件的名称：");
//	scanf("%s",inname);
//	printf("请输入输出文件的名称：");
//	scanf("%s",outname);
//	if((in = fopen(inname,"r")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if((out = fopen(outname,"w")) == NULL){
//		printf("文件打开失败\n");
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
//	printf("****打开文件****\n");
//	printf("请输入输出文件的名称：");
//	scanf("%s",filename);
//	getchar();
//	if((fp = fopen(filename,"w")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	printf("****输入字符串****\n");
//	for(i=0;i<3;i++){
//		printf("请输入第%d个字符串：",i+1);
//		gets(str[i]);
//	}
//	sort(str);
//	for(i=0;i<3;i++){
//		fputs(str[i],fp);
//		fputs("\n",fp);
//	}
//	fclose(fp);
//	printf("****输出字符串****\n");
//	if((fp = fopen(filename,"r")) == NULL){
//		printf("文件打开失败\n");
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
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	for(i=0;i<10;i++){
//		if(fwrite(&p[i],sizeof(struct Student),1,fp) != 1){
//			printf("文件写入失败\n");
//		}
//	}
//	fclose(fp);
//}
//
//int main(){
//	struct Student st[10];
//	int i;
//	for(i=0;i<10;i++){
//		printf("请输入第%d个学生的数据：",i+1);
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
//		printf("文件打开失败\n");
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
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if((fp2 = fopen("file2.dat","w")) == NULL){
//		printf("文件打开失败\n");
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
//		printf("文件打开失败\n");
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
//		printf("打开文件失败\n");
//		exit(0);
//	}
//	printf("请输入字符串(以！结束)：");
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



//#include <stdio.h>
//#include <stdlib.h>
//
//void sort(char *p){
//	int i,j,k;
//	char temp;
//	for(i=0;p[i]!='\0';i++){
//		k = i;
//		for(j=i+1;p[j]!='\0';j++){
//			if(p[k] > p[j]){
//				k=j;
//			}
//		}
//		if(k!=i){
//			temp = p[k];
//			p[k] = p[i];
//			p[i] = temp;
//		}
//	}
//}
//
//int main(){
//	FILE *fp1,*fp2,*fp3;
//	char ch,str[100];
//	int i;
//	if((fp1 = fopen("a1","r")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if((fp2 = fopen("b1","r")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	if((fp3 = fopen("c1","w")) == NULL){
//		printf("文件打开失败\n");
//		exit(0);
//	}
//
//	printf("*****文件a内容*****\n");
//	ch = fgetc(fp1);
//	for(i=0;ch!=EOF;i++){
//		str[i] = ch;
//		putchar(ch);
//		ch = fgetc(fp1);
//	}
//	putchar('\n');
//
//	printf("*****文件b内容*****\n");
//	ch = fgetc(fp2);
//	while(ch!=EOF){
//		str[i] = ch;
//		putchar(ch);
//		i++;
//		ch = fgetc(fp2);
//	}
//	str[i] = '\0';
//	putchar('\n');
//
//	sort(str);
//
//	printf("*****文件c内容*****\n");
//	for(i=0;str[i]!='\0';i++){
//		fputc(str[i],fp3);
//		putchar(str[i]);
//	}
//	putchar('\n');
//
//	fclose(fp1);
//	fclose(fp2);
//	fclose(fp3);
//	return 0;
//}



////5,6,7,8
//
//#include <stdio.h>
//
//struct Student{
//	int num;
//	char name[20];
//	float score[3];
//	float average;
//};
//
//int main(){
//	struct Student st[6],temp;
//	int i,j,k;
//	FILE *fp;
//
//	//输入数据
//	for(i=0;i<5;i++){
//		printf("请输入第%d个学生的数据：",i+1);
//		scanf("%d%s%f%f%f",&st[i].num,st[i].name,&st[i].score[0],&st[i].score[1],&st[i].score[2]);
//	}
//
//	//计算平均数
//	for(i=0;i<5;i++){
//		st[i].average = (st[i].score[0] + st[i].score[1] + st[i].score[2])/3;
//	}
//
//	//将数据输出到文件stud
//	fp = fopen("stud","w");
//	for(i=0;i<5;i++){
//		fwrite(&st[i],sizeof(struct Student),1,fp);
//	}
//	fclose(fp);
//
//	//将数据从文件中读出并输出到屏幕
//	fp = fopen("stud","r");
//	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
//	for(i=0;i<5;i++){
//		fread(&st[i],sizeof(struct Student),1,fp);
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",st[i].num,st[i].name,st[i].score[0],st[i].score[1],st[i].score[2],st[i].average);
//	}
//	fclose(fp);
//
//	//对提取的数据数组排序
//	for(i=0;i<4;i++){
//		k=i;
//		for(j=i+1;j<5;j++){
//			if(st[k].average < st[j].average){
//				k = j;
//			}
//		}
//		if(k!=i){
//			temp = st[k];
//			st[k] = st[i];
//			st[i] = temp;
//		}
//	}
//
//	//排序后的数据输出到文件stu_sort并输出到屏幕
//	fp = fopen("stu_sort","w");
//	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
//	for(i=0;i<5;i++){
//		fwrite(&st[i],sizeof(struct Student),1,fp);
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",st[i].num,st[i].name,st[i].score[0],st[i].score[1],st[i].score[2],st[i].average);
//	}
//	fclose(fp);
//
//	//输入新的学生数据
//	printf("请输入新的学生数据：");
//	scanf("%d%s%f%f%f",&temp.num,temp.name,&temp.score[0],&temp.score[1],&temp.score[2]);
//	temp.average = (temp.score[0] + temp.score[1] + temp.score[2])/3;
//
//	//新数据插入数组相应位置
//	j=999;		//j记录插入位置的后一个元素，赋值999是为了监测循环后j值有没有改变，没有改变代表新数据的平均值最低，插入最后一个位置
//	for(i=0;i<5;i++){
//		if(st[i].average < temp.average){
//			j=i;
//			break;
//		}
//	}
//	if(j==999){
//		st[5] = temp;
//	}
//	else{
//		for(i=4;i>=j;i--){
//			st[i+1] = st[i];
//		}
//		st[j] = temp;
//	}
//
//	//将新数据数组输出到文件sort1.dat并输出到屏幕
//	fp = fopen("sort1.dat","w");
//	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
//	for(i=0;i<6;i++){
//		fwrite(&st[i],sizeof(struct Student),1,fp);
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",st[i].num,st[i].name,st[i].score[0],st[i].score[1],st[i].score[2],st[i].average);
//	}
//	fclose(fp);
//
//	//将新数据数组输出到原文件stu_sort并输出到屏幕
//	fp = fopen("stu_sort","w");
//	printf("学号\t姓名\t成绩1\t成绩2\t成绩3\t平均成绩\n");
//	for(i=0;i<6;i++){
//		fwrite(&st[i],sizeof(struct Student),1,fp);
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",st[i].num,st[i].name,st[i].score[0],st[i].score[1],st[i].score[2],st[i].average);
//	}
//	fclose(fp);
//
//	return 0;
//}



////9,10
//
//#include <stdio.h>
//#include <string.h>
//
//struct Employee{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	char addr[20];
//	int salary;
//	char health[20];
//	char culture[20];
//};
//
//struct Employee_simple{
//	char name[20];
//	int salary;
//};
//
//int main(){
//	struct Employee employee[4];
//	struct Employee_simple employee_simple[4];
//	int i,j;
//	FILE *fp;
//
//	//输入职工数据并存在数组employee中
//	for(i=0;i<4;i++){
//		printf("请输入第%d个职工的数据：",i+1);
//		scanf("%d %s %c %d %s %d %s %s",&employee[i].num,employee[i].name,&employee[i].sex,&employee[i].age,employee[i].addr,&employee[i].salary,employee[i].health,employee[i].culture);
//	}
//
//	//将职工数据输出到文件employee中
//	fp = fopen("employee","w");
//	for(i=0;i<4;i++){
//		fwrite(&employee[i],sizeof(struct Employee),1,fp);
//	}
//	fclose(fp);
//
//	//将职工数据从文件employee中取出并输出到屏幕
//	printf("\n********文件employee中的数据********\n");
//	fp = fopen("employee","r");
//	printf("职工号\t姓名\t性别\t年龄\t住址\t工资\t健康状况\t文化程度\n");
//	for(i=0;i<4;i++){
//		fread(&employee[i],sizeof(struct Employee),1,fp);
//		printf("%d\t%s\t%c\t%d\t%s\t%d\t%s\t%s\n",employee[i].num,employee[i].name,employee[i].sex,employee[i].age,employee[i].addr,employee[i].salary,employee[i].health,employee[i].culture);
//	}
//	fclose(fp);
//
//	//提取姓名和工资到新的数组
//	for(i=0;i<4;i++){
//		strcpy(employee_simple[i].name,employee[i].name);
//		employee_simple[i].salary = employee[i].salary;
//	}
//
//	//将简单数据存放到文件emp_salary中并输出到屏幕
//	printf("\n********文件emp_salary中的数据********\n");
//	fp = fopen("emp_salary","w");
//	printf("姓号\t工资\n");
//	for(i=0;i<4;i++){
//		fwrite(&employee_simple[i],sizeof(struct Employee_simple),1,fp);
//		printf("%s\t%d\n",employee_simple[i].name,employee_simple[i].salary);
//	}
//	fclose(fp);
//
//	//删除职工 ma 的数据
//	for(i=0;i<4;i++){
//		if(strcmp(employee_simple[i].name,"ma") == 0){
//			j=i;
//		}
//	}
//	if(j<3){		//ma是最后一个则不用做改变，以后i的取值变为0-2即可
//		for(i=j;i<3;i++){
//			employee_simple[i] = employee_simple[i+1];
//		}
//	}
//	
//	//将ma的数据删除后重新将数据存入文件emp_salary中并输出到屏幕
//	printf("\n********删除后文件emp_salary中的数据********\n");
//	fp = fopen("emp_salary","w");
//	printf("姓号\t工资\n");
//	for(i=0;i<3;i++){
//		fwrite(&employee_simple[i],sizeof(struct Employee_simple),1,fp);
//		printf("%s\t%d\n",employee_simple[i].name,employee_simple[i].salary);
//	}
//	fclose(fp);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	int i,flag;
//	char str[80],ch;
//	FILE *fp;
//
//	//向文件text输入字符串
//	fp = fopen("text","w");
//	flag = 1;
//	while(flag == 1){
//		printf("请输入字符串：");
//		gets(str);
//		fprintf(fp,"%s",str);
//		printf("继续输入吗（y/n）：");
//		scanf("%c",&ch);
//		if(ch == 'n'){
//			flag = 0;
//		}
//		getchar();		//处理换行字符，避免错误录入
//	}
//	fclose(fp);
//
//	//从文件text中读取字符串并修改输出到屏幕上
//	printf("\n********修改后字符串********\n");
//	fp = fopen("text","r");
//	while(fscanf(fp,"%s",str) != EOF){
//		for(i=0;str[i]!='\0';i++){
//			if(str[i]>='a' && str[i]<='z'){
//				str[i] = str[i] - 32;
//			}
//		}
//		printf("%s\n",str);
//	}
//	fclose(fp);
//
//	return 0;
//}
















































































































































