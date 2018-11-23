#include <iostream>
#include <string>

// Complete the repeatedString function below.
long long repeatedString(std::string s, long long n) 
{
	const auto aIns = std::count(s.begin(), s.end(), 'a');
	const auto quotient = n / s.size();
	const auto remainder = n % s.size();
	const auto aInRemainder = std::count(s.begin(), s.begin() + remainder, 'a');

	return aIns * quotient + aInRemainder;
}

int main()
{
	std::string s = "kmretasscityylpdhuwjirnqimlkcgxubxmsxpypgzxtenweirknjtasxtvxemtwxuarabssvqdnktqadhyktagjxoanknhgilnm";
	auto n = 736778906400;

	auto result = repeatedString(s, n);

	return 0;
}