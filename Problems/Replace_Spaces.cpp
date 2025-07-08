#include<iostream>
#include<vector>
using namespace std;

// Replace Spaces ---> CodeStudio.
// input = "Rakesh Kumar Dey"
// Output = "Rakesh@Kumar@Dey"

string replaceSpaces(string &str){
    string temp = "";
    for(char ch : str){
        if(ch == ' '){
            temp += "@";
        }
        else{
            temp += ch;
        }
    }
    return temp;
}

int main(){
    string str = "Rakesh Kumar Dey";
    string result = replaceSpaces(str);

    for(char ch : result){
        cout << ch;
    }
    cout << endl;

    return 0;
}