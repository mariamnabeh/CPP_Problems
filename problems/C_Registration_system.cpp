#include <iostream>
#include <string>
#include <map>

using namespace std;

#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    map<string, int> database;
    string name;
    
    for(int i = 0; i < n; i++) {
        cin >> name;
        
        if (database.count(name) == 0) {
            cout << "OK" << el;
            database[name] = 1;
        } else {
            cout << name << database[name] << el;
            database[name]++;
        }
    }
    
    return 0;
}