#include <string>

// Complete the makeAnagram function below.
int makeAnagram(std::string a, std::string b) 
{
	int count = 0;

	int first[26] = { 0 }, second[26] = { 0 };

	for(auto& iter : a)
	{
		first[iter - 'a']++;
	}

	for(auto& iter : b)
	{
		second[iter - 'a']++;
	}

	for(auto i = 0; i < 26; ++i)
	{
		if(first[i] != second[i])
			count += std::abs(first[i] - second[i]);
	}

	return count;
}

int main()
{
	std::string a = "cdde";
	std::string b = "abc";

	const auto result = makeAnagram(a, b);

	return 0;
}