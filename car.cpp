#include "car.h"
#include <stdlib.h>
Car get_car(CarType type)
{
  Car data = (CarImplementation)malloc(sizeof(Car));
  data->Color = Color[0];
  data->CarType = CarType[0];
  return data;
}
CarType get_type(Car car)
{
    return AIXAM;
}
Color get_color(Car car)
{
  return RED;
}
double get_fill_level(Car car)
{
  return 0.0;
}
double get_acceleration_rate(Car car)
{
  return 0.0;
}
int get_speed(Car car)
{
  return 0;
}
void init()
{

}
void set_acceleration_rate(Car car, int acceleration_rate){

}
void accelerate(Car car){

}
