#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdio>
#include <atomic>
#include <sstream>
#include <iomanip>
using namespace std;

string execCommand(string cmd);
void typeText(string text);
string encodeURI(string text);
bool isAIThinking = false;

int main() {
    string question;
    
    system("clear");
    cout << "=== ARIA AI ===\n";
    cout << "Type 'quit' to exit\n\n";
    
    while(true) {
        cout << "You: ";
        getline(cin, question);
        
        while(!question.empty() && question.back() == ' ') {
            question.pop_back();
        }
        while(!question.empty() && question.front() == ' ') {
            question.erase(0, 1);
        }
        
        if(question == "quit") {
            break;
        }
        
        if(question.empty()) {
            cout << "Please type something...\n";
            continue;
        }
        
        if(isAIThinking) {
            cout << "Please wait for AI to finish...\n";
            continue;
        }
        
        isAIThinking = true;
        
        system("clear");
        cout << "You: " << question << "\n\n";
        cout << "Aria is thinking";
        cout.flush();
        
        for(int i = 0; i < 3; i++) {
            this_thread::sleep_for(chrono::milliseconds(400));
            cout << ".";
            cout.flush();
        }
        
        string encoded = encodeURI(question);
        string command = "curl -s \"https://oreo.gleeze.com/api/aria?ask=" + encoded + "&stream=false\" | python3 -c \"import sys, json; print(json.load(sys.stdin)['answer'])\" 2>/dev/null";
        
        string response = execCommand(command);
        
        if(response.empty()) {
            response = "Sorry, I couldn't process that.";
        }
        
        while(!response.empty() && (response.back() == '\n' || response.back() == '\r')) {
            response.pop_back();
        }
        
        cout << "\n\nAria: ";
        typeText(response);
        cout << "\n\n";
        
        isAIThinking = false;
    }
    
    return 0;
}

string encodeURI(string text) {
    string encoded = "";
    for(char c : text) {
        if(isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
            encoded += c;
        } else if(c == ' ') {
            encoded += "%20";
        } else {
            stringstream ss;
            ss << hex << uppercase << setw(2) << setfill('0') << (int)(unsigned char)c;
            encoded += "%" + ss.str();
        }
    }
    return encoded;
}

string execCommand(string cmd) {
    char buffer[128];
    string result = "";
    FILE* pipe = popen(cmd.c_str(), "r");
    if(pipe) {
        while(fgets(buffer, sizeof(buffer), pipe) != NULL) {
            result += buffer;
        }
        pclose(pipe);
    }
    return result;
}

void typeText(string text) {
    for(size_t i = 0; i < text.length(); i++) {
        cout << text[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(20));
    }
}