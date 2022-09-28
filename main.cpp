#include <iostream>
#include <utility>
#include <string>

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
        name = move(n);
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
        name = move(n);
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
    double get_area() {
        double area = this->width * this->length;
        return area;
    }
    void to_string() {
        cout << "Rectangle Details" << endl
                  << "Name: " << get_name() << endl
                  << "Length: " << get_length() << endl
                  << "Width: " << get_width() << endl;
    }

};


int display_menu(){
    int choice = 0;
    cout << "Rectangle Creator!" << endl
         << "1 - Create Rectangle" << endl
         << "2 - Edit Rectangle" << endl
         << "5 - Get Rectangle Info" << endl
         << "9 - Exit" << endl
         << "What would you like to do? ";
    cin >> choice;

    return choice;
}

int edit_menu(){
    int choice = 0;

    cout << "What would you like to edit?" << endl
         << "1 - Name" << endl
         << "2 - Length" << endl
         << "3 - Width" << endl
         << "0 - Go Back" << endl;
    cin >> choice;

    return choice;
}

Rectangle create_rectangle() {

    string name;
    double length;
    double width;
    cin.ignore(1000,'\n');
    cout << "What would you like to name your rectangle? ";
    getline(cin,name);

    cout << "Length: ";
    cin >> length;


    cout << "Width: ";
    cin >> width;
    cout << "Rectangle created!" << endl << endl;

    return *new Rectangle(name,length, width);

}



int main() {
    int choice = 0;
    bool initialized = false;
    Rectangle rectangle;
    string name;
    double length;
    double width;
    int edit_choice;

    while (choice != 9) {

        choice = display_menu();

        if (choice == 1){

            rectangle = create_rectangle();
            initialized = true;

        } else if(initialized) {
            switch (choice) {
                case 2:
                    edit_choice = 9;
                    while (edit_choice != 0) {
                        edit_choice = edit_menu();
                        switch (edit_choice) {
                            case 1:
                                cout << "What would you like to change the rectangles name to? ";
                                cin >> name;
                                rectangle.set_name(name);
                                cout << endl << "Name updated." << endl;
                                break;
                            case 2:
                                cout << "What would you like to change the rectangles length to? ";
                                cin >> length;
                                rectangle.set_length(length);
                                cout << endl << "Length updated." << endl;
                                break;
                            case 3:
                                cout << "What would you like to change the rectangles width to? ";
                                cin >> width;
                                rectangle.set_width(width);
                                cout << endl << "Width updated." << endl;
                                break;
                            case 0:
                                cout << "Edit Complete" << endl;
                                break;
                        }
                    }
                    break;

                case 3:
                    rectangle.to_string();
                    break;
                case 9:
                    return 0;
                default:
                    break;
            }
        }else {
            cout << "Please choose a valid option" << endl;
        }
    }

    return 0;
}




