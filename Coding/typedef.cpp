#include <iostream>
#include <vector>
using namespace std;

typedef vector<pair<string,int>> pairlist_t;
// typedef string text_t;
typedef int number_t;
using text_t = string;
int main(){

    // typedef is reserved keyword used to create an additional name (alias) for another data type
    // New identifier for an existing type
    // helps with readability and reduces typos
    // use when there is a clear benefit
    // replaced with 'using' (work better with templates)


    pairlist_t pairlist;
    text_t text = "something";
    cout << text << '\n';
    number_t x = 25;
    cout << x;
    
    return 0;
}