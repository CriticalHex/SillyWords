#include<iostream>
#include<string>
#include<random>
#include<ctime>
#include<Windows.h>
using namespace std;

string firstStartSounds[16] = { "Dr", "Dw", "L", "M", "Qu", "Thr", "Tr", "Tw", "Scr", "Sl", "Sm", "Sp", "Spl", "Squ", "Wh", "Y" };

string secondStartSounds[4] = { "B", "F", "G", "P" };
string secondStartSoundFollowing[4] = { "l", "r", "w", "" };

string vowels[7] = { "a", "e", "i", "o", "u", "ee", "oo" };

string firstEndSounds[13] = { "bb", "ck", "dd", "mf", "mp", "mpf", "ng", "nk", "pp", "rf", "rk", "rp", "zz" };

string secondEndSounds[8] = { "aldo", "et", "et", "le", "le", "le", "o", "ok" };

string sillyWord();

int main() {
	srand(time(NULL));
	string input;

	while (input != "q") {
		cout << "Enter 'w' for a silly word. Enter 'q' to quit." << endl;
		cin >> input;
		if (input == "w") {
			cout << sillyWord() << endl;
			system("PAUSE>nul");
			system("cls");
		}
		else if (input != "q") {
			cout << "Not an option." << endl;
			system("PAUSE>nul");
			system("cls");
		}
	}
}

string sillyWord() {
	system("cls");
	string word;
	int random;


	random = rand() % 2 + 1;
	if (random == 1) {
		int one = rand() % 16;
		word += firstStartSounds[one];
	}
	else {
		int two = rand() % 4;
		word += secondStartSounds[two];

		int three = rand() % 4;
		word += secondStartSoundFollowing[three];

	}

	int four = rand() % 7;
	word += vowels[four];

	int five = rand() % 13;
	word += firstEndSounds[five];

	int six = rand() % 8;
	word += secondEndSounds[six];

	return word;

}