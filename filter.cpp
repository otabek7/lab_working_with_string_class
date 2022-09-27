#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
   string sentence;
   string details;

   cout << "Please enter obfuscated sentence: ";
   cin >> sentence;

   cout << "Please enter deobfuscation details: ";
   cin >> details;
   
   int i = 0;
   int index = 0;
   int temp = 0;

   while(temp <= sentence.length() && i < details.length()){
    temp = details.at(i)-48;
    cout << sentence.substr(index, temp) << " ";
    i++;
    index += temp;
    //temp++;
   }
   


    return 0;
}

