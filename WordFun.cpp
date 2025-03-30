#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main(){
    string word;
    getline(cin, word);
    istringstream alphabeth(word);
    char character;
    int CountA = 0, CountB = 0, CountC = 0;
    string memories;

    while (alphabeth >> character) {
        character = tolower(character); // แปลงเป็นตัวพิมพ์เล็ก

        // ตรวจสอบว่า character มีอยู่ใน Array แล้วหรือไม่
        bool found = false;
        for (char inmem : memories) {
            if (character == inmem) {
                found = true;
                break;
            }
        }

        // ถ้ายังไม่เคยมี ให้เพิ่มเข้า Array และนับจำนวน
        if (!found) {
            memories += character;
            if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
                CountA++;  // นับสระ
            } else if (isalpha(character)) {
                CountB++;  // นับพยัญชนะ
            }
        }
    }

    CountC = abs(CountA - CountB);  // หาผลต่างแบบสัมบูรณ์

    cout << CountA << endl;
    cout << CountB << endl;
    cout << CountC << endl;

    return 0;
}
