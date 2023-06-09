#include<stdio.h>
#include<stdlib.h>
#include"Linklist.h"

int main()
{
	Linklist head=NULL;
	
	int flag = 0;//判断是否有链表存在
	while (OK)
	{
		system("cls");
		printf(">>>1.初始化          \n");
		printf(">>>2、生成           \n");
		printf(">>>3、销毁           \n");
		printf(">>>4、插入           \n");
		printf(">>>5、删除           \n");
		printf(">>>6、查找           \n");
		printf(">>>7、反转链表（递归)\n");
		printf(">>>8、反转（迭代） \n");
		printf(">>>9、链表的奇偶调换 \n");
		printf(">>>10、找到链表中点  \n");
		printf(">>>11、判断是否成环  \n");
		printf(">>>12、链表表长      \n");
		printf(">>>13、遍历链表      \n");
		printf(">>>13、退出          \n");



		printf("请输入你的选项");
		switch (InputNumber())
		{
		case 1:
			if (InitList(&head))
				printf("初始化成功");
			flag = 1;
			break;
		case 2:
			Create(&head);
			flag = 1;
			break;
		case 3:
			if (flag)
			{
				DestroyList(&head);
				flag = 0;
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 4:
			if (flag)
			{
				int i;//插入的位置
				Elemtype data;//插入的数据
				printf("请输入插入的位置");
				scanf_s("%d", &i);
				printf("请输入要插入的数据");
				scanf_s("%d", &data);
				if (InsertList(&head, i, data))
				{
					printf("插入成功");
				}
				else
				{
					printf("插入失败，请重新输入插入的位置");
					scanf_s("%d", &i);
					InsertList(&head, i, data);


				}
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 5:
			if (flag)
			{
				Elemtype x;
				printf("请输入要删除的位置");
				scanf_s("%d", &x);
				if (DeleteList(&head, x))
				{
					printf("删除成功");
				}
				else
				{
					printf("删除失败，请重新输入位置");
					scanf_s("%d", &x);
				}
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 6:
			if (flag)
			{
				int num;
				printf("请输入你要查找的数据");
				scanf_s("%d", &num);
				if (SearchList(head, num))
				{
					printf("该数存在\n");
				}
				else
				{
					printf("该数不存在\n");
				}
				break;
			}
		case 7:
			if (flag)
			{
				ReverseList(&head);
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 8:
			if (flag)
			{
				 ReverseList_literated(&head);
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 9:
			if (flag)
			{
				int x = Listlength(head);
				ExchangeOddEven(&head, x);
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 10:
			if (flag)
			{
				printf("链表中间存储的值为%d/n", (FindMidNode(head)->data));
			}
			else
			{
				printf("没有链表存在");
			}
			break;
		case 11:
			if (flag)
			{
				if (IsloopList(head))
				{
					printf("链表成环");
				}
				else
					printf("链表不成环");

			}
			else
			{
				printf("没有链表存在");
			}
		case 12:
			if (flag)
			{
				int length = Listlength(head);
				printf("表长为%d", length);
			}
		case 13:
			if (flag)
			{
				TraverseList(head);
				
			}
			else
			{
				printf("没有链表存在");
			}
			break;

        }
	}
	
	return 0;
	
}
