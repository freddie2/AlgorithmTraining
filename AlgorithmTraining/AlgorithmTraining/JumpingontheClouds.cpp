#include <vector>

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(std::vector<int> c) 
{
	int jump = 0;
	
	int index = 0;

	// 이렇게 하는거 아닌거같은데
	while(true)
	{
		// .. 0 0
		if(c[index + 1] == 0 && index == c.size() - 2)
		{
			index++;
			jump++;
		}
		// 0 1 0
		else if(c[index + 1] == 1)
		{
			index += 2;
			jump++;
		}
		// 0 0 0
		else if(c[index + 1] == 0 && c[index + 2] == 0)
		{
			index += 2;
			jump++;
		}
		// 0 0 1
		else if(c[index + 1] == 0 && c[index+2] == 1)
		{
			index++;
			jump++;
		}	


		if(index == static_cast<int>(c.size() - 1)) break;
	}	

	return jump;
}

int main()
{
	std::vector<int> c = { 0,0,0,1,0,0 };

	int result = jumpingOnClouds(c);

	return 0;
}