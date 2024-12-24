#ifndef ANIMAL_H_
#define ANIMAL_H_

// Animal 기본 클래스
class Animal
{
public:
	virtual void makeSound() = 0;
};


// Dog 서브 클래스
class Dog :public Animal
{
public:
	void makeSound();
};


// Cat 서브 클래스
class Cat :public Animal
{
	void makeSound();
};


// Cow 서브 클래스
class Cow :public Animal
{
	void makeSound();
};
#endif
