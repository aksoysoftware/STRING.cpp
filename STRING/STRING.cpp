
#include <iostream>
#include <string.h>

using namespace std;
class STRING {
public:
    char* str1, *str2, *s;


    int STRLEN(char* x);
    char* STRREV(char*);
    char* STRCAT(char* str1, char* str2, char* s);
    int STRCMP(char* str1 , char* str2);//string comparative eğer iki ifadede aynı ise 1 döndürür değilse 0
    char* STRCOPY(char* str , char* str2);
};


int STRING::STRLEN(char* x) {
    
    int uzunluk=0;
    
    while (*x != '\0') {
        uzunluk++;
        *x++;
    }
    return uzunluk;

}

char* STRING::STRREV(char *str) {
  
  int i,uzunluk=0,n;
  char temp;
  uzunluk=STRLEN(str);
  n=uzunluk-1;
  for(i = 0; i <=(uzunluk/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
   

}
char* STRING::STRCOPY(char* str, char* strcopy) {
    int i,n, uzunluk = 0;
    uzunluk = STRLEN(str) ;
    
    for (i = 0; i < uzunluk; i++) {
        strcopy[i] = str[i];
    }
    //test
   // std::cout << strcopy << endl;

    return strcopy;
}
int STRING::STRCMP(char* str1, char* str2) //string comparative eğer iki ifadede aynı ise 1 döndürür değilse 0
{
    int str1uz = STRLEN(str1);
    int str2uz = STRLEN(str2);
    int index = STRLEN(str1) - 1;
    int i = 0;

    if (str1uz != str2uz) {
        return 0;
    }
    else
    {
        while (i <= index) {
            if (str1[i] != str2[i]) {
                return 0;
            }
            i++;
        }
        return 1;
    }
}
   

 char* STRING::STRCAT(char* a, char* b, char* s) {
    int uz = STRLEN(a);
    while (uz > 0) {
        *s= *a;
        uz--;
        a++;
        s++;
    }
    s++;
    
    uz = STRLEN(b);
    while (uz > 0) {
        *s=*b;
        b++;
        s++;
    }
    s++;

    return s;

}

int main()
{

    STRING deneme;
    deneme.str1 = new char[1000];
    deneme.str2 = new char[1000];
    deneme.s = new char[1000];
    
    std::cout << "Stringi giriniz:" << endl;
    std::cin >> deneme.str1;

    std::cout << "ikinci Stringi giriniz:" << endl;
    std::cin >> deneme.str2;

}

