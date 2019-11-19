#include <iostream>
#include <fstream>
#include <cstring>
#include "string.h"
//#include "avl.h"
#include "detail_avl.h"

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	TString cmd;
	TDetailAvl tree;

	while (std::cin >> cmd) {
		if (cmd[0] == '+') {
			tree.DetailInsert();
		}
		else if(cmd[0] == '-') {
			tree.DetailRemove();
		}
		else if(cmd[0] == '!' && cmd.Size() == 1) {
			tree.SaveLoad();
		}
		/*else if (std::strcmp(cmd.Cstr(), "Print") == 0) {
			tree.Print();
		}*/
		else {
			tree.DetailFind(std::move(cmd));
		}
	}

	return 0;
}