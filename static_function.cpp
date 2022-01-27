#include <iostream>
using namespace std;
 
class Nokia{
    private:
        static string phone_name;   
    public:
        static void set_name(string name)
        {
            phone_name = name;
        }
        static void name()
        {
            cout << "Phone: "<< phone_name;
        }
    
        
};
 

string Nokia::phone_name = "";
 
int main()
{
    Nokia::set_name("Nokia 2600");
    Nokia::name();
 
    return 0;
}