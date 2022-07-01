#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

// list<string> load_program(string file_path) {
//     ifstream myfile (file_path);
//     list<string> program;
//     if (!myfile) {
//         cout << "File does not exist\n";
//         return program;
//     } else {
//         std::string word;
//         //char output;
//         //output = myfile.get();
//         //word += output;
//     }
//     return program;
// }


int main() {
    string myfile1 = "first_program.ttdl";
    ifstream myfile;
    string token;
    list<string> program;
    myfile.open(myfile1);
    if(myfile.is_open()) {
        while (getline(myfile, token)) {
            program.push_back(token);
        }
        list<string>::iterator it;
        for (it = program.begin(); it != program.end(); ++it) {
            if (*it == "") {}
            else {
                cout << ' ' << *it;
                cout << '\n';
            }
    }
    myfile.close();
    return 0; 
    
    }
}
