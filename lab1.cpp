#include "Functions.h"

int main() 
{
	int num = getUserInput();
	string pyramid = createPyramid(num);
	std::cout << pyramid;
	return 0;
}