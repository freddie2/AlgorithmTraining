
#include <vector>
#include <string>

// Complete the countingValleys function below.
int countingValleys(int n, std::string s) 
{
	// 들어간 계곡의 수를 구하는 건데 이러면 level == 0일때(해수면일때) 
	// 다음 string이 D이면 계곡에 들어가는거니까 이때만 Count해주면 됨.
	int level = 0;
	int valleys = 0;

	for(const auto& iter : s)
	{
		if(iter == 'D')
		{
			if(level == 0)
			{
				valleys++;
			}

			level--;
		}
		else
		{
			level++;
		}
	}

	return valleys;
}

int main()
{
	int n = 8;
	std::string s = "UDDDUDUU";

	int result = countingValleys(n, s);

	return 0;
}