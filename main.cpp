#include<iostream>
using namespace std;

struct Event{
    string date;
    string type;
    string name;
};

const int maxevents=100;
Event events[maxevents];
int eventCount=0;
/*-------------view the events------------*/


void view(){

    if(eventCount==0){
        cout<<"\nNO EVENTS TO DISPLAY\n\n";
        return ;
    }

        cout<<"\n----Up Comming College Events----\n\n";
            for(int i=0;i<eventCount;++i){
                cout<<"Event"<<i+1<<":\n";

                    cout<<"Name:"<<events[i].name;
                    cout<<"\nDate:"<<events[i].date;
                    cout<<"\nType:"<<events[i].type<<"\n";
                cout<<"--------------------\n\n\n";
            }
}


/*-------------filtering by category------------*/

void filter(){
    string type;

    cout<<"---CATEGORY----\n";
    cout<<"1.Cultural\n";
    cout<<"2.Technical\n";
    cout<<"3.Sports\n";
    cout<<"Enter your choice: ";
    getline(cin,type);

    bool found=false;
    cout<<"---Events in "<<type<<"---\n";

    for(int i=0;i<eventCount;i++){
        if(events[i].type==type){
            cout<<"Event: "<<events[i].name<<"\nDate: "<<events[i].date<<"\n\n\n";
            found=true;
        }
    }
    if(!found){
        cout<<"\n\nNo events found in this Category.\n\n";
    }
}

/*-------------add events------------*/


void add(){
    if(eventCount>=maxevents){
        cout<<"--LIMIT REACHED TO MAX--\n\n";
        return;
    }

    Event newevent;
    cout<<"\n\n\n----Add New Event----\n\n";

        cout<<"Enter event name: ";
        getline(cin,newevent.name);

        cout<<"\n\nEnter event date: ";
        getline(cin,newevent.date);
      
        cout<<"\n\nEnter event type(cultural,technical,sports): ";
        getline(cin,newevent.type);

        events[eventCount]=newevent;
        eventCount++;

        cout<<"\n\n-------Successfully added the event!!-------\n\n";
    }


int main(){
    int choice;
    while(1){
        cout<<"\n\n\n----MENU----\n\n\n";
        cout<<"1.VIEW EVENTS\n";
        cout<<"2.FILTER EVENTS BY TYPE\n";
        cout<<"3.ADD NEW EVENT\n";
        cout<<"4.EXIT\n\n\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        cin.ignore();
    
        /*switch case*/

        switch(choice){
            case 1:
                view();
                break;
            case 2:
                filter();
                break;
            case 3:
                add();
                break;
            case 4:
                cout<<"Exiting the program..\n";
                return 0;
            default:
                cout<<"Invalid!!\n";
        }
    }
}