#include <iostream>
#include <cstdio>
#include <string>
//#include <vector>

using namespace std;
bool solve(string s);

int main(){
    string base;
    getline(cin,base);
    printf("%d",solve(base)==true ? 1 : 0);
}

bool solve(string s) {
    int size = s.length();
    char temp;
    
    for (int i = 0; i < size / 2; i++) {
        if (s[i] != s[(size - 1) - i])
            return false;
    }
    return true;
}