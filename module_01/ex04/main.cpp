#include <iostream>
#include <string>
#include <fstream>

void error(std::string msg){
	std::cout << msg << std::endl;
	exit(1);
}

int main( int ac, char **av) {
	if (ac != 4)
		error("Error: only 3 parameters are accepted");
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string buff;

	if (fileName.empty() || s1.empty() || s2.empty())
		error("Error: Argument empty");
	std::ifstream readFile(fileName);
	if (!readFile.is_open() || !getline(readFile, buff))
		error("Error: inputFile");
	std::ofstream writeFile(fileName + ".replace");
	if (!writeFile.is_open())
		error("Error: outputFile");
	while (!readFile.eof() && !readFile.fail()){
		if (buff == s1)
			writeFile << s2 << std::endl;
		else
			writeFile << buff << std::endl;
		getline(readFile, buff);
	}
	readFile.close();
	writeFile.close();
	return 0;
}
