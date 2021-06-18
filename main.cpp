#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char characters[] = {
	'\0',
	' ',
	'a',
	'A',
	'b',
	'B',
	'c',
	'C',
	'd',
	'D',
	'e',
	'E',
	'f',
	'F',
	'g',
	'G',
	'h',
	'H',
	'i',
	'I',
	'j',
	'J',
	'k',
	'K',
	'l',
	'L',
	'm',
	'M',
	'n',
	'N',
	'o',
	'O',
	'p',
	'P',
	'q',
	'Q',
	'r',
	'R',
	's',
	'S',
	't',
	'T',
	'u',
	'U',
	'v',
	'V',
	'w',
	'W',
	'x',
	'X',
	'y',
	'Y',
	'z',
	'Z',
	'~',
	'`',
	'!',
	'@',
	'#',
	'$',
	'%',
	'^',
	'&',
	'*',
	'(',
	')',
	'-',
	'_',
	'+',
	'=',
	'[',
	']',
	'{',
	'}',
	'\\',
	'|',
	';',
	':',
	'\'',
	'"',
	',',
	'<',
	'.',
	'>',
	'/',
	'?',
	'1',
	'2',
	'3',
	'4',
	'5',
	'6',
	'7',
	'8',
	'9',
	'0'
};

int main(int argc, const char* argv[]) {
	ofstream writer(argv[1]);
	if(!writer) {
		cout << "Error reading the file\n";
	}
	for(int i = 0; i < 93; i++) {
		for(int j = 0; j < 93; j++) {
			for(int k = 0; k < 93; k++) {
				for(int l = 0; l < 93; l++) {
					for(int m = 0; m < 93; m++) {
						for(int n = 0; n < 93; n++) {
							for(int o = 0; o < 93; o++) {
								for(int p = 0; p < 93; p++) {
									cout << characters[i] << characters[j] << characters[k] << characters[l] << characters[m] << characters[n] << characters[o] << characters[p] << "\n";
									writer << characters[i] << characters[j] << characters[k] << characters[l] << characters[m] << characters[n] << characters[o] << characters[p] << "\n";
								}
							}
						}
					}
				}
			}
		}
	}
}
