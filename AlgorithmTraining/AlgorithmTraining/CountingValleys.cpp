
#include <vector>
#include <string>

// Complete the countingValleys function below.
int countingValleys(int n, std::string s) 
{
	// �� ����� ���� ���ϴ� �ǵ� �̷��� level == 0�϶�(�ؼ����϶�) 
	// ���� string�� D�̸� �� ���°Ŵϱ� �̶��� Count���ָ� ��.
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