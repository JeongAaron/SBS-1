#include <stdio.h> 

#include <stdarg.h>

#include "Calculator.h"

void function()
{
	printf("Function...\n");
}

void position(int x, int y)
{
	printf("x의 값 : %d\n", x);
	printf("y의 값 : %d\n", y);
}

int compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}

	else if (x == y)
	{
		return 0;
	}

	else
	{
		return -1;
	}
}

int swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

inline void process(float progress)
{
	printf("progress : %f\n", progress);

	// 인라인 함수는 컴파일 시점에 확장되며,
	// 컴파일 시 인라인 함수로 선언하더라도 상황에 따라
	// 일반 함수로 변한되기도 한다.
}

void recursive(int count)
{
	printf("recursive function : %d\n", count);

	count = count - 1;

	if (count > 0)
	{
		recursive(count);
	}
}

void dynamicfunction(int count, ...)
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터
	va_list list;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정
	va_start(list, count);

	for (int i = 0; i < count; i++)
	{
		// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져온다.
		printf("%d ", va_arg(list, int));
	}

	printf("\n");

	// va_end : 가변 인수 포인터가 끝났을 때 NULL로 초기화 한다.
	va_end(list);
}

float (*fuctionPointer)(float, float);

void main()
{

#pragma region 함수

	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합

	// function();

	// function();

	// function();

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없다.

#pragma endregion

#pragma region 매개 변수

	// 함수의 정의에서 전달받은 인수를
	// 함수 내부로 전달하기 위해 사용하는 변수

	// position(2, 3);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 사라진다.

	// printf("compare 함수의 값 : %d\n", compare(5.75f, 8.125f));

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께 정의할 수 있으며,
	// 여러 개의 매개 변수를 생성하여 사용할 수 있다.

#pragma endregion

#pragma region 인수

	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값

	// int a = 10;

	// int b = 20;

	// int temporary = a;

	// a = b;

	// b = temporary;

	// printf("a의 값 : %d\n", a);
	// printf("b의 값 : %d\n", b);.

	// swap(&a, &b);

	// printf("a의 값 : %d\n", a);
	// printf("b의 값 : %d\n", b);

	// 인수의 경우 함수에 있는 매개 변수의 수에 따라 전달할 수 있는 인수의 수가 결정되며,
	// 값을 전달하는 인수와 값을 전달받는 매개변수의 자료형이 서로 일치해야 한다.

#pragma endregion

#pragma region 인라인 함수

	// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 함수

	// process(46.75f);

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에
	// 실행 파일의 크기가 커지게 된다.

#pragma endregion

#pragma region 재귀 함수

	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수.

	//  recursive(5);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생하게 된다.

#pragma endregion

#pragma region 가변 길이 매개 변수

	// 매개 변수로 들어오는 값의 개수와 상관 없이
	// 동적으로 인수를 받을 수 있도록 설정되어 있는 매개 변수

	// dynamicfunction(1, 10, 20, 30);

#pragma endregion

#pragma region 함수 포인터

	// 함수의 주소 값을 저장하고 가리킬 수 있는 변수

	fuctionPointer = Add;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Subtract;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Multiply;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Divide;

	printf("%f\n", fuctionPointer(5, 5));

	// 함수 포인터는 함수의 반환형과 매개 변수의 형태가 일치해야 한다.

#pragma endregion

}