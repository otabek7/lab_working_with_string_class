#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main() {
    string password = "";

    cout << "Please enter your text input: ";
    cin >> password;
    cout << "input: " << password << endl;
    string passRev = "";
    for(unsigned int i = 0; i<password.length(); i++){

        if(password.at(i) == 'a')
            password.replace(i, 1, "@");
        
        if(password.at(i) == 'e')
            password.replace(i, 1, "3");
        
        if(password.at(i) == 'i')
            password.replace(i, 1, "!");
        
        if(password.at(i) == 'o')
            password.replace(i, 1, "0");
        
        if(password.at(i) == 'u')
            password.replace(i, 1, "^");
    }
    for (int i = password.length()-1; i>=0; i--)
    {
        passRev.push_back(password.at(i));
    }
    cout << "output: " << password+passRev << endl;
    //i am in a dev branch
    //here is version 2



    return 0;
}
