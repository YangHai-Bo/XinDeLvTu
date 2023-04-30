//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//void printstart(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return;
//}

//float area(float r)
//{
//	float s;
//	s = 3.1415926 * r * r;
//	return s;
//}

//int fact(int n)
//{
//	static int f = 10;
//	f = f * n;
//	return (f);
//}

//void swap(int* p, int* q)
//{
//	int t;
//	t = *p;
//	*p = *q;
//	*q = t;
//	return;
//}

//void max_t1(int a, int b, int c,int *p)
//{
//	if (a < b)
//		a = b;
//	if (a < c)
//		a = c;
//	*p = a;
//	return;
//}

//void fun(int* p,int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		p[i] = p[i] * 10;
//		return;
//}

//int DiG(int p)
//{
//	int s;
//	if (p == 1)
//		s = 1;
//	else
//		s = p * DiG(p - 1);
//	return s;
//}

//struct student
//{
//	char num[11];
//	char name[21];
//	int age;
//	float score;
//};

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps -> num);
//}
#include <stdlib.h>

struct node   //定义链表节点结构体类型
{
	int data;
	struct node* next;
};
typedef struct node NODE;   //定义类型别名


NODE* create() //创建动态链表函数
{
	NODE* p,*q,*head; //指向链表节点
	int t;//暂存输入的成绩
	head = (NODE *)malloc(sizeof(NODE)); //创建头节点
	p = head; //p指向末节点
	while (1)
	{
		printf("请输入数以负数结尾");
		scanf("%d", &t);
		if (t < 0) break;
		q = malloc(sizeof(NODE)); //q指向新节点
		q->data = t;
		p->next = q;//将新节点链接到链表中
		p = q;//p指向新的末节点
	}
	p->next = NULL;//设置链表结束标志
	return head;//返回头指针
	
}

void print(NODE* head)  //遍历链表函数
{
	NODE* p;
	p = head->next; //使得p指向头节点的后继节点
	if (p == NULL)
		printf("链表为空");
	else
	{
		printf("链表中的数据为：\n");
		while (p != NULL)
		{
			printf("->%d", p->data);//输出当前节点数据
			p = p->next;//使得p指向下一个节点
		}
	}
	return;
}

void dele(NODE* head, int t)
{
	NODE* p, * q;
	q = head;
	p = head->next;
	while (p != NULL)
	{
		if (p->data == t)
		{
			q->next = p->next;
			free(p);
			break;
		}
		else
		{
			q = p;
			p = p->next;
		}
	} 
	if (p == NULL)
		printf("没有符合条件的值");
	return;
}

void inserin(NODE *head,int t)
{
	NODE *p,*q,*r;
	r = malloc(sizeof(NODE));
	r ->data = t;
	q = head;
	p = head->next;
	while(p != NULL)
	{
		if(p->data < t)
		{
			q = p;
			p = p->next;
		}
		else
		break;
	}
	q ->next = r;
	r ->next = p;
	return;
}

