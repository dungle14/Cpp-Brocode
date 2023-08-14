#include <iostream>
using namespace std;
namespace first{
        int x = 1;
}
int main(){
    int x = 0;
    // Namespace provides a solution for preventing name conflicts in large projects. Each entity need a unique name
    // A namespace allows for identically named entities as long as the namespaces are different
    cout << x;
    cout << first::x;
    
    
    return 0;
}