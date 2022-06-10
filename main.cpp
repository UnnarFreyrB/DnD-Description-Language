#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

list<string> load_program(string file_path) {
    ifstream myfile (file_path);
    list<string> program;
    if (!myfile) {
        cout << "File does not exist\n";
        return program;
    } else {
        char output, started_value;
        string token;
        //bool to determine if reading inside quote or brackets
        bool started = false;
        cout << started << endl;
        while(myfile.good()) {
            output = myfile.get();
            cout << "Started value: " << started << endl;
            cout << "Output value: " << output << endl;
            if (started = false) {
                if (output == '"' || output == '{') {
                    started = true;
                    started_value = output;
                    program.push_back(token);
                    token = output;
                    program.push_back(token);
                } else {
                    if (output == ' ' || output == ';' || output == '\n') {
                        if (token == "") {}
                        else{
                            program.push_back(token);
                            token = "";
                        }
                    }else if(output == '}') {
                        token += output;
                        program.push_back(token);
                        token = "";
                    } else {
                        token += output;
                    }
                }
            } else if (started = true){
                cout << "Started\n";
                if (started_value == '"' && output == '"') {
                    cout << "Started\n";
                    program.push_back(token);
                    token = output;
                    program.push_back(token);
                    started = false;
                    started_value = ' ';
                } else {
                    if (started_value == '"') {
                        token += output;
                    }
                    else {
                        cout << "Something went wrong with string stuff\n";
                    }
                }
            }
        }
        return program;
    }
}

int main() {
    string myfile = "first_program.ttdl";
    char output;
    string token;
    list<string> program;
    program = load_program(myfile);
    cout << program.size() << endl;
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