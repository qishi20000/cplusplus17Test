#include <iostream>
#include <string>
#include <string_view>
#include <algorithm>

int main()
{
	std::string str = "  A lot of space";
	std::string_view strView = str;
	strView.remove_prefix(std::min(strView.find_first_not_of(" "), strView.size()));
	std::cout << "str	:" << str << std::endl
		<< "strView	:" << strView << std::endl;
	std::cout << std::endl;

}