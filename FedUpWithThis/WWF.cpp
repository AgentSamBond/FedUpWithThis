#include "pch.h"
#include <string>
void Files() {
	ifstream ddf;
	ofstream ddf1;
	string ds;
	string str = "";
	ddf.open("file.txt");
	ddf1.open("target.txt");
	while (ddf) {
		ddf >> ds;
		str += ds;
		ddf >> ds;
		str += ds;
		ddf >> ds;
		str += ds;
		ddf >> ds;
		str += ds;
		if (ds == "Britain") {
			ddf1 << str << endl;
		}
		str = "";
	}
}