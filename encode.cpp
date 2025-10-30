#include<iostream>
#include<wchar.h>
#include<string>
#include<locale>
using namespace std;
int main(){
    locale::global(locale(""));
    wcin.imbue(locale(""));
    wcout.imbue(locale(""));
    enum He : wchar_t{He1=0x4F55,He2=0x6CB3,He3=0x76D2,He4=0x8377,He5=0x6838,He6=0x5408,He7=0x7960,He8=0x9602,He9=0x6D78,He10=0x58D5,He11=0x9596,He12=0x988C,He13=0x548C,He14=0x52BE,He15=0x5413,He16=0x9978};
    enum Yi : wchar_t{Yi1=0x4E00,Yi2=0x8863,Yi3=0x533B,Yi4=0x4F9D,Yi5=0x4eea,Yi6=0x5B9C,Yi7=0x79FB,Yi8=0x4E59,Yi9=0x5DF2,Yi10=0x610F,Yi11=0x76CA,Yi12=0x5FC6,Yi13=0x4E49,Yi14=0x5F79,Yi15=0x8C0A,Yi16=0x9091};
    enum Wei : wchar_t{Wei1=0x4E3A,Wei2=0x4F4D,Wei3=0x672A,Wei4=0x7EF4,Wei5=0x56F4,Wei6=0x5A01,Wei7=0x536B,Wei8=0x4F1F,Wei9=0x8FDD,Wei10=0x5C3E,Wei11=0x552F,Wei12=0x4F2A,Wei13=0x6E2D,Wei14=0x8C13,Wei15=0x7EAC,Wei16=0x559C};
    char str[1024];
    cin.getline(str,1024);
    for(int i=0;str[i]!='\0';i++){
        if(i%3==0){
            switch(str[i]){
                case 'a':wcout<<(wchar_t)He::He1;break;
                case 'b':wcout<<(wchar_t)He::He2;break;
                case 'c':wcout<<(wchar_t)He::He3;break;
                case 'd':wcout<<(wchar_t)He::He4;break;
                case 'e':wcout<<(wchar_t)He::He5;break;
                case 'f':wcout<<(wchar_t)He::He6;break;
                case '1':wcout<<(wchar_t)He::He7;break;
                case '2':wcout<<(wchar_t)He::He8;break;
                case '3':wcout<<(wchar_t)He::He9;break;
                case '4':wcout<<(wchar_t)He::He10;break;
                case '5':wcout<<(wchar_t)He::He11;break;
                case '6':wcout<<(wchar_t)He::He12;break;
                case '7':wcout<<(wchar_t)He::He13;break;
                case '8':wcout<<(wchar_t)He::He14;break;
                case '9':wcout<<(wchar_t)He::He15;break;
                case '0':wcout<<(wchar_t)He::He16;break;
            }
        }else if(i%3==1){
            switch(str[i]){
                case 'a':wcout<<(wchar_t)Yi::Yi1;break;
                case 'b':wcout<<(wchar_t)Yi::Yi2;break;
                case 'c':wcout<<(wchar_t)Yi::Yi3;break;
                case 'd':wcout<<(wchar_t)Yi::Yi4;break;
                case 'e':wcout<<(wchar_t)Yi::Yi5;break;
                case 'f':wcout<<(wchar_t)Yi::Yi6;break;
                case '1':wcout<<(wchar_t)Yi::Yi7;break;
                case '2':wcout<<(wchar_t)Yi::Yi8;break;
                case '3':wcout<<(wchar_t)Yi::Yi9;break;
                case '4':wcout<<(wchar_t)Yi::Yi10;break;
                case '5':wcout<<(wchar_t)Yi::Yi11;break;
                case '6':wcout<<(wchar_t)Yi::Yi12;break;
                case '7':wcout<<(wchar_t)Yi::Yi13;break;
                case '8':wcout<<(wchar_t)Yi::Yi14;break;
                case '9':wcout<<(wchar_t)Yi::Yi15;break;
                case '0':wcout<<(wchar_t)Yi::Yi16;break;
            }
        }else if(i%3==2){
            switch(str[i]){
                case 'a':wcout<<(wchar_t)Wei::Wei1;break;
                case 'b':wcout<<(wchar_t)Wei::Wei2;break;
                case 'c':wcout<<(wchar_t)Wei::Wei3;break;
                case 'd':wcout<<(wchar_t)Wei::Wei4;break;
                case 'e':wcout<<(wchar_t)Wei::Wei5;break;
                case 'f':wcout<<(wchar_t)Wei::Wei6;break;
                case '1':wcout<<(wchar_t)Wei::Wei7;break;
                case '2':wcout<<(wchar_t)Wei::Wei8;break;
                case '3':wcout<<(wchar_t)Wei::Wei9;break;
                case '4':wcout<<(wchar_t)Wei::Wei10;break;
                case '5':wcout<<(wchar_t)Wei::Wei11;break;
                case '6':wcout<<(wchar_t)Wei::Wei12;break;
                case '7':wcout<<(wchar_t)Wei::Wei13;break;
                case '8':wcout<<(wchar_t)Wei::Wei14;break;
                case '9':wcout<<(wchar_t)Wei::Wei15;break;
                case '0':wcout<<(wchar_t)Wei::Wei16;break;
            }
        }
    }
    return 0;
}
