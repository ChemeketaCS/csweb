#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class represents a point in the Cartesian plane
 */
class Point
{
public:

    /**
     * @brief Point Constructs at 0, 0
     */
    Point();

    /**
     * @brief Point Constructs a point at the given coordinates
     * @param startX initial x location
     * @param startY initial y location
     */
    Point(double startX, double startY);

    /**
     * @brief getX Accesses x loction
     * @return x coordinate
     */
    double getX() const;

    /**
     * @brief getY Accesses y loction
     * @return y coordinate
     */
    double getY() const;

    /**
     * @brief setX Change the x location
     * @param newX New x location
     */
    void setX(double newX);

    /**
     * @brief setX Change the y location
     * @param newX New y location
     */
    void setY(double newY);

    /**
     * @brief translate Moves the point by the specified offset in x and y
     * @param xShift Amount to move in x
     * @param yShift AMount to move in y
     */
    void translate(double xShift, double yShift);

    /**
     * @brief isSameAs Tests if two points represent approximately the same location
     * @param other Point to compare with this one
     * @return True if both x and y are within 0.0000001 of each other. Else false.
     */
    bool isSameAs(const Point& other) const;

    /**
     * @brief distanceTo Calculates distance to another Point
     * @param other Point to measure distance to
     * @return Distance
     */
    double distanceTo(const Point& other) const;

    /**
     * @brief print Prints formated information about Point to console
     */
    void print() const;

private:
    double x;
    double y;
};

#endif // POINT_H
