//
// Created by xavie on 01/04/2020.
//

#ifndef TP0_POINT_H
#define TP0_POINT_H

// 1.4 La classe point

class Point{

private:
    double x;
    double y;

    void setX(double x);
    void setY(double y);

public:
    Point();
    Point(double x, double y);
    Point(Point const &point);

    double getX() const;
    double getY() const;

    void deplace(double dx, double dy);
    void affiche();
    void saisir(double x, double y);

    static double distance(const Point& p1, const Point& p2);
    static Point milieu(const Point& p1, const Point& p2);

};


#endif //TP0_POINT_H
