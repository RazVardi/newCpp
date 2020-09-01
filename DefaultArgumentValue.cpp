#include <iostream>
using namespace std;


//---- FUNCTION PROTOTYPE BELOW THIS LINE----

void print_grocery_list( int apples = 3, int oranges = 7, int mangos = 13);
void modify_grocery_list();
//---- FUNCTION PROTOTYPE ABOVE THIS LINE----


void modify_grocery_list() {

    
    //---- FUNCTION CALLS BELOW THIS LINE----
    print_grocery_list(3, 7, 13);
    print_grocery_list( 5 );
    print_grocery_list(7,11);


    //---- FUNCTION CALLS ABOVE THIS LINE----
    
}

void print_grocery_list(int apples, int oranges  , int mangos) { //---- FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                     
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}

int main()
{
    modify_grocery_list();

    return 0;
}