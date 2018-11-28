#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

// Complete the checkMagazine function below.
void checkMagazine(std::vector<std::string> magazine, std::vector<std::string> note) 
{
	// vector iteration : O(n)
	for(auto& iter : note)
	{
		// std::find_if vector iteration : O(n) -> O(n^2)
		const auto found = std::find_if(magazine.begin(), magazine.end(), [&](const auto& word)
		{
			return word == iter;
		});

		if(found == magazine.end())
		{
			std::cout << "No" << '\n';
			return;
		}

		magazine.erase(found);
	}

	std::cout << "Yes" << '\n';
}

void checkMagazine2(std::vector<std::string> magazine, std::vector<std::string> note)
{
	std::unordered_map<std::string, int> magazineMap;
	// vector iteration : O(n), hash table insert : O(1) -> O(n)
	for(auto& iter : magazine)
	{
		if(magazineMap.find(iter) != magazineMap.end())
		{
			magazineMap[iter]++;
		}
		else
		{
			magazineMap[iter] = 1;
		}
	}

	// vector iteration : O(n), hash table search : O(1) -> O(n)
	for(auto& iter : note)
	{
		if(magazineMap.find(iter) != magazineMap.end())
		{
			if(magazineMap[iter] == 0)
			{
				std::cout << "No" << '\n';
				return;
			}

			magazineMap[iter]--;
		}
		else
		{
			std::cout << "No" << '\n';
			return;
		}
	}

	std::cout << "Yes" << '\n';
}

int main()
{
	std::vector<std::string> magazine = {"give", "me", "one", "grand", "today", "night"};
	std::vector<std::string> note = {"give", "one", "grand", "today"};

	checkMagazine2(magazine, note);

	return 0;
}