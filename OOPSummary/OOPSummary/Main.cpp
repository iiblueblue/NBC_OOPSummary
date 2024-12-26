#include <cstdlib>
#include <ctime>
#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
using namespace std;


// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal()
{
	int randomNum = rand() % 3;
	switch (randomNum)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	default:
		return nullptr; break;
	}
}


int main()
{
	// Animal 타입의 포인터 배열 선언
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	// 각 동물의 울음소리(반복문)
	for (int i = 0; i < 3; i++)
	{
		animals[i]->makeSound();
	}

	// 메모리 해제
	for (int i = 0; i < 3; i++)
	{
		delete animals[i];
	}

	// 랜덤으로 동물원에 동물 추가하기
	Zoo my_zoo;
	srand(time(0)); // 난수 생성
	for (int i = 0; i < 10; i++)
	{
		my_zoo.addAnimal(createRandomAnimal());
	}

	// 모든 동물이 행동하기
	my_zoo.performActions();
}