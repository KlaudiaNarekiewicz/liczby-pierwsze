#include <iostream>
#include <fstream>

using namespace std;

bool pierwsza(int licz)
{
 for (int i=2; i<licz/2; i++)
     if (licz %i == 0) 
     {
     	cout << "z³o¿ona";
        return false;
     }
     	cout << "pierwsza";
     	return true;
}

int main(int argc, char** argv) 
{
    
    ifstream file;
    file.open("a.txt");
    
    ofstream file2;
    file2.open("wynik.txt");
    int l;
    
    while(!file.eof()){
    file>>l;
    
    if(pierwsza(l)) 
        cout<<l<<"pierwsza"<<endl;
    else
        cout<<l<<"z³o¿ona"<<endl;

    }
    return 0;
}
