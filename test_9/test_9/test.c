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

































































