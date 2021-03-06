#include"contact.h"
void Init_Contact(Contact* pc)
{
	pc->sz = 0;
	pc->capacity = DEFAUL_SZ;
	pc->data =(PeoInfo*) malloc(DEFAUL_SZ*sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact::malloc");
		return;
	}
}
//void add_contact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("通讯录满了\n");
//	}
//	else
//	{
//		printf("请输入名字：>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("请输入电话：>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("请输入地址：>");
//		scanf("%s", pc->data[pc->sz].addr);
//		printf("请输入qq：>");
//		scanf("%s", pc->data[pc->sz].qq);
//		printf("请输入性别：>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("请输入年龄：>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		pc->sz++;
//		printf("添加成功\n");
//	}
//}

void destory_contact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void add_contact(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//增加容量
		PeoInfo* ptr = realloc(pc->data,(pc->capacity + 2)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC;//注意容量也要发生改变
			printf("增容成功");
		}
		else
		{
			perror(" add_contact::realloc");
			return;
		}
	}

		printf("请输入名字：>");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入电话：>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址：>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("请输入qq：>");
		scanf("%s", pc->data[pc->sz].qq);
		printf("请输入性别：>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入年龄：>");
		scanf("%d", &(pc->data[pc->sz].age));
		pc->sz++;
		printf("添加成功\n");
	
}


void show_contact(Contact* pc)
{
	int i = 0;
	printf("%10s %12s %20s %5s %12s %5s\n",
		"名字", "电话", "地址", "年龄", "qq", "性别");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s %12s %20s %5d %12s %5s\n",
			pc->data[i],
			pc->data[i].tele,
			pc->data[i].addr,
			pc->data[i].age,
			pc->data[i].qq,
			pc->data[i].sex);
	}
}

static find_peo_by_name(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strmp(name, pc->data[i].name == 0))
		{
			return i;//找到 返回下标
		}
	}
	return -1;//找不到
}

void del_contact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("抱歉，通讯录为空\n");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除名字\n");
		scanf("%s", name);
		//1.找到联系人的位置
		int pos = find_peo_by_name(pc, name);
		if (pos == -1)
		{
			printf("删除的人不存在\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz - 1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			pritf("删除成功\n");
		}
	}
}

void search_contact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("输入要找谁\n");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("查无此人");
	}
	else
	{
		printf("%10s %12s %20s %5s %12s %5s\n",
			"名字", "电话", "地址", "年龄", "qq", "性别");

		printf("%10s %12s %20s %5d %12s %5s\n",
			pc->data[pos],
			pc->data[pos].tele,
			pc->data[pos].addr,
			pc->data[pos].age,
			pc->data[pos].qq,
			pc->data[pos].sex);
	}
}

void modify_contact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改名字\n");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("请输入新的名字：>");
		scanf("%s", pc->data[pos].name);
		printf("请输入电话：>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址：>");
		scanf("%s", pc->data[pos].addr);
		printf("请输入qq：>");
		scanf("%s", pc->data[pos].qq);
		printf("请输入性别：>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入年龄：>");
		scanf("%d", &(pc->data[pos].age));
	}
}

void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 1;//假设已经有序
		for (j = 0; j < pc->sz - i - 1; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}