#include <iostream>
#include <cstdlib>
#include <cmath>

struct Dots {
	int x;
	int y;
};

class Rectangle {
private:
	Dots R[4];
public:
	void Move();
	void Input(int Dot, int x, int y) {
		R[Dot].x = x;
		R[Dot].y = y;
	};
	void Out() { for (int i = 0; i < 4; i++) std::cout << "Dot " << i + 1 << " " << "(" << R[i].x << ";" << R[i].y << ")" << std::endl;}
	void Move(int x, int y) { for (int i = 0; i < 4; i++) {
		R[i].x += x;
		R[i].y += y;
	}}
};
