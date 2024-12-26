#include <iostream>
#include "Zoo.h"
using namespace std;

void Zoo::addAnimal(Animal* animal)
{
	// �������� �� ���� �ʾ��� ��
	if (animalCount < 10)
	{
		animals[animalCount] = animal; // ���� �߰�
		animalCount++; // ������ ������Ʈ
		cout << "������ �߰��Ǿ����ϴ�." << endl;
	}
	else // �� á�� ��
	{
		cout << "�������� �� ���� ������ �߰��� �� �����ϴ�." << endl; // ���� �޽��� ���
	}
}

void Zoo::performActions()
{
	for (int i = 0; i < animalCount; i++)
	{
		animals[i]->makeSound(); // �ൿ �ϱ�
	}
}

Zoo::~Zoo()
{
	// ��� ���� �޸� ����
	
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		animals[i] = nullptr;
	}
}