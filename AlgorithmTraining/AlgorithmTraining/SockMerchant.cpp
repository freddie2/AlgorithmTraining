//  John works at a clothing store.He has a large pile of socks that he must pair by color for sale.Given an array of integers representing the color of each sock, 
//  determine how many pairs of socks with matching colors there are.
//
//  For example, there are  socks with colors.There is one pair of color  and one of color.There are three odd socks left, one of each color.The number of pairs is .
//
//  Function Description
//
//  Complete the sockMerchant function in the editor below.It must return an integer representing the number of matching pairs of socks that are available.
//
//  sockMerchant has the following parameter(s) :
//
//  n: the number of socks in the pile
//	ar : the colors of each sock
//	Input Format
//
//	The first line contains an integer, the number of socks represented in .
//	The second line contains  space - separated integers describing the colors  of the socks in the pile.
//
//	Constraints
//
//	where
//	Output Format
//
//	Print the total number of matching pairs of socks that John can sell.
//
//	Sample Input
//
//	9
//	10 20 20 10 10 30 50 10 20
//	Sample Output
//
//	3

#include <iostream>
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
