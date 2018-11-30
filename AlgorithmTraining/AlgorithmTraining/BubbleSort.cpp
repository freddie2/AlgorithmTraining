#include <vector>
#include <iostream>

// Complete the countSwaps function below.
void countSwaps(std::vector<int> a) 
{
	int count = 0;

	for(auto i = 0; i < a.size(); ++i)
	{
		for(auto j = 0; j < a.size() - 1; ++j)
		{
			if(a[j] > a[j+1])
			{
				std::swap(a[j], a[j + 1]);
				count++;
			}
		}
	}

	std::cout << "Array is sorted in " << count << " swaps." << '\n';
	std::cout << "First Element: " << a.front() << '\n';
	std::cout << "Last Element: " << a.back() << '\n';
}

int main()
{
	std::vector<int> vec = { 1,2,3 };

	countSwaps(vec);

	return 0;
}