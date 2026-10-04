#include <iostream>
#include <string>
// i want to find the character that appears the most in a string and return it. I also want to print out the list of characters and how many times they appear in the string.
// go to the next line and write the code to do that.
using namespace std;

char getMax(const string& str) {
    if (str.empty()) {
        return '\0';
    }

    // Array to store the count of each character (assuming ASCII)
    int charCount[256] = {0};

    // Count the occurrences of each character
    for (char c : str) {
        charCount[static_cast<unsigned char>(c)]++;
    }

    // Find the character with the maximum count
    char maxChar = str[0];
    int maxCount = charCount[static_cast<unsigned char>(maxChar)];

    for (int i = 0; i < 256; i++) {
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            maxChar = static_cast<char>(i);
        }
    }

   

    return maxChar;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char maxChar = getMax(input);
    if (maxChar != '\0') {
        cout << "The character that appears the most is: '" << maxChar << "'" << endl;
    } else {
        cout << "The string is empty." << endl;
    }
    

    return 0;
}
