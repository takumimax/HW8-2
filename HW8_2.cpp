#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main(int argc, char* argv[])
{
    string filename=argv[1];
    ifstream input(filename);
    
    set<string> data;
    string name;
    while(getline(input,name))
    {
        data.insert(name);
    } 
    for(auto it=data.begin();it!=data.end();it++)
    {
        cout<<*(it)<<endl;
    }

    return 0;
}