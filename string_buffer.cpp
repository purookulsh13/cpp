#include<iostream>
#include<string.h>
using namespace std;

class string_buffer
{
    private:
    char *str;
    int m_len;
    public:
        string_buffer():str(nullptr),m_len(0)  
        {}

        int strlen1()
        {
            m_len=strlen(str);
            return m_len;
        }
        string_buffer(const string_buffer &str_ref)
        {
            m_len=str_ref.m_len;
            str=new char[m_len];
            
            strcpy(str,str_ref.str);
            cout<<"Inside parameterized copy constructor: "<<str<<endl;
        }
        string_buffer(const char *st)
        {
            int len=strlen(st);
            str=new char[len];
            m_len=len;
            strcpy(str,st);
            cout<<"Inside parameterized constructor: "<<str<<endl;
        }
        string_buffer& operator=(const string_buffer &st)
        {
            delete [] str;
            m_len=strlen(st.str);
            str=new char[m_len];
            strcpy(str,st.str);
            return *this;
        }
        void display()
        {
             cout<<"str in display: "<<str<<endl;
        }
       
        friend ostream& operator<<(ostream &stream,string_buffer &obj)
        {
            stream<<obj.str;
            return stream;
        }
        ~string_buffer()
        {
            cout<<"calling destructor"<<endl;
        }
};



int main()
{
    string_buffer sb("String buffer");
    char arr[]="My Name is Puroo";
    string_buffer sb1;
    sb1=sb;
    cout<<"String 1: "<<sb1<<endl;
    sb.display();
    cout<<"String: "<<sb<<endl;
      
    


    return 0;
}