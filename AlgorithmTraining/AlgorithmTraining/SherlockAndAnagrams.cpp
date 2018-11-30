#include <string>
#include <vector>

// anagram 판별 : 알파벳 개수 체크
bool Anagram(std::string str1, std::string str2)
{
	int first[26] = { 0 }, second[26] = { 0 }, c = 0;

	while(str1[c] != '\0') 
	{
		first[str1[c] - 'a']++;
		c++;
	}
	c = 0;
	while(str2[c] != '\0') 
	{
		second[str2[c] - 'a']++;
		c++;
	}

	for(c = 0; c < 26; c++) 
	{
		if(first[c] != second[c])
			return false;
	}

	return true;
}

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(std::string s) 
{
	int anagram = 0;

	auto size = s.size();

	// substr 구할때 같은 길이의 substr만 구한다
	for(auto i = 1; i < s.size(); ++i)
	{
		for(auto j = 0; j < s.size() - i; ++j)
		{
			const auto substr1 = s.substr(j, i);
			for(auto k = j + 1; k < s.size() - i + 1; ++k)
			{
				const auto substr2 = s.substr(k, i);
				if(Anagram(substr1, substr2))
				{
					anagram++;
				}
			}
		}
	}

	return anagram;
}

int main()
{
	int result = sherlockAndAnagrams("ifailuhkqq");

	return 0;
}