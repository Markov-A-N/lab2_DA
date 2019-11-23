#include <fstream>
#include <ctime>
#include <string>

int main(int argc, char **argv) {
	std::ofstream out{"test.txt"};
	srand(time(0));
	if (argc != 2) {
		return 0;
	}
	int top = atoi(argv[1]);
	unsigned long long value;
	for (int i = 0; i < top; i++) {
		std::string input;
		for (int i = 0; i < 255; i++) {
			char a = 'a' + rand() % ('z' - 'a');
			input += a;
		}
		value = rand();
		out << input << " " << value << "\n";
	}
	return 0;
}