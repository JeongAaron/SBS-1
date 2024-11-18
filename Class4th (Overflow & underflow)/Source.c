#include <stdio.h> 

void main()
{

#pragma region 오버플로우

	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를 넘어서 연산을 수행하는 과정

	// char character = 129;

	// printf("character 변수의 값 : %d\n", character);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때, 오버플로우가 발생하면 infinity라는 값이 출력

#pragma endregion

#pragma region 언더플로우

	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정

	// char alphabet = -130;

	// printf("alphabet 변수의 값 : %d\n", alphabet);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수 일 때 언더플로우가 발생하면 0이라는 값이 출력

#pragma endregion

#pragma region 시프트 연산자(<< , >>)

	//  비트의 위치를 오른쪽 또는 왼쪽으로 특정한 수 만큼 이동시키는 연산자

	// int x = 10;

	// printf("x의 값을 2번 왼쪽으로 이동한 결과 : %d\n", x << 2);

	// int y = 12;

	// printf("y의 값을 2번 오른쪽으로 이동한 결과 : %d\n", y >> 2);


#pragma endregion

#pragma region 산술 연산자

	// int x1 = 5;
	// const int x3 = 8;

	// int result1 = x1 + x3;
	// int result2 = 20 - x1;
	// int result3 = x3 * 3;
	// int result4 = 3 / 3;
	// int result5 = x3 % x3;

	// printf("result1 변수의 값 : %d\n", result1);
	// printf("result2 변수의 값 : %d\n", result2);
	// printf("result3 변수의 값 : %d\n", result3);
	// printf("result4 변수의 값 : %d\n", result4);
	// printf("result5 변수의 값 : %d\n", result5);

#pragma endregion

	#pragm region 부호 없는 자료형

		// unsigned short mineral = 65535;
		// unsigned int gas = -1;

		// printf("mineral 변수의 값 : %d\n", mineral);
		// printf("gas 변수의 값 : %u\n", gas);
		// printf("gas 변수의 값 : %d\n", gas);

		// unsgined로 변수를 선언하면 %d보다는 %u로 출력하는게 좋다.

#pragma endregion


}