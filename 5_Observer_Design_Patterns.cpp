//* Is is a Behavioral Design Pattern

//? Observer Design Patterns -> The Observer Design Pattern is a behavioral design pattern used to create a one-to-many dependency between objects. In simple terms, it allows one object (the subject) to notify a group of dependent objects (the observers) when its state changes. The observers can then take action based on the change, without the subject needing to know anything about the observers' details.



#include<bits/stdc++.h>
using namespace std;

class ISubscriber {
    public:
        virtual void notify(string msg) = 0;
};

class User : public ISubscriber {
    private:
        int userId;

    public:
        User(int userId) {
            this -> userId = userId;
        }

        void notify(string msg) {
            cout << "User " << userId << " received msg " << msg << endl;
        }
};

class Group {
    private: 
        list<ISubscriber*> users;


    public:
        void subscribe(ISubscriber* user) {
            users.push_back(user);
        }

        void unsubscribe(ISubscriber* user) {
            users.remove(user);
        }

        void notify(string msg) {
            for(auto &user : users) {
                user -> notify(msg);
            }
        }
};



int main() {
    Group* group = new Group;
    
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    group -> subscribe(user1);
    group -> subscribe(user2);
    group -> subscribe(user3);

    group -> notify("New Msg");

    group -> unsubscribe(user1);
    group -> notify("New new Msg");
}