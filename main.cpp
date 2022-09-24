#include <iostream>

int main() {
    std::cout << "Rectangle Creator!" << std::endl;
    
    return 0;
}


class Rectangle {
private:
    double length;
    double width;
public:
    void set_dimensions(double l, double w){
        length = l;
        width = w;
    }

    void set_width(double w){
        width = w;
    }

    void set_length(double l){
        length = l;
    }

    double get_width() const{
        return width;
    }

    double get_length() const{
        return length;
    }
};