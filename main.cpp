#include <iostream>
#include <string>
#include <utility>


using namespace std;

class Rectangle {
private:
    string name;
    double length{};
    double width{};
public:
    Rectangle(){
        name = "";
        length = 0.0;
        width = 0.0;
    }
    Rectangle(string n, double l, double w){
        name = std::move(n);
        length = l;
        width = w;
    }

    void set_width(double w){
        width = w;
    }

    void set_length(double l){
        length = l;
    }
    void set_name(string n){
        name = std::move(n);
    }

    string get_name(){
        return name;
    }
    double get_width() const{
        return width;
    }

    double get_length() const{
        return length;
    }

    void to_string() {
        std::cout << "Rectangle Details" << endl
                  << "Name: " << get_name() << endl
                  << "Length: " << get_length() << endl
                  << "Width: " << get_width() << std::endl;
    }
};

int main() {
    int choice = 0;
    bool initialized = false;
    Rectangle rectangle;
    while (choice != 9) {
        std::cout << "Rectangle Creator!" << endl
                  << "1 - Create Rectangle" << endl
                  << "2 - Change name" << endl
                  << "3 - Change height" << endl
                  << "4 - Change Width" << endl
                  << "5 - Get Rectangle Info" << endl
                  << "9 - Exit" << std::endl;
        std::cin >> choice;
        if (choice == 1){
            string name;
            double length;
            double width;

            std::cout << "What would you like to name your rectangle";
            cin >> name;
            rectangle.set_name(name);

            cout << endl << "Length: ";
            cin >> length;
            rectangle.set_length(length);

            cout << endl << "Width: ";
            cin >> width;
            rectangle.set_width(width);
            cout << endl << "Rectangle created!" << std::endl;
            initialized = true;
        }
    }

    return 0;
}


