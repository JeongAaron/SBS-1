#include <stdio.h> 

#include <stdlib.h>

#include <math.h>

#include <stdio.h>

#include <time.h>

#include <Windows.h>


struct Character
{
	int PlayerHP;
	int PlayerAP;
	int PlayerDP;
};

struct Monster
{
	int MonsterHP;
	int MonsterAP;
	int MonsterDP;
};

void Battle(int* php, int pap, int pdp, int* mhp, int map, int mdp, int x)
{
	int random = rand() % 2;
	if (x == 0 && random == 0)
	{
		if (pdp >= map)
		{
			*php = *php - 1;
		}
		else
		{
			*php = *php - (map - pdp);
		}
		if (mdp >= pap)
		{
			*mhp = *mhp - 1;
		}
		else
		{
			*mhp = *mhp - (pap - mdp);
		}
	}
	else if (x == 0 && random == 1)
	{
		int r = rand() % 2;
		if (r == 0)
		{
			*mhp = *mhp + mdp;
		}
		else
		{
			*mhp = *mhp - (pap + mdp);
		}
	}
	else if (x == 1 && random == 0)
	{
		int d = rand() % 2;
		if (d == 0)
		{
			*php = *php + pdp;
		}
		else
		{
			*php = *php - (map + pdp);
		}
	}
	else
	{
		*php = *php;
		*mhp = *mhp;
	}
}
struct GameObject
{
	char grade;
	int health;
	float attack;
	double defence;

	// ����ü�� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����Ǿ� �ִ�.
};

struct Vector2
{
	float x;
	float y;
};

struct Node
{
	int data;
	struct Node* next;
};

int main()
{

#pragma region ����ü(struct)

	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ��

	// struct GameObject gameObject;
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defence = 3.5f;

	// printf("gameObject�� ��� : %c\n", gameObject.grade);
	// printf("gameObject�� ü�� : %d\n", gameObject.health);
	// printf("gameObject�� ���ݷ� : %f\n", gameObject.attack);
	// printf("gameObject�� ���� : %f\n", gameObject.defence);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����.

#pragma endregion

#pragma region ����Ʈ �е�

	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���� ����Ʈ�� �е����ִ� ����ȭ �۾�

	// struct GameObject object = {'C',30,3.25f,3.5};

	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� ����

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));

	// printf("10�� : %lf\n", pow(10,2));

	// struct Vector2 charactor = {0, 0};

	// struct Vector2 monster = { 5,5 };

	// float x = pow(monster.x - charactor.x, 2);

	// float y = pow(monster.y - charactor.y, 2);

	// float range = sqrt(x + y);

	// if (range <= 3.0f)
	// {
	//	 printf("���� ����");
	// }

	// else
	// {
	//	 printf("�̵� ����");
	// }

#pragma endregion

#pragma region �ڱ� ���� ����ü

	// ����ü ���ο� �ڱ� �ڽ��� �ڷ����� ��� ������ ������ �ִ� ����ü

	// struct Node * node1 = malloc(sizeof(struct Node));
	// struct Node * node2 = malloc(sizeof(struct Node));
	// struct Node * node3 = malloc(sizeof(struct Node));

	// node1->data = 10;
	// node1->next = node2;
	// node2->data = 20;
	// node2->next = node3;
	// node3->data = 30;
	// node3->next = NULL;

	// while (node1 != NULL)
	// {
	// 	printf("%d, ", node1->data);
	// 	node1 = node1->next;
	// }
	// printf("NULL");

	// free(node1);
	// free(node2);
	// free(node3);

#pragma endregion
	int stage = 0;
	int choice = 0;
	srand(time(NULL));
	struct Character character;
	character.PlayerHP = 100;
	character.PlayerAP = 10;
	character.PlayerDP = 5;
	struct Monster monster;
	monster.MonsterHP = 50 + (stage * 10);
	monster.MonsterAP = 10 + (stage * 1);
	monster.MonsterDP = 5 + (stage * 1);
	int php = character.PlayerHP;
	int pap = character.PlayerAP;
	int pdp = character.PlayerDP;
	int mhp = monster.MonsterHP;
	int map = monster.MonsterAP;
	int mdp = monster.MonsterDP;
	printf("%d ", php);
	printf("%d ", pap);
	printf("%d ", pdp);
	printf("%d ", mhp);
	printf("%d ", map);
	printf("%d ", mdp);




}