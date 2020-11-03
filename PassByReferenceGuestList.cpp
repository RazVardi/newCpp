#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string& s1, size_t, const string& s2, const string& s3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string& s1, size_t, string& s2, string& s3);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_1{ "Larry" };
    string guest_2{ "Moe" };
    string guest_3{ "Curly" };

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
    size_t guest_list_size{ 0 };
    string full_list[]={ guest_1 , guest_2 , guest_3 };
     guest_list_size= full_list->length() ;
    

    print_guest_list(guest_1, guest_list_size, guest_2, guest_3);
    clear_guest_list(guest_1, guest_list_size, guest_2, guest_3);
    print_guest_list(guest_1, guest_list_size, guest_2,  guest_3);


    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string &guest_1, size_t guest_list_size, const string &guest_2,const string &guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    if (guest_list_size > 0) {
        cout << guest_1 << endl;
        cout << guest_2 << endl;
        cout << guest_3 << endl;
    }
    else
    {
        cout << "there is no guest";
    }
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string &guest_1, size_t guest_list_size, string &guest_2, string &guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    if (guest_list_size > 0) {
        guest_1 = " ";
        guest_2 = " ";
        guest_3 = " ";
    }
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int main()
{
    event_guest_list();

    return 0;
}