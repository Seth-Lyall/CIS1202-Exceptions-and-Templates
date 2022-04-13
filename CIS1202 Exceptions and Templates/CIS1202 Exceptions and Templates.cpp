// Seth Lyall
// CIS1202 K01
// April 12, 2022

#include "PersonalLibrary.h"
using namespace std;

// Declaration for the "half" template function.
template <typename T>
T half(T);

int showMenu();
char character(char, int);


int main() {
	
	int choice;

	// Variables for Part A (Character Validation).
	char letter;
	int offset;

	// Variables for Part B (Data Type Math).
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	do {

		choice = showMenu();

		switch (choice) {
		case 1: // Character Validation.

			letter = validateChar("\nEnter a character (A-Z, a-z): ");
			offset = validateInteger("Enter an integer: ");

			try {
				letter = character(letter, offset);
				cout << "\nYour letter is '" << letter << "'.\n\n";
			}
			catch (char invalidCharacterException) {
				cout << "\ninvalidCharacterException | Selected character is not a letter.";
			}
			catch (int invalidRangeException) {
				cout << "\ninvalidRangeException | Offset character out of range.";
			}

			break;
		case 2: // Data Type Math.

			cout << "Value 'a' divided by two is " << half(a) << "\n";
			cout << "Value 'b' divided by two is " << half(b) << "\n";
			cout << "Value 'c' divided by two is " << half(c) << "\n";

			break;
		default:
			break;
		}

	} while (choice != 3);

	endProgram();
}

/********************************
Displays a menu for the			*
program, and gets user input.	*
********************************/
int showMenu() {
	int choice;

	cout << "1. Part A: Exceptions: Letter Validation\n2. Part B: Templates: Data Type Math\n3. End the program.\n";
	choice = validateInteger("Choose an option: ", 1, 3);

	return choice;
}

/********************************
Divides a number of a template	*
data type by 2, and returns the	*
result.							*
********************************/
T half(T n) {
	return num / 2.0;
}

