#include <vector>
#include <algorithm>

// Complete the minimumBribes function below.
void minimumBribes(std::vector<int> q) {
	std::vector<int> initState;
	std::sort(q.begin(), q.end(), std::back_inserter(initState));


}

// �־��� ������ ����� ���� �ʿ��� ������ ������ ���
// �� ����� ������ 3ȸ �̻� ����ϸ� Too Chaotic ���

int main()
{
	std::vector<int> q = { 2,1,5,3,4 }; // final state
	minimumBribes(q);
	return 0;
}