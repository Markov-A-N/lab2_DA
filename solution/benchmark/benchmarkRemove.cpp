#include "../avl.h"
#include <chrono>
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2) {
		return 0;
	}
	std::chrono::time_point<std::chrono::system_clock> start, end;
	TAvl<int, int> t;
	int top = atoi(argv[1]);
	for (int i = 0; i <= top; i++) {
		t.Add(i, i);
	}
	int time = 0;
	for (int i = 0; i <= 1000000; i++) {
		start = std::chrono::system_clock::now();
		t.Delete(top);
		end = std::chrono::system_clock::now();
		time += std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
		t.Add(top, top);
	}
	std::cout << "TIME: " << time << std::endl;
	return 0;
}