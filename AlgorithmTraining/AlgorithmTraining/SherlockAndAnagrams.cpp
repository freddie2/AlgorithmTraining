#include <string>
#include <vector>

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(std::string s) 
{
	std::vector<std::string> substr;
	for(auto i = 0; i < s.size(); ++i)
	{
		for(auto j = 1; j < s.size() - i; ++j)
		{
			substr.emplace_back(s.substr(i, j));
		}
	}

	// anagram 판별법 : string의 각 알파벳 별로 개수를 저장해놓고 개수비교만 하면됨

	return 1;
}

int main()
{
	int result = sherlockAndAnagrams("ifailuhkqq");

	return 0;
}