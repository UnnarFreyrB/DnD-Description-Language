#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

list<string> load_program(string file_path) {
    ifstream myfile (file_path);
    if (!myfile) {
        cout << "File does not exist\n";
        return;
    } else {
        char output;
        string word;
        list<string> program;
        while(myfile.good()) {
            output = myfile.get();
            if (output == '"') {
                //Not implemented
            } else {
                if (output == ' ' || output == ';' || output == '\n') {
                    if (word == "") {}
                    else{
                        program.push_back(word);
                        word = "";
                    }
                }else if(output == '}') {
                    word += output;
                    program.push_back(word);
                    word = "";
                } else {
                    word += output;
                }
            }
        }
        return program;
    }
}

int main() {
    ifstream myfile ("first_program.ttdl");
    char output;
    string word;
    list<string> program;
    while(myfile.good()) {
        output = myfile.get();
        if (output == ' ' || output == ';' || output == '\n') {
            if (word == "") {}
            else{
                program.push_back(word);
                word = "";
            }
        }else if(output == '}' || output == '"') {
            word += output;
            program.push_back(word);
            word = "";
        } else {
            word += output;
        }
    }
    list<string>::iterator it;
    for (it = program.begin(); it != program.end(); ++it) {
        if (*it == "") {}
        else {
            cout << ' ' << *it;
            cout << '\n';
        }
    }
    return 0; 
    
}