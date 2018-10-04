#include "pch.h"



void FindString(){
	char str [] = "Chinese demand for silver in the 19th and early 20th centuries led several countries, notably the United Kingdom, United States and Japan, to mint trade dollars, which were often of slightly different weights from comparable domestic coinage. Silver dollars reaching China (whether Spanish, trade, or other) were often stamped with Chinese characters known as 'chop marks', which indicated that that particular coin had been assayed by a well-known merchant and deemed genuine.";
	char c_str[] = "genuine";
	int conc = 0, j = 0;
	for (int i = 0; i < sizeof(str) / sizeof(*str); i++) {
		if (conc == sizeof(c_str) / sizeof(*c_str) - 1) {
			cout << "Found! i = " << i - sizeof(c_str) / sizeof(*c_str) + 1;
			return;
		}
		if (str[i] == c_str[conc])
			conc += 1;
		else
			conc = 0;
	}
	cout << "Not found";
	return;
}