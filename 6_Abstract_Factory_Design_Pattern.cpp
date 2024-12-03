//? It is a Creational Design Pattern
//* It is similar to factory design pattern 
//* Basically, our FACTORY DESIGN PATTERN is going to use concrete objects and classes and our ABSTRACT FACTORY DESIGN PATTERN is going to create factories that is going to create objects, basically our ABSTRACT FACTORY DESIGN PATTERN is going to create a family of classes 

//? Difference between FACTORY DESIGN PATTERN and ABSTRACT FACTORY DESIGN PATTERN  
//* The Factory pattern focuses on creating a single type of product. 
//! The Abstract Factory pattern works at a higher level of abstraction. It creates families of related products (multiple product types) and provides an interface to create them, but delegates the actual creation to concrete subclasses.


//* Typically involves a single factory responsible for creating one type of product (or related products).
//! Involves multiple factories (each one responsible for creating a family of related products). There is a common interface that defines how objects in the family are created.

//* Creates a single type of product
//! Creates families of related products

//* Works with a single product type
//! Works with multiple related product types

//* Usually one factory responsible for one product
//! Multiple factories responsible for related products


//* A factory that creates only Car objects (e.g., Sedan or SUV)
//! A factory that creates families of Car and Motorcycle objects (e.g., Modern or Vintage)


#include<bits/stdc++.h>
using namespace std;

class IButton {
    public:
        virtual void press() = 0;  /* Equals to zero means it is a pure virtual function */
};


class MacButton : public IButton {
    public:
        void press() {
            cout << "Mac Button pressed" << endl;
        }
};

class WindowsButton : public IButton {
    public:
        void press() {
            cout << "Windows Button pressed" << endl;
        }
};

class ITextBox {
    public:
         virtual void showText() = 0;
};


class MaxTextBox : public ITextBox {
    public:
        void showText() {
            cout << "Showing Mac Text Box" << endl;
        }
};

class WindowsTextBox : public ITextBox {
    public:
        void showText() {
            cout << "Showing Windows Text Box" << endl;
        }
};

class Ifactory {
    public:
        virtual IButton* CreateButton() = 0;
        virtual ITextBox* CreateTextBox() = 0;
};

int main() {
    cout << "Enter your machine OS" << endl;
    string osType;
    cin >> osType;

    IFactory* fact = GUIAbstractFactory::CreateFactory(osType);

    IButton* button = fact -> CreateButton();
    button -> press();

    ITextBox* testBox = fact -> CreateTextBox();
    textBox -> showText();
}