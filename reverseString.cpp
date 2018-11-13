#include<iostream>
#include <string>
using namespace std;

class Reverse
{
public:
	string reverseString(string s)
	{
		if (s.empty())
			return s;
		size_t start = 0;
		size_t end = s.size();
		while (start < end)
		{
			swap(s[start], s[end]);
			++start;
			--end;
		}
		return s;
	}
private:
	char* _str;
};
int main()
{
	Reverse r;
	r.reverseString("hello");
	return 0;
}