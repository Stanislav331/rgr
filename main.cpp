#include <array>
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int counter(int j)
{
    j++;
}
int main()
{
    ifstream file;
    const char* path = "plata.txt";
    const char* path2 = "plata2.txt";
   ofstream file2;

    file.open(path);
    file2.open(path2);
    if(!file.is_open())
    {
        cout <<endl;
        cout << "error 1";
        return 0;
    }
    if(!file2.is_open())
    {
        cout <<endl;
        cout << "error 2";
        return 0;
    }
    else
    {


        char a;
        char* b = "- ";
        char c='0';
        int i = 0;
        int j =0;
        cout <<"file " << path << " is opened"<< endl;
        while(file.get(a))
        {
            cout << a;

        }

        while(file.get(a))
        {

            if(a != '0' && a!= ' ')
            {
                for (i > 0;i--;)
                {
                    file2 << "0 ";
                }
                for(j!=0;j--;)
                file2 << a;
                file2 << b;
                //goto a;
            }
            if(a == '0')
            {
                i++;
            }

            //a:;

        }
    }
    file.close();
    file2.close();


return 0;
}