int main(void)
{
	NODE *h;
	int t;
	h = create();
	print(h);
	
	while(1)//dele删除
	{
		printf("\n");
		printf("请输入你要删除的数\n");
		scanf("%d",&t);
		if(t < 0)  break;
		dele(h,t);
		print(h);
	}
	while(1)//inserin插入
	{
		printf("\n");
		printf("请输入你要添加的数：\n");
		scanf("%d",&t);
		if(t < 0) break;;
		inserin(h,t);
		print(h);
	}


	/*struct student st, *p= &st; 
	gets_s(p->num);
	gets_s(p->name);
	scanf("%d %f", &p->age, &p->score);
	printf("%s %s %d %f", p->num, p->name, p->age, p->score);*/

	 /*struct student st,*p = &st;
	 gets_s((*p).num);
	 gets_s((*p).name);
	 scanf("%d %f", &(*p).age, &(*p).score);
	 printf("%s  %s  %d  %f", (*p).num, (*p).name, (*p).age, (*p).score);*/

	//print1(s);  //传结构体
	//print2(&s); //传地址

	/*struct student st;
	printf("请输入学生信息\n");
		gets_s(st.num);
		gets_s(st.name);
		scanf("%d %f", &st.age, &st.score);
		printf("学号\t名字\t年龄\t成绩\t\n");
		printf("%s\t%s\t%d\t%f\t", st.num, st.name, st.age, st.score);*/

	/*int a;
	a = DiG(5);
	printf("%d", a);*/

	/*int a[10], i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	fun(a,8);
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);*/

	/*int q, w, e,max;
	scanf("%d %d %d", &q, &w, &e);
	max_t1(q, w, e, &max);
	printf("%d", max);*/

	/*int a, b;
	scanf("%d  %d", &a, &b);
	swap(&a, &b);
	printf("%d     %d", a, b);*/

	/*int s;
	s = fact(2);
	printf("%d\n", s);
	s = fact(3);
	printf("%d", s);*/

	/*float r1, r2, s1, s2, s0;
	scanf("%f%f", &r1, &r2);
	s1 = area(r1);
	s2 = area(r2);
	s0 = s1 - s2;
	printf("%f", s0);*/

	/*printstart(5);
	printstart(3);*/
	
	/*char a[200];
	int c = 0, n, i;
	printf("请输入以空格分开的单词：\n");
	gets_s(a);
	n = strlen(a);
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (isalnum(a[i]) && !isalnum(a[i + 1]))
			c++;
	}
	printf("单词数是%d", c);*/

	/*char x;
	int c[100] = {0}, i;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%c", &x);
		c[x -'0'] += 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", c[i]);
	}*/

	//char a[100] = "hello world",t[100];
	//printf("%s\n", a);
	//printf("%d\n", strlen(a));
	//printf("%d\n", sizeof(a));

	//strcpy(t, a);
	//printf("%s\n", t);

	//strcat(t, a);
	//puts(t);

	//printf("%d\n",strcmp(a, t));
	//char a[100], b[100], c[100];
	//gets_s(a);
	//gets_s(b);
	//gets_s(c);
	//if (strcmp(a, b) > 0)
	//	strcpy(a,b);	
	//if (strcmp(a, c) > 0)
	//	strcpy(a, c);
	//puts(a);
	//puts(b);
	//puts(c);

	//int a, b, c;
	//scanf("%d", &a);
	//scanf("%d", &b);
	//scanf("%d", &c);
	//if (a < b)
	//	a = b;
	//if (a < c)
	//	a = c;
	//printf("%d", a);
	
	/*char s[100], t[100];
	int i = 0, j= 0;
	gets_s(s);
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			t[j] = s[i];
			j++;
		}
		i++;
	}
	t[j] = '\0';
	puts(t);*/

	//char s[100], t[100];
	//int i = 0;
	//gets_s(s);
	//while (s[i] != '\0')
	//{
	//	t[i] = s[i];
	//	i++;
	//}
	//t[i] = '\0';
	//puts(t);

	//char a[10];
	//char* p = a;
	//gets_s(a);
	//puts("hello");
	//puts(a);
	//puts(p);

	//char up[10][3] = { "a", "b","c",
	//							 "d","e","e",
	//							 "f","g","h",
	//							 "i" };
	//int i;
	//scanf("%d", &i);
	//printf("%s", up[i]);

	//int a[3][4], (*p)[4],i,j;
	//p = a;
	////p + i  == a 的第i行 
	////*(p + i) + j == a[i][j]
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", *(p + i) + j);
	//	}
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d", *(*(p + i) + j));
	//	}
	//	printf("\n");
	//}

	//int(*p)[4]; //行指针变量
	//int* p[4]; //指针数组

	//char  *p[10] = {"a","b","c","d","e","f","g","h","i","j"};
	//int n;
	//scanf("%d", &n);
	//printf("%s", p[n]);

	//int a[3][4], i, j;
	//int* p[3] = { a[0],a[1],a[2] };
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d",*(p+i)+j);
	//	}
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d", *(*(p+i) + j));
	//	}
	//	printf("\n");
	//}

	//int a[3][4], i, j;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", *(a + i) + j);
	//	}
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%3d", *(*(a + i) + j));
	//	}
	//	printf("\n");
	//}

	//int a[3][4], i, j;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", a[i] + j);
	//	}
	//}
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%3d", *(a[i]+j));
	//	}
	//	printf("\n");
	//}

	/*int a[10], * p, * q;
	for (p = a;p<=a+9;p++)
		scanf("%d", p);
	for (p = a+9; p >= a; p--)
		printf("%d", *p);*/

	//float g[5][4], s[4], a[4];
	//int i, j;
	//for (i = 0; i < 5; i++) // 添加成绩
	//{
	//	printf("请输入同学%d的成绩\n",i);
	//	for (j = 0; j < 4; j++)
	//		scanf("%f", &g[i][j]);
	//}
	//for (j = 0; j < 4; j++) //求平均值
	//{
	//	printf("第%d位%d门课程的平均分是：\n",j,4);
	//	s[j] = 0;
	//	for (i = 0; i < 5; i++)
	//		s[j] += g[i][j];
	//	a[j] = s[j] / 5;
	//	printf("%.2f\n", a[j]);
	//}
	
	return 0;
}
