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

void filter(const vector<Event> & events){
    string type;

    cout<<"---CATEGORY----\n";
    cout<<"1.Cultural\n";
    cout<<"2.Technical\n";
    cout<<"3.Sports\n";
    cout<<"Enter your choice: ";
    getline(cin,type);


}

void add(vector<Event> &events){
    Event newevent;

    cout<<"----Add New Event----\n";

        cout<<"Enter event name: ";
        getline(cin,newevent.name);

        cout<<"Enter event date: ";
        getline(cin,newevent.date);
      
        cout<<"Enter event type(cultural,technical,sports): ";
        getline(cin,newevent.type);

        events.push_back(newevent);     /*used to add the event at the end */
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
                veiw(events);
                break;
            case 2:
                filter();
                break;
            case 3:
                add(events);
                break;
            case 4:
                break;
            default:
                cout<<"Invalid!!\n";
        }

    }
return 0;
}