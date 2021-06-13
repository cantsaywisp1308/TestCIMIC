#include<stdio.h>

class PTBac2 {
private:
	float a;
	float b;
	float c;
public:
	void Set_a(float value);
	void Set_b(float value);
	void Set_c(float value);

	float Get_a();
	float Get_b();
	float Get_c();
};

void PTBac2::Set_a(float value) {
	a = value;
}

void PTBac2::Set_b(float value) {
	b = value;
}

void PTBac2::Set_c(float value) {
	c = value;
}

float PTBac2::Get_a() {
	return a;
}

float PTBac2::Get_b() {
	return b;
}

float PTBac2::Get_c() {
	return c;
}
