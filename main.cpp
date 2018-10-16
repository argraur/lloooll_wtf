/*
	Составить описание класса прямоугольников со сторонами,
	параллельными осям координат.
	Предусмотреть возможность перемещения прямоугольников на плоскости,
	изменения размеров, построения наименьшего прямоугольника,
	содержащего два заданных прямоугольника, и прямоугольника,
	являющегося общей частью (пересечением) двух прямоугольников.
	Написать программу, демонстрирующую работу с этим классом.
	Программа должна содержать меню, позволяющее осуществить проверку всех методов класса.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Rectangle.cpp"

void InputToRect(Rectangle *A) {
        for ( int i = 0; i < 4; i++) {
                int tmp, tmp1;
                std::cin >> tmp >> tmp1;
                A -> Input(i, tmp, tmp1);
        }
}

int main() {
	Rectangle *A = new Rectangle;
	Rectangle *B = new Rectangle;
	InputToRect(A);
	InputToRect(B);
	std::cout << "In A" << std::endl;
	A -> Out();
	std::cout << "In B" << std::endl;
	B -> Out();
}
