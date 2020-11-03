#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
//const int guest_size = 3;
#define func(i)
#define guest_size 3
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----
//source code
string print_guest_list(const string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {
   
    string guest_list[]{ "Larry", "Moe", "Curly" };//source code
    size_t guest_list_size{ guest_size };//source code
  
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);


    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

//source code only type return and function name

string print_guest_list(const string guest_list[], size_t guest_list_size/*/, const string, size_t, const string, size_t/*/) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for (size_t i = 0; i < guest_list_size; i++)
            cout << guest_list[i] << endl;
        
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name(); //source code
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

//source code only type return and function name

void clear_guest_list(string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for (size_t i = 0; i < guest_list_size; i++)
        guest_list[i] = " ";


    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int main() {

    event_guest_list();

    return 0;
}
