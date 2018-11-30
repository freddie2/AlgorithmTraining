#include <algorithm>
#include <string>
#include <unordered_map>

// Complete the isValid function below.
std::string isValid(std::string s) 
{
	std::unordered_map<char, int> map;

	for(auto& iter : s)
	{
		if(map.find(iter) == map.end())
		{
			map[iter] = 1;
		}
		else
		{
			map[iter]++;
		}
	}

	std::vector<int> vec;
	for(auto& iter : map)
	{
		vec.emplace_back(iter.second);
	}

	std::sort(vec.begin(), vec.end(), std::greater<>());
	const auto frontCount = std::count(vec.cbegin(), vec.cend(), vec.front());
	const auto secondCount = std::count(vec.cbegin(), vec.cend(), vec[1]);

	if(secondCount != vec.size() - 1) return "NO";

	if(frontCount == vec.size()) return "YES";
	if(frontCount == 1 && vec.front() - vec[1] == 1) return "YES";

	return "NO";
}

int main()
{
	std::string str = "aabbc";

	const auto result = isValid(str);

	return 0;
}
