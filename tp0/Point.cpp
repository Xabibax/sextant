//
// Created by xavie on 01/04/2020.
//

#include <stdio.h>
#include <cmath>
#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}
Point::Point(Point const &point) : x(point.getX()), y(point.getY()) {}

void Point::setX(double x) { Point::x = x; }
void Point::setY(double y) { Point::y = y; }

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::deplace(double dx, double dy) {
    this->setX(this->getX() + dx);
    this->setY(this->getY() + dy);
}

void Point::affiche() {
    printf("Les coorodonnées sont : x -> %f, y -> %f\n", this->getX(), this->getY());
}

void Point::saisir(double x, double y) {
    this->setX(x);
    this->setY(y);
}

double Point::distance(const Point& p1, const Point& p2) {
    double distX = fmax(p1.getX(), p2.getX()) - fmin(p1.getX(), p2.getX());
    double distY = fmax(p1.getY(), p2.getY()) - fmin(p1.getY(), p2.getY());
    return sqrt(pow(distX, 2) + pow(distY,2));
}

Point Point::milieu(const Point& p1, const Point& p2) {
    double dist = distance(p1, p2);
    double x = fmin(p1.getX(), p2.getX()) + dist / 2;
    double y = fmin(p1.getY(), p2.getY()) + dist / 2;
    return Point(x, y);
}