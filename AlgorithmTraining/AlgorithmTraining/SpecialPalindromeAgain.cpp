#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

bool IsPalindrome(const std::string& str)
{
	if(str.size() == 1)
	{
		return true;
	}

	if(std::count(str.begin(), str.end(), str.front()) == str.size())
	{
		return true;
	}
	
	if(str.front() == str.back())
	{
		const auto substr = str.substr(1, str.size() - 2);
		return IsPalindrome(substr);
	}

	return false;
}

// Complete the substrCount function below.
long substrCount(int n, std::string s) 
{
	size_t result = 0;
	char ch = '0';
	char oldCh = '0';
	size_t counter = 0;
	size_t oldCounter = 0;
	size_t leftCounter = 0;
	bool special = false;
	std::for_each(s.begin(), s.end(),
		[&result, &ch, &oldCh, &counter, &oldCounter, &leftCounter, &special](char& val) {
		if(val == ch) ++counter;
		else
		{
			if(special)
				result += counter < leftCounter ? counter : leftCounter;
			special = counter == 1 && val == oldCh;
			if(special)
				leftCounter = oldCounter;
			result += counter * (counter + 1) / 2;
			oldCh = ch;
			ch = val;
			oldCounter = counter;
			counter = 1;
		}
	});
	if(special)
		result += counter < leftCounter ? counter : leftCounter;
	result += counter * (counter + 1) / 2;
	return result;
}

int main()
{
	int n = 4;
	std::string str = "abcbaba";
	const auto result = substrCount(n, str);
	return 0;
}