#include <iostream>
#include <string>
using namespace std;
string sub_string(string str, int start, int end = 0){
    string result;
    if (start <= 0){
        start = 1;
    }
    if(end <= 0){
        end = str.size();
    }
    for(int i = start - 1; i < end; i++){
            result.push_back(str[i]);
        }
    return result;
}
int main(){
    // Test fuction
    cout << sub_string("Water", 2, 4); // Output: ate
    cout << "\n===============\n";
    cout << sub_string("Water", 0, 3); // Output : Wat
    cout << "\n===============\n";
    cout << sub_string("Water", 3, 0); // Output: ter
    return 0;
}