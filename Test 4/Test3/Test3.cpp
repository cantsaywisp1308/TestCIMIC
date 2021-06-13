#include<stdio.h>
#include<math.h>
#include"Test3.h"

void main() {
	PTBac2 ptBac2;
	ptBac2.Set_a(1);
	ptBac2.Set_b(2);
	ptBac2.Set_c(-3);

	float delta = pow(ptBac2.Get_b(), 2) - 4 * (ptBac2.Get_a()) * (ptBac2.Get_c());
	if (delta < 0) {
		printf("Phuong trinh vo nghiem");
	}
	else if (delta == 0) {
		printf("Phuong trinh co 1 nghiem: ");
		float result = (-(ptBac2.Get_b()) / (2 * ptBac2.Get_a()));
		printf("Result: %f", result);
	}
	else {
		printf("Phuong trinh co 2 nghiem: \r\n");
		float result1 = ((-(ptBac2.Get_b()) - sqrt(delta)) / (2 * ptBac2.Get_a()));
		float result2 = ((-(ptBac2.Get_b()) + sqrt(delta)) / (2 * ptBac2.Get_a()));
		printf("Result 1: %f\r\n", result1);
		printf("Result 2: %f", result2);
	}
}