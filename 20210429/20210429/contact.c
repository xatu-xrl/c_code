#include"contact.h"

void add_contact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", pc->data[pc->sz].name);
		printf("������绰��>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pc->sz].addr);
		printf("������qq��>");
		scanf("%s", pc->data[pc->sz].qq);
		printf("�������Ա�>");
		scanf("%s", pc->data[pc->sz].sex);
		printf("���������䣺>");
		scanf("%d", &(pc->data[pc->sz].age));
		pc->sz++;
		printf("��ӳɹ�\n");
	}
}

void show_contact(Contact* pc)
{
	int i = 0;
	printf("%10s %12s %20s %5s %12s %5s\n",
		"����","�绰","��ַ","����","qq","�Ա�");
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

static find_peo_by_name(Contact* pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strmp(name, pc->data[i].name == 0))
		{
			return i;//�ҵ� �����±�
		}
	}
	return -1;//�Ҳ���
}

void del_contact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("��Ǹ��ͨѶ¼Ϊ��\n");
	}
	else
	{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������\n");
	scanf("%s", name);
		//1.�ҵ���ϵ�˵�λ��
		int pos = find_peo_by_name(pc,name);
		if(pos == -1)
		{
			printf("ɾ�����˲�����\n");
		}
		else
		{
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			pritf("ɾ���ɹ�\n");
		}
	}
}

void search_contact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ��˭\n");
	scanf("%s",name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("���޴���");
	}
	else
	{
		printf("%10s %12s %20s %5s %12s %5s\n",
			"����", "�绰", "��ַ", "����", "qq", "�Ա�");

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
	printf("������Ҫ�޸�����\n");
	scanf("%s", name);
	int pos = find_peo_by_name(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("�������µ����֣�>");
		scanf("%s", pc->data[pos].name);
		printf("������绰��>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��>");
		scanf("%s", pc->data[pos].addr);
		printf("������qq��>");
		scanf("%s", pc->data[pos].qq);
		printf("�������Ա�>");
		scanf("%s", pc->data[pos].sex);
		printf("���������䣺>");
		scanf("%d", &(pc->data[pos].age));
	}
}

void sort_contact(Contact* pc)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 1;//�����Ѿ�����
		for (j = 0; j < pc->sz-i-1; j++)
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