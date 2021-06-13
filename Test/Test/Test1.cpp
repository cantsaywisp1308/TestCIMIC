#include<stdio.h>
#include<stdint.h>

int a;
char* arr;

void hex(int n, char* arr) 
{

	int i = 0;
	while (n != 0)
	{
		int mod = n % 16;
		n = n / 16;
		switch (mod)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			arr[i] = mod;
			break;
		case 10:
			arr[i] = 'a';
			break;
		case 11:
			arr[i] = 'b';
			break;
		case 12:
			arr[i] = 'c';
			break;
		case 13:
			arr[i] = 'd';
			break;
		case 14:
			arr[i] = 'e';
			break;
		case 15:
			arr[i] = 'f';
			break;
		default:
			break;
		}
		i++;
	}
	arr[i] = '\0';	
	for (int index = 0; index < i / 2; index++) {
		int temp = arr[index];
		arr[index] = arr[i - index - 1];
		arr[i - index - 1] = temp;
	}
	printf("High byte: %s", arr[0]);

	
	
}

void main() {
	printf("input a: ");
	scanf_s("%d", &a);
	//printf("0x%x", a);
	hex(a,arr);
	
}
