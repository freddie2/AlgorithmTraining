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

	// anagram �Ǻ��� : string�� �� ���ĺ� ���� ������ �����س��� �����񱳸� �ϸ��

	return 1;
}

int main()
{
	int result = sherlockAndAnagrams("ifailuhkqq");

	return 0;
}