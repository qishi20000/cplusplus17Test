#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
	std::cout << "current path:" << fs::current_path() << std::endl;
	std::string dir = "e:\\cpp17\\filesystem";
	fs::create_directories(dir);
}