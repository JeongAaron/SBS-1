#include <stdio.h> 

#include <stdlib.h>

#include <math.h>

struct GameObject
{
	char grade;
	int health;
	float attack;
	double defence;

	// 구조체의 경우 멤버 변수의 순서에 따라 메모리의 크기가 다르게 설정될 수 있으며,
	// 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성되어 있다.
};

struct Vector2
{
	float x;
	float y;
};

struct Node
{
	int data;
	struct Node * next;
};

int main()
{

#pragma region 구조체(struct)

	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것

	// struct GameObject gameObject;
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defence = 3.5f;

	// printf("gameObject의 등급 : %c\n", gameObject.grade);
	// printf("gameObject의 체력 : %d\n", gameObject.health);
	// printf("gameObject의 공격력 : %f\n", gameObject.attack);
	// printf("gameObject의 방어력 : %f\n", gameObject.defence);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
	// 구조체 내부에 있는 데이터를 초기화할 수 없다.

#pragma endregion

#pragma region 바이트 패딩

	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
	// 컴파일러가 레지스터의 블록에 맞춰 바이트를 패딩해주는 최적화 작업

	// struct GameObject object = {'C',30,3.25f,3.5};

	// printf("GameObject의 크기 : %d\n", sizeof(object));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에
	// 크기가 가장 큰 자료형의 배수가 되도록 정렬

#pragma endregion

#pragma region 두 점 사이의 거리

	// printf("100의 제곱근 : %lf\n", sqrt(100));

	// printf("10² : %lf\n", pow(10,2));

	// struct Vector2 charactor = {0, 0};

	// struct Vector2 monster = { 5,5 };
	
	// float x = pow(monster.x - charactor.x, 2);
	
	// float y = pow(monster.y - charactor.y, 2);
	
	// float range = sqrt(x + y);
	
	// if (range <= 3.0f)
	// {
	//	 printf("공격 상태");
	// }

	// else
	// {
	//	 printf("이동 상태");
	// }

#pragma endregion

#pragma region 자기 참조 구조체

	// 구조체 내부에 자기 자신의 자료형을 멤버 변수로 가지고 있는 구조체

	struct Node * node1 = malloc(sizeof(struct Node));
	struct Node * node2 = malloc(sizeof(struct Node));
	struct Node * node3 = malloc(sizeof(struct Node));

	node1->data = 10;
	node1->next = &node2;
	node2->data = 20;
	node2->next = &node3;
	node3->data = 30;
	node3->next = NULL;

	int* currentNode = no

	


#pragma endregion

}