#include<stdio.h>
#include<string.h>
//#include<windows.h>
#include<stdlib.h>

int main(void)
{

    // struct node
    // {
    //     int data;
    //     struct node* next;
    // };
    // typedef struct node lb;

    // lb* create()
    // {
    //     lb *xingde, *mewei, *head;
    //     head = malloc(sizeof(lb));
    //     mewei = head;
    //     while(1)
    //     {
    //         int k;
    //         printf("请输入数组的数：");
    //         scanf("%d",&k); 
    //         if(k < 0) break;
    //         xingde = malloc(sizeof(lb));
    //         mewei->data = k;
    //         mewei->next = xingde;
    //         mewei = xingde;
    //     }
    //     mewei->next = NULL;
    //     return head;
    // }

    // void print(lb* head)
    // {
    //     lb* p;
    //     p = head->next;
    //     if(p == NULL) printf("链表为空");
    //     else 
    //     {
    //         int k;
    //         printf("输入查找的数：");
    //         scanf("%d",&k);
    //         while(p != NULL)
    //         {
    //             int count;
    //             count ++;
    //             if(p->data == k)
    //             {
    //                 printf("找到了，下标为%d",count + 1);
    //                 break;
    //             }     
    //             else
    //             p = p->next;
    //         }
    //     }
    //     if(p == NULL) printf("链表中没有这个数据");
    //     return;
    // }


    // char arr1[] = "welcome to bit !!!!!";
    // char arr2[] = "####################";
    // int left = 0;
    // //int right = sizeof(arr1) / sizeof(arr1[0] - 2);
    // int right = strlen(arr1) - 1;
    // printf("%s  %s\n",arr1,arr2);
    // while(left <= right)
    // {
    //     arr2[left] = arr1[left];
    //     arr2[right] = arr1[right];
    //     printf("%s\n",arr2);
    //     //停留一秒
    //     Sleep(1000);
    //     //执行系统命令的函数，cls是清空屏幕
    //     system("cls");
    //     left++; right--;
    // }


    // lb* h;
    // h = create();
    // print(h);    
    
 
    

    //在一个有序数组查找一个数--遍历整个数组
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int k = 7;
    // int sz = sizeof(arr) / sizeof(arr[0]);
    // for(int i = 0; i < sz; i++)
    // {
    //     if(k == arr[i])
    //     {
    //         printf("找到了这个数，下标是%d",i);
    //         break;
    //     }
    //     if(i == sz)
    //     printf("找不到");
    // }
    

    // 2的阶乘变成了1的阶乘乘于2，3的阶乘变成了2的阶乘乘于3
    // int n = 0;
    // int ret = 1;
    // int sum = 0;
    // for(n = 1; n <= 3; n++)
    // {
    //     ret = ret * n;
    //     sum += ret;
    // }
    // printf("%d",sum); 

    // 1-3的阶乘相加，先算1的阶乘在算2的阶乘然后相加然后3的阶乘然后相加
    // int n = 0;
    // int ret = 1;
    // int sum = 0;
    // for(n = 1; n<= 3;n++)
    // {
    //     ret = 1;
    //     for(int i = 1; i <= n; i++)
    //     {
    //         ret *= i;
    //     }
    //     sum += ret;
    // }
    // printf("%d",sum); 

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d",i);
    // }
    
    // int ch = 0;
    // while((ch = getchar()) != EOF)
    // {
    //     if (ch < '0' || ch > '9')
    //         continue; //只输出字符0-9之间的字符,其余字符皆跳过
    //     putchar(ch);
    // }

    // int ret = 0;
    // char password[20] = {0};
    // printf("请输入密码\n");
    // scanf("%s",password);
    // fflush(stdin);//fflush刷新缓冲区  stdin输入缓冲区  stdout输出缓冲区
    // printf("请确认(Y/N)\n");
    // ret = getchar();
    // if(ret == 'Y') 
    //     printf("确认成功");
    // else
    //     printf("放弃确认");

    // int ch = 0;
    // while ((ch = getchar()) != EOF) 
    //  //EOF - end of file 文件结束标志 ctrl +z 退出
    //     putchar(ch);

    // int n = 1,m = 2;
    // switch(n)
    // {
    //     case 1:m++;
    //     case 2:n++;
    //     case 3:
    //         switch(n)
    //         {
    //             case 1:n++;
    //             case 2:m++;n++;break;
    //         }
    //     case 4:m++;
    //         break;
    //     default:
    //         break;
    // }
    // printf("m = %d  n = %d",m,n);

    // int day = 0;
    // scanf("%d",&day);
    // switch (day)
    // {
    // case 1:printf("星期一");break;
    // case 2:printf("星期二");break;
    // case 3:printf("星期三");break;
    // case 4:printf("星期四");break;
    // case 5:printf("星期五");break;
    // case 6:printf("星期六");break;
    // case 7:printf("星期七");break;
    // default:
    //     printf("输入错误");
    // }

    return 0;
}