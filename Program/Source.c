#include <stdio.h> 

void main()
{

#pragma region 배열

	// 같은 자료형의 변수들로 이루어진 유한 집합
	
	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 된다.
	
	// int array[3];
	
	// printf("array 자료형의 크기 : %u\n", sizeof(array));
	
	// int size = sizeof(array) / sizeof(int);
	
	// for (int y = 0; y <= size - 1; y++)
	// {
	// 	array[y] = (y + 1) * 10;
	// }
	
	// for (int i = 0; i <= size-1; i++)
	// {
	// 	printf("aaray[%d] = %d\n", i, array[i]);
	// }

	// 배열의 경우 첫 번째 원소는 0부터 시작

	// float list [] = { 1.25f,2.75f,3.575f,4.895f };

	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("list[%d]=%f\n", i, list[i]);
	// }

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한 요소에 따라
	// 배열의 크기가 결정된다.

	// float * pointer = list;

	// pointer = pointer + 2;

	// *pointer = 7.875f;

	// printf("%f\n", *pointer);
	// printf("%p\n", pointer);
	// printf("%p\n", &list[2]);

	// 배열은 연속적인 메모리 공간을 가지며,
	// 배열의 이름은 배열의 시작주소를 가리킨다.

#pragma endregion

#pragma region 문자열

	// 연속적인 메모리 공간에 저장된 문자 변수의 집합

	// const char* string = "Queue";

	// printf("string 변수의 값 : %s\n", string);

	// string = "stack";

	// printf("string 변수의 값 : %s\n", string);

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며,
	// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에
	// 문자열의 값을 변경할 수 없다.

	// char word[] = { "Darkness" };

	// char content[] = { "Github" };

	// printf("string 변수의 크기 : %d\n", sizeof(word));

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// 마지막에 문자열의 끝을 알려주는 제어문자가 추가된다.

	// word[4] = '\0';

	// printf("word 배열의 값 : %s\n", word);

	// word = "content"(불가)

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력된다.

#pragma endregion

#pragma region ASCII 코드

	// 미국 ANSI 에서 표준화한 정보 교환용 7 bit 부호 체계.

	// char alphabet = 65;

	// for (int i = 0; i < 26; i++)
	// {
	//    printf("%c\n", 'A' + i);
	// }

#pragma endregion

}