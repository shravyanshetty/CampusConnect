#include<iostream>
using namespace std;

struct Event{
    string date;
    string type;
    string name;
}

/*vector to hold events*/
vector<Event> events;

/*veiw function*/

void veiw(const vector<Event> &events){
    if(events.empty){
        cout<<"NO EVENTS TO DISPLAY\n";
        return 0;
    }else{
        cout<<"----Up Comming College Events----\n";
            for(int i=0;i<events.size();++i){
                cout<<"Event"<<i+1<<":\n";

                    cout<<"Name:"<<events[i].name;
                    cout<<"\nDate:"<<events[i].date;
                    cout<<"\nType:"<<events[i].type<<"\n";
                cout<<"--------------------\n";
            }
    }
}

void filter(){

}

void add(vector<Event> &events){
    Event newevent;

    cout<<"----Add New Event----\n";

        cout<<"Enter event name: ";
        
        cout<<"Enter event date: ";
        cout<<"Enter event type: ";
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
                veiw(events);
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
                cout<<"Invalid!!";
        }

    }
return 0;
}