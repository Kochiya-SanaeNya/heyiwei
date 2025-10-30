#include<iostream>
#include<wchar.h>
#include<string>
#include<locale>
using namespace std;
int main() {
    locale::global(locale(""));
    wcin.imbue(locale(""));
    wcout.imbue(locale(""));
    enum He : wchar_t { He1 = L'何', He2 = L'河', He3 = L'荷', He4 = L'核', He5 = L'合', He6 = L'禾', He7 = L'盒', He8 = L'赫', He9 = L'贺', He10 = L'阖', He11 = L'鹤', He12 = L'褐', He13 = L'劾', He14 = L'和', He15 = L'涸', He16 = L'曷' };
    enum Yi : wchar_t { Yi1 = L'意', Yi2 = L'义', Yi3 = L'益', Yi4 = L'毅', Yi5 = L'忆', Yi6 = L'议', Yi7 = L'异', Yi8 = L'译', Yi9 = L'翼', Yi10 = L'艺', Yi11 = L'逸', Yi12 = L'溢', Yi13 = L'裔', Yi14 = L'驿', Yi15 = L'疫', Yi16 = L'谊' };
    enum Wei : wchar_t { Wei1 = L'味', Wei2 = L'位', Wei3 = L'未', Wei4 = L'谓', Wei5 = L'卫', Wei6 = L'魏', Wei7 = L'慰', Wei8 = L'喂', Wei9 = L'胃', Wei10 = L'渭', Wei11 = L'蔚', Wei12 = L'尉', Wei13 = L'畏', Wei14 = L'为', Wei15 = L'偎', Wei16 = L'惟' };
    char str[1024];
    cin.getline(str, 1024);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (i % 3 == 0) {
            switch (str[i]) {
            case 'a':wcout << (wchar_t)He::He1; break;
            case 'b':wcout << (wchar_t)He::He2; break;
            case 'c':wcout << (wchar_t)He::He3; break;
            case 'd':wcout << (wchar_t)He::He4; break;
            case 'e':wcout << (wchar_t)He::He5; break;
            case 'f':wcout << (wchar_t)He::He6; break;
            case '1':wcout << (wchar_t)He::He7; break;
            case '2':wcout << (wchar_t)He::He8; break;
            case '3':wcout << (wchar_t)He::He9; break;
            case '4':wcout << (wchar_t)He::He10; break;
            case '5':wcout << (wchar_t)He::He11; break;
            case '6':wcout << (wchar_t)He::He12; break;
            case '7':wcout << (wchar_t)He::He13; break;
            case '8':wcout << (wchar_t)He::He14; break;
            case '9':wcout << (wchar_t)He::He15; break;
            case '0':wcout << (wchar_t)He::He16; break;
            }
        }
        else if (i % 3 == 1) {
            switch (str[i]) {
            case 'a':wcout << (wchar_t)Yi::Yi1; break;
            case 'b':wcout << (wchar_t)Yi::Yi2; break;
            case 'c':wcout << (wchar_t)Yi::Yi3; break;
            case 'd':wcout << (wchar_t)Yi::Yi4; break;
            case 'e':wcout << (wchar_t)Yi::Yi5; break;
            case 'f':wcout << (wchar_t)Yi::Yi6; break;
            case '1':wcout << (wchar_t)Yi::Yi7; break;
            case '2':wcout << (wchar_t)Yi::Yi8; break;
            case '3':wcout << (wchar_t)Yi::Yi9; break;
            case '4':wcout << (wchar_t)Yi::Yi10; break;
            case '5':wcout << (wchar_t)Yi::Yi11; break;
            case '6':wcout << (wchar_t)Yi::Yi12; break;
            case '7':wcout << (wchar_t)Yi::Yi13; break;
            case '8':wcout << (wchar_t)Yi::Yi14; break;
            case '9':wcout << (wchar_t)Yi::Yi15; break;
            case '0':wcout << (wchar_t)Yi::Yi16; break;
            }
        }
        else if (i % 3 == 2) {
            switch (str[i]) {
            case 'a':wcout << (wchar_t)Wei::Wei1; break;
            case 'b':wcout << (wchar_t)Wei::Wei2; break;
            case 'c':wcout << (wchar_t)Wei::Wei3; break;
            case 'd':wcout << (wchar_t)Wei::Wei4; break;
            case 'e':wcout << (wchar_t)Wei::Wei5; break;
            case 'f':wcout << (wchar_t)Wei::Wei6; break;
            case '1':wcout << (wchar_t)Wei::Wei7; break;
            case '2':wcout << (wchar_t)Wei::Wei8; break;
            case '3':wcout << (wchar_t)Wei::Wei9; break;
            case '4':wcout << (wchar_t)Wei::Wei10; break;
            case '5':wcout << (wchar_t)Wei::Wei11; break;
            case '6':wcout << (wchar_t)Wei::Wei12; break;
            case '7':wcout << (wchar_t)Wei::Wei13; break;
            case '8':wcout << (wchar_t)Wei::Wei14; break;
            case '9':wcout << (wchar_t)Wei::Wei15; break;
            case '0':wcout << (wchar_t)Wei::Wei16; break;
            }
        }
    }
	cout << endl;
	cout << "Encode Done. Press Enter to exit.";
    cin.get();
    return 0;
}
