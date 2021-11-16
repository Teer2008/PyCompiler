#include <iostream>

using namespace std;

string input_path, name;
bool nameUsed = true;

void translateToExe(string Name, string InputPath) {
    std::string command = "pyinstaller ";
    if (nameUsed) {
        command += InputPath;
        command += " --name ";
        command += "\"";
        command += name;
        command += "\"";
        cout << command;
    }

    system(command.c_str());
}

int main()
{
    cout << "App Name: ";
    cin >> name;
    cout << name;

    cout << "Path to Python Script: ";
    cin >> input_path;

    if (name == "NONE") {
        nameUsed = false;
    }
    else
    {
        nameUsed = true;
    }


    translateToExe(name, input_path);

    return 0;
}