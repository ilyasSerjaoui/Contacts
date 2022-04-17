#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;

int main(){

    ofstream os;
    os.open("con.txt", std::ios::app);
    cout<<"-----------------------------------------"<<endl;
    cout<<"|              CONTACTS                 |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    
    while(true){

        string name, phone, email;
        cout<<endl;
        cout<<"Add Information  ----------------------------------"<<endl;
        cout<<endl;
        cout<<"name: "; cin>>name; os<<"Name:"<<name<<endl;
        cout<<"number phone: "; cin>>phone; os<<"Mobile:"<<phone<<endl;
        cout<<"email(example@gmail.com): "; cin>>email; os<<"Email:"<<email<<endl;
        
        ifstream fs("con.txt");
        string f;
        vector<string> getData;

        cout<<endl;
        int i=0;
        while(fs >> f){
            getData.push_back(f);
        }  
        cout<<"LIST ---------------------------------------"<<endl;
        cout<<endl;
        for(string list: getData){
            cout<<list<<endl;
        } 
        

    }
    return 0;
}