/********************************
Gets a character and an offset	*
integer from the user, and		*
determines the new character to	*
be displayed.					*
********************************/
char character(char start, int offset) {
	char ch = ' ';
	int position = 0;
	char invalidCharacterException = 'a';
	int invalidRangeException = 1;
	string letterCase = "none";

	if ((int)start <= 64 || (int)start >= 123 || ((int)start >= 91 && (int)start <= 96)) {
		throw invalidCharacterException;
	}

	if (isupper(start)) {
		letterCase = "upper";
		switch (start) {
		case 'A':
			position = 65;
			break;
		case 'B':
			position = 66;
			break;
		case 'C':
			position = 67;
			break;
		case 'D':
			position = 68;
			break;
		case 'E':
			position = 69;
			break;
		case 'F':
			position = 70;
			break;
		case 'G':
			position = 71;
			break;
		case 'H':
			position = 72;
			break;
		case 'I':
			position = 73;
			break;
		case 'J':
			position = 74;
			break;
		case 'K':
			position = 75;
			break;
		case 'L':
			position = 76;
			break;
		case 'M':
			position = 77;
			break;
		case 'N':
			position = 78;
			break;
		case 'O':
			position = 79;
			break;
		case 'P':
			position = 80;
			break;
		case 'Q':
			position = 81;
			break;
		case 'R':
			position = 82;
			break;
		case 'S':
			position = 83;
			break;
		case 'T':
			position = 84;
			break;
		case 'U':
			position = 85;
			break;
		case 'V':
			position = 86;
			break;
		case 'W':
			position = 87;
			break;
		case 'X':
			position = 88;
			break;
		case 'Y':
			position = 89;
			break;
		default:
			position = 90;
			break;
		}
	}
	else {
		letterCase = "lower";
		switch (start) {
		case 'a':
			position = 97;
			break;
		case 'b':
			position = 98;
			break;
		case 'c':
			position = 99;
			break;
		case 'd':
			position = 100;
			break;
		case 'e':
			position = 101;
			break;
		case 'f':
			position = 102;
			break;
		case 'g':
			position = 103;
			break;
		case 'h':
			position = 104;
			break;
		case 'i':
			position = 105;
			break;
		case 'j':
			position = 106;
			break;
		case 'k':
			position = 107;
			break;
		case 'l':
			position = 108;
			break;
		case 'm':
			position = 109;
			break;
		case 'n':
			position = 110;
			break;
		case 'o':
			position = 111;
			break;
		case 'p':
			position = 112;
			break;
		case 'q':
			position = 113;
			break;
		case 'r':
			position = 114;
			break;
		case 's':
			position = 115;
			break;
		case 't':
			position = 116;
			break;
		case 'u':
			position = 117;
			break;
		case 'v':
			position = 118;
			break;
		case 'w':
			position = 119;
			break;
		case 'x':
			position = 120;
			break;
		case 'y':
			position = 121;
			break;
		default:
			position = 122;
			break;
		}
	}
	
	position += offset;
	if ((int)position <= 64 || (int)position >= 123 || ((int)position >= 91 && (int)position <= 96)) {
		throw invalidRangeException;
	}

	switch (position) {
	case 65:
		ch = 'A';
		break;
	case 66:
		ch = 'B';
		break;
	case 67:
		ch = 'C';
		break;
	case 68:
		ch = 'D';
		break;
	case 69:
		ch = 'E';
		break;
	case 70:
		ch = 'F';
		break;
	case 71:
		ch = 'G';
		break;
	case 72:
		ch = 'H';
		break;
	case 73:
		ch = 'I';
		break;
	case 74:
		ch = 'J';
		break;
	case 75:
		ch = 'K';
		break;
	case 76:
		ch = 'L';
		break;
	case 77:
		ch = 'M';
		break;
	case 78:
		ch = 'N';
		break;
	case 79:
		ch = 'O';
		break;
	case 80:
		ch = 'P';
		break;
	case 81:
		ch = 'Q';
		break;
	case 82:
		ch = 'R';
		break;
	case 83:
		ch = 'S';
		break;
	case 84:
		ch = 'T';
		break;
	case 85:
		ch = 'U';
		break;
	case 86:
		ch = 'V';
		break;
	case 87:
		ch = 'W';
		break;
	case 88:
		ch = 'X';
		break;
	case 89:
		ch = 'Y';
		break;
	case 90:
		ch = 'Z';
		break;
	case 97:
		ch = 'a';
		break;
	case 98:
		ch = 'b';
		break;
	case 99:
		ch = 'c';
		break;
	case 100:
		ch = 'd';
		break;
	case 101:
		ch = 'e';
		break;
	case 102:
		ch = 'f';
		break;
	case 103:
		ch = 'g';
		break;
	case 104:
		ch = 'h';
		break;
	case 105:
		ch = 'i';
		break;
	case 106:
		ch = 'j';
		break;
	case 107:
		ch = 'k';
		break;
	case 108:
		ch = 'l';
		break;
	case 109:
		ch = 'm';
		break;
	case 110:
		ch = 'n';
		break;
	case 111:
		ch = 'o';
		break;
	case 112:
		ch = 'p';
		break;
	case 113:
		ch = 'q';
		break;
	case 114:
		ch = 'r';
		break;
	case 115:
		ch = 's';
		break;
	case 116:
		ch = 't';
		break;
	case 117:
		ch = 'u';
		break;
	case 118:
		ch = 'v';
		break;
	case 119:
		ch = 'w';
		break;
	case 120:
		ch = 'x';
		break;
	case 121:
		ch = 'y';
		break;
	default:
		ch = 'z';
		break;
	}

	if (letterCase == "upper" && ((int)position >= 90 || (int)position <= 64)) {
		throw invalidRangeException;
	}
	if (letterCase == "lower" && ((int)position >= 123 || (int)position <= 96)) {
		throw invalidRangeException;
	}

	return ch;
}