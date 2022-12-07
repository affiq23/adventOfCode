#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

 int largestElf = 0;

    fstream textFile;
    textFile.open("input.txt", ios::in);

    if (textFile.is_open()) {
        int val = 0, max = 0;
       
        string line;
        while(getline(textFile, line)){
            if(line.empty()){
                val = 0;
            } else {
                val = val + stoi(line);
                if(val > max){
                    max = val;
                }                   
            }
        }
        textFile.close();
        cout << max << endl;
    }
    
    return 0;
}

