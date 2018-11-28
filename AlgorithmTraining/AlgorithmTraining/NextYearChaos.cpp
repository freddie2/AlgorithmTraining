#include <vector>
#include <algorithm>

// Complete the minimumBribes function below.
void minimumBribes(std::vector<int> q) {
	std::vector<int> initState;
	std::sort(q.begin(), q.end(), std::back_inserter(initState));


}

// 주어진 순서를 만들기 위해 필요한 뇌물의 개수를 출력
// 한 사람이 뇌물을 3회 이상 줘야하면 Too Chaotic 출력

int main()
{
	std::vector<int> q = { 2,1,5,3,4 }; // final state
	minimumBribes(q);
	return 0;
}