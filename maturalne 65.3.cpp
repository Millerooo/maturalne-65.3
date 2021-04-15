#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
       
        public:
                file();
                ~file();
                void loop(); 
                void NWD(); 
                void sumaParzystych();
};


file::file()
{
        inFile.open("dane_ulamki.txt"); 
        if (!inFile.good())
        {
                cerr << "Błąd pliku";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}

void file::loop()
{
        int a, b ; 
        while (!inFile.eof())
        {
    while(a!=b)
       if(a>b)
           a-=b; 
       else
           b-=a; 
    return a; 
}
void file::NWD()
{
    long d, sumL=0;
 for(int i=0; i<1000; i++){
 d=nwd(licz[i],mian[i]);
 sumL = sumL + licz[i]/d;
 } 
}
int main()
{
	  int a, b;
    
    cout<<"Podaj dwie liczby: ";
    cin>>a>>b;
	
	
        file f;
        f.loop();
        f.NWD();
        return 0;
}
