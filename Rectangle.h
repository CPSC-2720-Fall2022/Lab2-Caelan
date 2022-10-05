//
// Created by Caelan Neumann on 2022-10-05.
//

#ifndef LAB2_CAELAN_RECTANGLE_H
#define LAB2_CAELAN_RECTANGLE_H


#include <string>

class Rectangle {
    private:
        std::string name;
        double length{};
        double width{};
    public:
        Rectangle();
        Rectangle(std::string n, double l, double w);

        //Getters and Setters
        void set_width(double w);
        void set_length(double l);
        void set_name(std::string n);
        std::string get_name();

        double get_width();

        double get_length();

        double get_area();
        double get_perimeter();
        void to_string();
};


#endif //LAB2_CAELAN_RECTANGLE_H
