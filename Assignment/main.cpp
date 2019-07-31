//Md. Fahad Mojumder
//ID. 1712145642
#include"unsortedtype.h"
#include"itemtype.h"
#include<bits/stdc++.h> //autoloader


using namespace std;

int main()
{
    UnsortedType team;
    cout<<"\t \t \t \t \t \t \tBangladesh Cricket Board"<<endl;
    cout<<"\t \t \t \t \t \t \t       Dhaka,1205"<<endl;
    cout<<"\n";
    cout<<"Enter number of players(5-15): ";
    int pnum1,pnum2;
    cin>>pnum1;
    pnum2 = pnum1;

    ifstream file_input("Players.txt"); //To read from a file

    ItemType player;

    while(pnum1--)
    {
        int id,run;
        string name;

        file_input>>id;
        player.id = id;
        getline(file_input,name);
        player.name = name;
        for(int i=0;i<10;i++)
        {
            file_input>>run;
            player.runArray[i] = run;
        }
        team.InsertItem(player);
    }
    file_input.close();


    team.ResetList();

    ofstream file("Players-Summary.txt"); //to write in a file
    ItemType temp;

    while(pnum2--)
    {
        temp = team.GetNextItem();
        file <<"ID: "<< temp.id<<"\n";
        file<<"Name: "<<temp.name<<"\n";
        file<<"Total Run: "<<temp.findTotal()<<"\n";
        file<<"Average Run: "<<temp.findAverage()<<"\n";
        file<<"Maximum Run: "<<temp.findMax()<<"\n";
        file<<"Minimum Run: "<<temp.findMin()<<"\n\n";
    }
    file.close();


}
