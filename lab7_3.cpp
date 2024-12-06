#include <iostream>
using namespace std;


char before(char x){
     if ( x >= 'A' && x <= 'Z'){
        if (x == 'A'){
          return 'Z'; 
            
        
        } else {
          return x-1;
            
        }

     }
return '0';
}
int main (){
    cout << before('A') <<endl;
    cout << before('B') <<endl;
    cout << before('P') <<endl;
    cout << before('T') <<endl;
    cout << before('Z') <<endl;
    cout << before('a') <<endl;
    cout << before('0') <<endl;
    cout << before('c') <<endl;
    return 0;
}   