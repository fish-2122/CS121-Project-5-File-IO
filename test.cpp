#include <fstream>
#include <iostream>
#include <sstream>

int main() {
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;
	std::string num1S;
	std::string num2S;
	int num1;
	int num2;
	int sum;
	std::string text;

	inFile.open("data.csv");
	while(getline(inFile, currentLine)) {
		converter.clear();
		converter.str("");
		ss.clear();
		ss.str("");

		ss.str(currentLine);

		getline(ss, num1S, ',');
		converter << num1S;
		converter >> num1;
		converter.clear();
		converter.str("");

		getline(ss, num2S, ',');
		converter << num2S;
		converter >> num2;
		converter.clear();
		converter.str("");

		getline(ss, text);

		sum = num1 + num2;

		for (int i = 0; i < sum; i++) {
			std::cout << text << " ";
		}
		std::cout << std::endl;
	} // end of while loop
	return 0;
}