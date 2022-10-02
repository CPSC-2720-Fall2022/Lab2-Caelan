#include <iostream>
#include <utility>
#include <string>


class Rectangle {
private:
    std::string name;
    double length{};
    double width{};
public:
    Rectangle(){
        name = "";
        length = 0.0;
        width = 0.0;
    }
    Rectangle(std::string n, double l, double w){
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
    void set_name(std::string n){
        name = std::move(n);
    }

    std::string get_name(){
        return name;
    }
    double get_width() const{
        return width;
    }

    double get_length() const{
        return length;
    }
    double get_area() {
        return this->width * this->length;
    }
    double get_perimeter(){
        return (this->width * 2) + (this->length * 2);
    }
    void to_string() {
        std::cout << "Rectangle Details" << std::endl
                  << "Name: " << get_name() << std::endl
                  << "Length: " << get_length() << " CM" << std::endl
                  << "Width: " << get_width() <<  " CM" << std::endl
                  << "Area: " << get_area() << " CM2" << std::endl
                  << "Perimeter: " << get_perimeter() << " CM" << std::endl << std::endl;
    }

};


int display_menu(){
    int choice = 0;
    std::cout << "Rectangle Creator!" << std::endl
         << "1 - Create Rectangle" << std::endl
         << "2 - Edit Rectangle" << std::endl
         << "3 - Get Rectangle Info" << std::endl
         << "9 - Exit" << std::endl
         << "What would you like to do? ";
    std::cin >> choice;
    std::cout << std::endl;

    return choice;
}

int edit_menu(){
    int choice = 0;

    std::cout << "Edit Menu" << std::endl
         << "1 - Name" << std::endl
         << "2 - Length" << std::endl
         << "3 - Width" << std::endl
         << "0 - Go Back" << std::endl
         << "What would you like to do? ";
    std::cin >> choice;
    std::cout << std::endl;

    return choice;
}

Rectangle create_rectangle() {

    std::string name;
    double length;
    double width;
    std::cin.ignore(1000,'\n');
    std::cout << "What would you like to name your rectangle? ";
    getline(std::cin,name);

    std::cout << "Length: ";
    std::cin >> length;


    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Rectangle created!" << std::endl << std::endl;

    return *new Rectangle(name,length, width);

}



int main() {
    int choice = 0;
    bool initialized = false;
    Rectangle rectangle;
    std::string name;
    double length;
    double width;
    int edit_choice;
    //Main menu loop
    while (choice != 9) {
        //Display menu and get user choice.
        choice = display_menu();

        if (choice == 1){

            rectangle = create_rectangle();
            initialized = true;

        }else if(!initialized && choice != 9) {
            std::cout << "Please create the rectangle first" << std::endl;
        } else if(initialized) {
            switch (choice) {
                case 2:
                    edit_choice = 9;
                    while (edit_choice != 0) {
                        edit_choice = edit_menu();
                        switch (edit_choice) {
                            case 1:
                                std::cout << "What would you like to change the rectangles name to? ";
                                std::cin >> name;
                                rectangle.set_name(name);
                                std::cout << std::endl << "Name updated." << std::endl;
                                break;
                            case 2:
                                std::cout << "What would you like to change the rectangles length to? ";
                                std::cin >> length;
                                rectangle.set_length(length);
                                std::cout << std::endl << "Length updated." << std::endl;
                                break;
                            case 3:
                                std::cout << "What would you like to change the rectangles width to? ";
                                std::cin >> width;
                                rectangle.set_width(width);
                                std::cout << std::endl << "Width updated." << std::endl;
                                break;
                            case 0:
                                std::cout << "Edit Complete" << std::endl;
                                break;
                            default:
                                std::cout << "Please choose a valid option" << std::endl;
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
            std::cout << "Please choose a valid option" << std::endl;
        }
    }

    return 0;
}




