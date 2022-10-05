//
// Created by Caelan Neumann on 2022-10-05.
//

#include "Rectangle.h"
#include <iostream>


    Rectangle::Rectangle() {
        name = "";
        length = 0.0;
        width = 0.0;
    }
    Rectangle::Rectangle(std::string n, double l, double w){
        name = std::move(n);
        length = l;
        width = w;
    }

   void Rectangle::set_width(double w) {
        width = w;
    }

    void Rectangle::set_length(double l){
        length = l;
    }
    void Rectangle::set_name(std::string n){
        name = std::move(n);
    }

    std::string Rectangle::get_name(){
        return name;
    }
    double Rectangle::get_width() {
        return width;
    }

    double Rectangle::get_length() {
        return length;
    }
    double Rectangle::get_area() {
        return this->width * this->length;
    }
    double Rectangle::get_perimeter(){
        return (this->width * 2) + (this->length * 2);
    }
    void Rectangle::to_string() {
        std::cout << "Rectangle Details" << std::endl
                  << "Name: " << get_name() << std::endl
                  << "Length: " << get_length() << " cm" << std::endl
                  << "Width: " << get_width() <<  " cm" << std::endl
                  << "Area: " << get_area() << " cm2" << std::endl
                  << "Perimeter: " << get_perimeter() << " cm" << std::endl << std::endl;
    }
