#include<iostream>
using namespace std;

struct Event{
    string date;
    string type;
    string name;
};

Event events[100];
int eventCount=0;
/*-------------view the events------------*/


void view(){

    if(eventCount==0){
        cout<<"NO EVENTS TO DISPLAY\n";
        return ;
    }else{
        cout<<"----Up Comming College Events----\n";
            for(int i=0;i<eventCount;++i){
                cout<<"Event"<<i+1<<":\n";

                    cout<<"Name:"<<events[i].name;
                    cout<<"\nDate:"<<events[i].date;
                    cout<<"\nType:"<<events[i].type<<"\n";
                cout<<"--------------------\n";
            }
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
            cout<<"Event: "<<events[i].name<<"\nDate: "<<events[i].date<<"\n";
            found=true;
        }
    }
    if(!found){
        cout<<"No events found in this Category.\n";
    }
}

/*-------------add events------------*/


void add(){
    Event newevent;

    cout<<"----Add New Event----\n";

        cout<<"Enter event name: ";
        getline(cin,newevent.name);

        cout<<"Enter event date: ";
        getline(cin,newevent.date);
      
        cout<<"Enter event type(cultural,technical,sports): ";
        getline(cin,newevent.type);

        events[eventCount++]=newevent;     
        cout<<"Successfully added the event!!\n";
    }


int main(){
    int choice;
    while(true){
        cout<<"----MENU----\n";
        cout<<"1.VIEW EVENTS\n";
        cout<<"2.FILTER EVENTS BY TYPE\n";
        cout<<"3.ADD NEW EVENT\n";
        cout<<"4.EXIT\n";

        cout<<"Enter your choice: ";
        cin>>choice;

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
                break;
            default:
                cout<<"Invalid!!\n";
        }

    }
return 0;
}