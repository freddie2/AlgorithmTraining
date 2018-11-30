#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

struct Player 
{
	int score;
	std::string name;
};

bool compare(Player a, Player b) 
{
	return a.score == b.score && a.name<b.name || a.score>b.score;
}

int main()
{
	std::vector<Player> players = { {100, "amy"}, {100, "david"},
		{50, "heraldo"}, {75, "aakansha"}, {150, "aleksa"} };

	std::sort(players.begin(), players.end(), compare);

	for(int i = 0; i < players.size(); i++) {
		std::cout << players[i].name.data() << " " << players[i].score << std::endl;
	}

	return 0;
}