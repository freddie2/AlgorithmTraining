#include <vector>
#include <algorithm>

// Complete the sockMerchant function below.
int sockMerchant(int n, std::vector<int> ar) 
{
	int pairCount = 0;
	std::vector<int> calculated;

	// time complexity : n^2, space complexity : depends on duplicated values
	for(auto i = 0; i < ar.size(); ++i)
	{
		const auto value = ar[i];

		if(std::find(calculated.begin(), calculated.end(), value) == calculated.end())
		{
			int valueCount = 0;

			for(const auto& iter : ar)
			{
				if(iter == value)
				{
					valueCount++;
				}
			}

			calculated.emplace_back(value);
			pairCount += valueCount / 2;
		}		
	}

	return pairCount;
}

int sockMerchant2(int n, std::vector<int> ar)
{
	int pairCount = 0;

	if(ar.size() == 1)
	{
		return 0;
	}

	// heap or quick sort : nlogn
	std::sort(ar.begin(), ar.end());

	int valueCount = 0;
	for(auto i = 0; i < ar.size(); ++i)
	{
		if(i == 0) valueCount = 1;
		else
		{
			if(ar[i] == ar[i-1])
			{
				valueCount++;
			}
			else
			{
				pairCount += valueCount / 2;
				valueCount = 1;
			}
		}
	}

	pairCount += valueCount / 2;

	return pairCount;
}

int main()
{
	const auto n = 10;
	const std::vector<int> ar = { 1,1,3,1,2,1,3,3,3,3 };

	int result = sockMerchant2(n, ar);

	return 0;
}
