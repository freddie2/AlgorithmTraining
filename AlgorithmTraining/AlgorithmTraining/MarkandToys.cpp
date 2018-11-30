#include <vector>
#include <algorithm>

// Complete the maximumToys function below.
int maximumToys(std::vector<int> prices, int k) 
{
	std::sort(prices.begin(), prices.end());
	int count = 0;
	int price = 0;
	for(const auto& iter : prices)
	{
		price += iter;
		if(price <= k)
		{
			count++;
		}
		else
		{
			return count;
		}
	}

	return prices.size();
}

int main()
{
	int k = 50;
	std::vector<int> prices = { 1,12,5,111,200,1000,10 };

	const auto result = maximumToys(prices, k);

	return 0;
}