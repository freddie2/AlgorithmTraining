#include <iostream>
#include <vector>
#include <algorithm>

// Complete the rotLeft function below.
std::vector<int> rotLeft(std::vector<int> a, int d) 
{
	std::rotate(a.begin(), a.begin() + d, a.end());
	return a;
}

int main()
{
	std::vector<int> a = { 1,2,3,4,5 };
	int d = 4;
	std::vector<int> result = rotLeft(a, d);

	return 0;
}