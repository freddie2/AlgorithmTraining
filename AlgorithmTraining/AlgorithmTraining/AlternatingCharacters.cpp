#include <string>

// Complete the alternatingCharacters function below.
int alternatingCharacters(std::string s) 
{
	int count = 0;
	for(auto i = 0; i < s.size(); ++i)
	{
		if(i == s.size())
		{
			return count;
		}

		if(s[i] == s[i+1])
		{
			count++;
		}
	}

	return count;
}

int main()
{
	std::string str = "AAABBB";

	const auto result = alternatingCharacters(str);
	return 0;
}