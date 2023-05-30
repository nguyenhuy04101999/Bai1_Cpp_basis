#include <iostream>


/**
 * Tinh so Fibonacci thu n
 */

int fibonacci(int n) {
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	do
	{
		std::cout << "Nhap so nguyen n(n>0): ";
		std::cin >> n;
		system("cls");
	} while (n < 1);
	std::cout << "n so dau tien cua day so Fibonacci: ";
	for (int i = 0; i < n; i++)
	{
		std::cout << fibonacci(i) << " ";
	}
	return 0;
}