#include <string>
#include <vector>

// Complete the twoStrings function below.
std::string twoStrings(std::string s1, std::string s2) 
{
	// ��� substr�� ���� �ʿ� ����, �� ���ڸ� ���ϸ� �ȴ�.
	for(auto& iter : s1)
	{
		const auto found = s2.find(iter);
		if(found != std::string::npos)
		{
			return "YES";
		}
	}			

	return "NO";
}

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	const auto result = twoStrings(s1, s2);

	return 0;
}