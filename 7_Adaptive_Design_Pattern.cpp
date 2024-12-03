//? Let's understand it with an example 
//* If we have two incompatible objects (plug point and the charger we put in an adapter in between and starts working) so ADAPTER DESIGN PATTERN is used when there are two incompatible objects but we could be actually satisfying our client but the only difference is the incompatibility 
//! Let's understand ADAPTER in terms of coding 

//todo  Second Example -> Suppose there is a data analytics tool and it reads the data which is onlu in JSON format and we have a data which is in XML format so in order to read that data we need a ADAPTER which converts that XML data into JSON format and then we can easy analyse that data using the tool we have.

#include<bits/stdc++.h>
using namespace std;

class XMLData {
    private:
        string xmlData;

    public:
        XMLData(string xmlData) {
            this -> xmlData = xmlData;
        }

        string getXMLData() {
            return xmlData;
        }
};

class DataAnalyticsTool {
    private:
        string jsonData;

    public:
        DataAnalyticsTool(string jsonData) {
            this -> jsonData = jsonData;
        }

        void analyseData() {
            cout << "Analysing Data " << jsonData << endl;
        }
};

class Client {
    public:
        void ProcessData(DataAnalyticsTool* tool) {
            tool -> analyseData();
        }
}

int main() {
    XMLData xmlData = new xmlData("Sample XML data");
    // DataAnalyticsTool* tool = new DataAnalyticsTool();
    Client* client = new Client;
    client -> ProcessData(tool);
}