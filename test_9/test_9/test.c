#define _CRT_SECURE_NO_WARNINGS



//#include <stdio.h>
//
//int main(){
//	struct Student{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[20];
//	};
//	struct Student a = {10101,"Li Lin",'M',"123 Beijing Road"};
//	printf("ѧ�ţ�%ld\n������%s\n�Ա�%c\n��ַ��%s\n",a.num,a.name,a.sex,a.addr);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	struct Student{
//		long int num;
//		char name[20];
//		int score;
//	};
//	struct Student student1,student2;
//	printf("�������1��ѧ����ѧ�š��������ɼ���");
//	scanf("%ld%s%d",&student1.num,student1.name,&student1.score);
//	printf("�������2��ѧ����ѧ�š��������ɼ���");
//	scanf("%ld%s%d",&student2.num,student2.name,&student2.score);
//	if(student1.score > student2.score){
//		printf("��1��ѧ���ɼ��ϸߣ�\nѧ�ţ�%ld\n������%s\n�ɼ���%d\n",student1.num,student1.name,student1.score);
//	}
//	else if(student1.score < student2.score){
//		printf("��2��ѧ���ɼ��ϸߣ�\nѧ�ţ�%ld\n������%s\n�ɼ���%d\n",student2.num,student2.name,student2.score);
//	}
//	else{
//		printf("����ѧ���ɼ���ͬ\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//struct Preson{
//	char name[20];
//	int count;
//}leader[3] = {{"Li",0},{"Zhang",0},{"Sun",0}};
//
//int main(){
//	char name[20];
//	int i,j;
//	printf("������10��ͶƱ������\n");
//	for(i=0;i<10;i++){
//		scanf("%s",name);
//		for(j=0;j<3;j++){
//			if(strcmp(name,leader[j].name) == 0)
//				leader[j].count++;
//		}
//	}
//	printf("ͶƱ�����\n");
//	for(i=0;i<3;i++){
//		printf("%s��Ʊ����%d\n",leader[i].name,leader[i].count);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//struct Student{
//	int num;
//	char name[20];
//	float score;
//};
//
//int main(){
//	struct Student st[5] = {{10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Ling",73.5},{10110,"Sun",100}};
//	int i,j,k;
//	struct Student temp;
//	for(i=0;i<4;i++){
//		k=i;
//		for(j=i+1;j<5;j++){
//			if(st[k].score < st[j].score)
//				k = j;
//		}
//		if(k != i){
//			temp = st[k];
//			st[k] = st[i];
//			st[i] = temp;
//		}
//	}
//	printf("���ɼ��ɸߵ��������\n");
//	printf("ѧ��\t����\t�ɼ�\n");
//	for(i=0;i<5;i++){
//		printf("%d\t%s\t%.2f\n",st[i].num,st[i].name,st[i].score);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	struct Student{
//		long num;
//		char name[20];
//		char sex;
//		float score;
//	};
//	struct Student stu1;
//	struct Student *p;
//	p = &stu1;
//	stu1.num = 10101;
//	strcpy(stu1.name,"Li Lin");		//���󷽷���stu1.name = "Li Lin";
//	stu1.sex = 'M';
//	stu1.score = 89.5;
//	printf("ѧ��\t����\t�Ա�\t����\n");
//	printf("%ld\t%s\t%c\t%.2f\n",stu1.num,stu1.name,stu1.sex,stu1.score);
//	printf("%ld\t%s\t%c\t%.2f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
//	printf("%ld\t%s\t%c\t%.2f\n",p->num,p->name,p->sex,p->score);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	struct Student{
//		int num;
//		char name[20];
//		char sex;
//		int age;
//	};
//	struct Student st[3]= {{10101,"Li Lin",'M',18},{10102,"Zhang Fang",'M',19},{10104,"Wang Min",'F',20}};
//	struct Student *p;
//	int i;
//	p = st;
//	printf("ѧ��\t\t����\t\t�Ա�\t\t����\n");
//	for(i=0;i<3;i++){
//		printf("%d\t\t%s\t\t%c\t\t%d\n",(p+i)->num,(p+i)->name,(p+i)->sex,(p+i)->age);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//struct Student{
//		int num;
//		char name[20];
//		float score[3];
//	};
//
//void input(struct Student *p,int n){
//	int i;
//	for(i=0;i<n;i++){
//		printf("�������%d��ѧ������Ϣ��ѧ�š����������ſγ̵ķ�������\n",i+1);
//		scanf("%d%s%f%f%f",&(p+i)->num,(p+i)->name,&(p+i)->score[0],&(p+i)->score[1],&(p+i)->score[2]);
//	}
//}
//
//void aver_max(struct Student *p,int n){
//	int i,j,flag = 0;
//	float sum,aver=0,temp;
//	for(i=0;i<n;i++){
//		sum = 0;
//		for(j=0;j<3;j++){
//			sum = sum + (p+i)->score[j];
//		}
//		temp = sum/3;
//		if(temp>aver){
//			aver =  temp;
//			flag = i;
//		}
//	}
//	printf("��%d����ѧ��ƽ���ɼ���ߣ���Ϣ���£�\n",flag+1);
//	printf("ѧ�ţ�%d\n������%s\n�ɼ���%.2f,%.2f,%.2f\nƽ���ɼ���%.2f\n",(p+flag)->num,(p+flag)->name,(p+flag)->score[0],(p+flag)->score[1],(p+flag)->score[2],aver);
//}
//
//int main(){
//	struct Student stu[30];
//	int n;
//	printf("������ѧ��������");
//	scanf("%d",&n);
//	input(stu,n);
//	aver_max(stu,n);
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	struct Student{
//		int num;
//		float score;
//		struct Student *next;
//	};
//	struct Student a,b,c;
//	struct Student *head,*p;
//	head = &a;
//
//	a.num = 10101;
//	a.score = 89.5;
//	a.next = &b;
//
//	b.num = 10103;
//	b.score = 90;
//	b.next = &c;
//
//	c.num = 10107;
//	c.score = 85;
//	c.next = NULL;
//
//	for(p=head;p!=NULL;p=p->next){
//		printf("%d\t%.2f\n",p->num,p->score);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	float score;
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;	//headָ����ͷ��p1ָ���½ڵ㣬p2ָ����β��
//	int num;
//	float score;
//	printf("������ѧ����ѧ�źͷ�����");
//	scanf("%d%f",&num,&score);
//	while(num!=0){				//����0ѧ�Ŵ������
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		p1->num = num;
//		p1->score = score;
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		printf("������ѧ����ѧ�źͷ�����");
//		scanf("%d%f",&num,&score);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//int main(){
//	struct Student *p,*temp;	//temp�����ͷ�����
//	p = creat();
//	printf("%d\t%.2f\n",p->num,p->score);
//	while(p!=NULL){
//		temp = p->next;
//		free(p);
//		p = temp;
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	float score;
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;		//headָ����ͷ��p1ָ���½ڵ㣬p2ָ����β��
//	int num;
//	float score;
//	printf("������ѧ����ѧ�źͳɼ���");
//	scanf("%d%f",&num,&score);
//	while(num!=0){		//����0ѧ�Ŵ������
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		p1->num = num;
//		p1->score = score;
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		printf("������ѧ����ѧ�źͳɼ���");
//		scanf("%d%f",&num,&score);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student *p){
//	while(p!=NULL){
//		printf("%d\t%.2f\n",p->num,p->score);
//		p = p->next;
//	}
//}
//
//void w_free(struct Student *p){
//	struct Student *temp;
//	while(p!=NULL){
//		temp = p->next;
//		free(p);
//		p = temp;
//	}
//}
//
//int main(){
//	struct Student *p;
//	p = creat();
//	print(p);
//	w_free(p);
//	return 0;
//}



//#include <stdio.h>
//
//struct Person{
//	int num;
//	char name[20];
//	char sex;
//	char job;
//	union {
//		int clas;
//		char position[20];
//	}category;
//};
//
//int main(){
//	struct Person person[2];
//	int i;
//	for(i=0;i<2;i++){
//		printf("��������˵����ݣ�");
//		scanf("%d %s %c %c",&person[i].num,person[i].name,&person[i].sex,&person[i].job);
//		if(person[i].job == 's'){
//			scanf("%d",&person[i].category.clas);
//		}
//		else if(person[i].job == 't'){
//			scanf("%s",person[i].category.position);
//		}
//		else{
//			printf("�������");
//			return 0;
//		}
//	}
//	printf("\n");
//	for(i=0;i<2;i++){
//		if(person[i].job == 's'){
//			printf("%d\t%s\t%c\t%c\t%d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas);
//		}
//		else{
//			printf("%d\t%s\t%c\t%c\t%s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//
//enum Color{
//	red,
//	yellow,
//	blue,
//	white,
//	black
//};
//
//int main(){
//	enum Color i,j,k,pri;
//	int n=0,loop;
//	for(i=red;i<=black;i++){
//		for(j=red;j<=black;j++){
//			if(i!=j){
//				for(k=red;k<=black;k++){
//					if(k!=i && k!=j){
//						n++;
//						printf("%-4d",n);
//						for(loop=1;loop<=3;loop++){
//							switch(loop){
//								case 1:pri = i;break;
//								case 2:pri = j;break;
//								case 3:pri = k;break;
//								default:break;
//							}
//							switch(pri){
//								case red:printf("%-10s","red");break;
//								case yellow:printf("%-10s","yellow");break;
//								case blue:printf("%-10s","blue");break;
//								case white:printf("%-10s","white");break;
//								case black:printf("%-10s","black");break;
//								default:break;
//							}
//						}
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	printf("�ܹ���%d�����\n",n);
//	return 0;
//}



//#include <stdio.h>
//
//struct Date{
//	int year;
//	int month;
//	int day;
//};
//
//int main(){
//	struct Date date;
//	int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	int i,count=0;
//	printf("�����������գ��ÿո��������");
//	scanf("%d%d%d",&date.year,&date.month,&date.day);
//	if(((date.year%4==0)&&(date.year%100!=0)) || (date.year%400==0)){
//		mon[1] = 29;
//	}
//	for(i=0;i<date.month-1;i++){
//		count = count + mon[i];
//	}
//	count = count + date.day;
//	printf("%d��%d��%d���Ǳ����%d��\n",date.year,date.month,date.day,count);
//	return 0;
//}



//#include <stdio.h>
//
//struct Date{
//	int year;
//	int month;
//	int day;
//};
//
//int count_day(struct Date date){
//	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//	int count=0,i;
//	if((date.year%4==0 && date.year%100!=0) || date.year%400==0){
//		mon[1] = 29;
//	}
//	for(i=0;i<date.month-1;i++){
//		count = count + mon[i];
//	}
//	count = count + date.day;
//	return count;
//}
//
//int main(){
//	struct Date date;
//	printf("�����������գ��ÿո��������");
//	scanf("%d%d%d",&date.year,&date.month,&date.day);
//	printf("%d��%d��%d���Ǳ����%d��\n",date.year,date.month,date.day,count_day(date));
//	return 0;
//}



//#include <stdio.h>
//
//struct Student{
//	int num;
//	char name[20];
//	float score[3];
//};
//
//void print(struct Student *p){
//	int i;
//	printf("ѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\n");
//	for(i=0;i<5;i++){
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",p[i].num,p[i].name,p[i].score[0],p[i].score[1],p[i].score[2]);
//	}
//}
//
//int main(){
//	struct Student st[5];
//	int i;
//	for(i=0;i<5;i++){
//		printf("�������%d��ѧ�������ݣ�",i+1);
//		scanf("%d%s%f%f%f",&st[i].num,st[i].name,&st[i].score[0],&st[i].score[1],&st[i].score[2]);
//	}
//	print(st);
//	return 0;
//}



//#include <stdio.h>
//
//struct Student{
//	int num;
//	char name[20];
//	float score[3];
//};
//
//void input(struct Student *p){
//	int i;
//	for(i=0;i<5;i++){
//		printf("�������%d��ѧ�������ݣ�",i+1);
//		scanf("%d%s%f%f%f",&p[i].num,p[i].name,&p[i].score[0],&p[i].score[1],&p[i].score[2]);
//	}
//}
//
//void print(struct Student *p){
//	int i;
//	printf("ѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\n");
//	for(i=0;i<5;i++){
//		printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",p[i].num,p[i].name,p[i].score[0],p[i].score[1],p[i].score[2]);
//	}
//}
//
//int main(){
//	struct Student st[5];
//	input(st);
//	print(st);
//	return 0;
//}



//#include <stdio.h>
//
//struct Student{
//	int num;
//	char name[20];
//	float score[3];
//	float aver;
//};
//
//void input(struct Student *p){
//	int i;
//	for(i=0;i<10;i++){
//		printf("�������%d��ѧ�������ݣ�",i+1);
//		scanf("%d%s%f%f%f",&p[i].num,p[i].name,&p[i].score[0],&p[i].score[1],&p[i].score[2]);
//	}
//}
//
//void count_aver(struct Student *p){
//	int i;
//	float aver;
//	for(i=0;i<10;i++){
//		aver = (p[i].score[0]+p[i].score[1]+p[i].score[2])/3;
//		p[i].aver = aver;
//	}
//}
//
//void put_all_aver(struct Student *p){
//	float sum = 0;
//	int i;
//	for(i=0;i<10;i++){
//		sum = sum + p[i].score[0]+p[i].score[1]+p[i].score[2];
//	}
//	printf("��ƽ���ɼ� = %.2f\n",sum/30);
//}
//
//void put_max_aver(struct Student *p){
//	int i,flag=0;		//flag�����߳ɼ���ѧ��λ��
//	for(i=1;i<10;i++){
//		if(p[flag].aver < p[i].aver){
//			flag = i;
//		}
//	}
//	printf("��%d��ѧ���ĳɼ���ã���ѧ���������£�\n",flag+1);
//	printf("ѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\tƽ����\n");
//	printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",p[flag].num,p[flag].name,p[flag].score[0],p[flag].score[1],p[flag].score[2],p[flag].aver);
//}
//
//int main(){
//	struct Student st[10];
//	input(st);
//	count_aver(st);
//	put_all_aver(st);
//	put_max_aver(st);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Person{
//	int num;
//	struct Person *next;
//};
//
//struct Person * creat(int n){
//	int i;
//	struct Person *head=NULL,*p1=NULL,*p2=NULL;		//headָ����ͷ��p2ָ����β��p1ָ���½ڵ㣻
//	for(i=1;i<=n;i++){
//		p1 = (struct Person *)malloc(sizeof(struct Person));
//		(*p1).num = i;
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void final(struct Person *p,int n){
//	int k=0,m=0;		//kѭ��123��m�����˳�����
//	struct Person * temp = p;
//	while(m<n-1){		//��ס
//		if((*temp).num != 0){
//			k++;
//		}
//		if(k==3){
//			(*temp).num = 0;
//			m++;
//			k=0;
//		}
//		temp = temp->next;
//		if(temp == NULL){
//			temp = p;
//		}
//	}
//	temp = p;
//	while((*temp).num==0){
//		temp = temp->next;
//	}
//	printf("�������Ȧ����ԭ������� = %d\n",(*temp).num);
//}
//
//void w_free(struct Person *p){
//	struct Person *temp;
//	while(p!=NULL){
//		temp = p->next;
//		free(p);
//		p = temp;
//	}
//	printf("\n******�ռ��ͷ����******\n");
//}
//
//int main(){
//	struct Person *p;
//	p = creat(13);
//	final(p,13);
//	w_free(p);
//	return 0;
//}



////7 8 9
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	float score;
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;		//headָ����ͷ��p2ָ����β��p1ָ���½ڵ㣻
//	int num;
//	float score;
//	printf("������ѧ����ѧ�źͳɼ���");
//	scanf("%d%f",&num,&score);
//	while(num != 0){		//ѧ��Ϊ0�������
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		p1->num = num;
//		p1->score = score;
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		printf("������ѧ����ѧ�źͳɼ���");
//		scanf("%d%f",&num,&score);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student *head){
//	printf("ѧ��\t�ɼ�\n");
//	while(head!=NULL){
//		printf("%d\t%.2f\n",head->num,head->score);
//		head = head->next;
//	}
//}
//
//void del(struct Student *head,int num){		//ɾ��ѧ��Ϊnum�Ľڵ�
//	struct Student *p1=head,*p2=head;	//p1ָ��Ҫɾ���Ľڵ㣬p2ָ����һ���ڵ�
//	while(p1->num != num){
//		p1 = p1->next;
//	}
//	if(p1 == head){		//Ҫɾ���ڵ���ͷ���
//		head = p1->next;
//		free(p1);
//	}
//	else{
//		while(p2->next != p1){
//			p2 = p2->next;
//		}
//		p2->next = p1->next;
//		free(p1);
//	}
//}
//
//void insert(struct Student *head,struct Student *node){		//��ѧ��˳�����ڵ�
//	struct Student *p1=head,*p2=head;	//p1ָ��Ҫ����λ�õ�ǰһ���ڵ�,p2ָ����β
//	while(p2->next!=NULL){
//		p2 = p2->next;
//	}
//	if(node->num < head->num){		//������ͷ
//		node->next = head;
//		head = node;
//	}
//	else if(node->num > p2->num){		//������β
//		p2->next = node;
//		node->next = NULL;
//	}
//	else{		//�������м�
//		while(p1->next->num < node->num){
//			p1 = p1->next;
//		}
//		node->next = p1->next;
//		p1->next = node;
//	}
//}
//
//int main(){
//	struct Student *head,node;
//	int num;
//
//	head = creat();
//	print(head);
//
//	printf("������Ҫɾ����ѧ�ţ�");
//	scanf("%d",&num);
//	del(head,num);
//	print(head);
//
//	printf("������Ҫ����ѧ����ѧ�źͳɼ���");
//	scanf("%d%f",&node.num,&node.score);
//	insert(head,&node);
//	print(head);
//
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	float score;
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;		//headָ����ͷ��p2ָ����β��p1ָ���½ڵ㣻
//	int num;
//	float score;
//	printf("������ѧ����ѧ�źͳɼ���");
//	scanf("%d%f",&num,&score);
//	while(num != 0){		//ѧ��Ϊ0�������
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		p1->num = num;
//		p1->score = score;
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		printf("������ѧ����ѧ�źͳɼ���");
//		scanf("%d%f",&num,&score);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student *head){
//	printf("ѧ��\t�ɼ�\n");
//	while(head!=NULL){
//		printf("%d\t%.2f\n",head->num,head->score);
//		head = head->next;
//	}
//}
//
//struct Student * incor(struct Student *head_a,struct Student *head_b){		//������b�ϲ�������a��
//	struct Student *last_a=head_a,*pa=head_a;		//last_aָ������a��β��,paָ������a�м�Ľڵ�
//	struct Student *temp;					//��Ϊ�ڲ�head_b�ڵ�ʱ��head_b����ԭ�й�ϵ���ܸı䣬����Ҫ����һ��temp�ڵ���ʱ���head_b�ڵ㣬������a�Ĺ�ϵҪ�仯�����Բ���Ϊ����a�����ݴ�ڵ�
//	while(last_a->next != NULL){
//		last_a = last_a->next;
//	}
//	while(head_b != NULL){
//		temp = (struct Student *)malloc(sizeof(struct Student));
//		temp->num = head_b->num;
//		temp->score = head_b->score;
//		if(temp->num < head_a->num){		//������ͷ
//			temp->next = head_a;
//			head_a = temp;
//		}
//		else if(temp->num > last_a->num){		//������β
//			last_a->next = temp;
//			temp->next = NULL;
//			last_a = temp;
//		}
//		else{							//��������
//			while(temp->num > pa->next->num){
//				pa = pa->next; 
//			}
//			temp->next = pa->next;
//			pa->next = temp;
//		}
//		head_b = head_b->next;
//		pa = head_a;
//	}
//	return head_a;
//}
//
//int main(){
//	struct Student *head_a,*head_b;
//	printf("******��������a******\n");
//	head_a = creat();
//	printf("******��������b******\n");
//	head_b = creat();
//	printf("******����a����******\n");
//	print(head_a);
//	printf("******����b����******\n");
//	print(head_b);
//	head_a = incor(head_a,head_b);	//������b�ϲ�������a��,�����µ�a��ͷ��ֵ��head_a
//	printf("******�ϲ�����������******\n");
//	print(head_a);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	char name[20];
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;		//headָ����ͷp1ָ���½ڵ�p2ָ����β
//	p1 = (struct Student *)malloc(sizeof(struct Student));
//	printf("������ѧ��ѧ�ź����֣�");
//	scanf("%d%s",&p1->num,p1->name);
//	while(p1->num != 0){
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		printf("������ѧ��ѧ�ź����֣�");
//		scanf("%d%s",&p1->num,p1->name);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student *head){
//	printf("ѧ��\t����\n");
//	while(head!=NULL){
//		printf("%d\t%s\n",head->num,head->name);
//		head = head->next;
//	}
//}
//
//struct Student * del_same(struct Student *head_a,struct Student *head_b){
//	struct Student *pa=head_a,*temp;
//	while(head_b != NULL){
//		if(head_b->num == head_a->num){		//ɾ����ͷ
//			temp = head_a;
//			head_a = head_a->next;
//			free(temp);
//		}
//		else{		//ɾ���������β
//			while((pa->next->num != head_b->num) && (pa->next->next != NULL)){		//�ҵ�Ŀ�� �� û�д�ѧ��
//				pa = pa->next;
//			}
//			if((pa->next->num == head_b->num) || (pa->next->next != NULL)){		//�ҵ�Ŀ��ִ����䣬û�ҵ�Ŀ�겻ִ��
//				temp = pa->next;
//				pa->next = pa->next->next;
//				free(temp);
//			}
//		}
//		pa = head_a;
//		head_b = head_b->next;
//	}
//	return head_a;
//}
//
//int main(){
//	struct Student *head_a,*head_b;
//	printf("******��������a******\n");
//	head_a = creat();
//	printf("******��������b******\n");
//	head_b = creat();
//	printf("******����a����******\n");
//	print(head_a);
//	printf("******����b����******\n");
//	print(head_b);
//	head_a = del_same(head_a,head_b);
//	printf("******ɾ��������a����******\n");
//	print(head_a);
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct Student{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	struct Student *next;
//};
//
//struct Student * creat(){
//	struct Student *head=NULL,*p1=NULL,*p2=NULL;
//	p1 = (struct Student *)malloc(sizeof(struct Student));
//	printf("������ѧ�����ݣ�");
//	scanf("%d %s %c %d",&p1->num,p1->name,&p1->sex,&p1->age);
//	while(p1->num != 0){
//		if(head == NULL){
//			head = p1;
//			p2 = p1;
//		}
//		else{
//			p2->next = p1;
//			p2 = p1;
//		}
//		p1 = (struct Student *)malloc(sizeof(struct Student));
//		printf("������ѧ�����ݣ�");
//		scanf("%d %s %c %d",&p1->num,p1->name,&p1->sex,&p1->age);
//	}
//	p2->next = NULL;
//	return head;
//}
//
//void print(struct Student *head){
//	printf("ѧ��\t����\t�Ա�\t����\n");
//	while(head!=NULL){
//		printf("%d\t%s\t%c\t%d\n",head->num,head->name,head->sex,head->age);
//		head = head->next;
//	}
//}
//
//struct Student * del_age(struct Student *head,int age){
//	struct Student *p=head;	//p���������ڵ�
//	if(age == head->age){	//����������ͷ
//		head = head->next;
//	}
//	//����ע�⣺pָ��Ļ���ԭ����head����ΪҪ��֤pָ��ǰ�жϽڵ��ǰһ���ڵ㣬ʹ�ý�����ɾ���Ķ����м�ڵ��ĩβ�ڵ�
//	while(p->next->next != NULL){		//�����������ڶ����ڵ�ѭ����������Ϊp��¼ǰһ���ڵ㣬�������һ���ڵ����������Ҫ��������
//		if(p->next->age == age){
//			p->next = p->next->next;
//		}
//		p = p->next;
//	}
//	if(p->next->age = age){		//����������β
//		p->next = NULL;
//	}
//	return head;
//}
//
//int main(){
//	struct Student *head;
//	int age;
//	printf("***��������***\n");
//	head = creat();
//	printf("***��������***\n");
//	print(head);
//	printf("***ɾ������Ԫ��***\n");
//	printf("���������䣺");
//	scanf("%d",&age);
//	head = del_age(head,age);
//	printf("***ɾ������������***\n");
//	print(head);
//	return 0;
//}

















