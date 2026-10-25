#include <iostream>
#include <cctype>
using namespace std;

enum CharacterType {
    VOWEL,
    CONSONANT,
    INVALID
};

int main() {
    char ch;
    cin >> ch;

    ch = tolower(static_cast<unsigned char>(ch));

    CharacterType type;

    if (ch >= 'a' && ch <= 'z') {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                type = VOWEL;
                break;

            default:
                type = CONSONANT;
        }
    } else {
        type = INVALID;
    }

    switch (type) {
        case VOWEL:
            cout << "vowel";
            break;

        case CONSONANT:
            cout << "consonant";
            break;

        case INVALID:
            cout << "Invalid input";
            break;
    }

    return 0;
}
