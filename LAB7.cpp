#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        string flname;
        char mesg[40],ch;
        cout<<"Enter the file you want to create:"<<endl;
        cin>>flname;
        cin.get();
        ofstream fout(flname.c_str());
        if(fout.fail())
        {
                cout<<"failed to create file"<<endl;
        }
        else
        {
                cout<<"File"<< flname <<"successfully created "<<endl;
        }
        cout<<"Enter the message"<<endl;
        cin.getline(mesg,40);
        fout<<mesg<<endl;
        cout<<"Message written to file successfully"<<endl;
        fout.close();
        ifstream fin (flname.c_str());
        cout<<"Here are the contents of"<<flname<<endl;
        while(fin.get(ch))
        {
                cout<<ch;
        }
        cout<<"Done reading file contents"<<endl;
        fin.close();
}
