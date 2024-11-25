#include <stdio.h> 

void main()
{

#pragma region 배열

	// 같은 자료형의 변수들로 이루어진 유한 집합
	
	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 된다.
	
	int array[3];

	printf("array 자료형의 크기 : %u\n", sizeof(array));

	int size = sizeof(array) / sizeof(int);

	for (int y = 0; y <= size - 1; y++)
	{
		array[y] = (y + 1) * 10;
	}

	for (int i = 0; i <= size-1; i++)
	{
		printf("aaray[%d] = %d\n", i, array[i]);
	}

	// 배열의 경우 첫 번째 원소는 0부터 시작

#pragma endregion


}