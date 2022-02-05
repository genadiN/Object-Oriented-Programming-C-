#include "Food.hpp"
#include "Drink.hpp"
#include "ResturantItem.hpp"
#include "Resturant.hpp"

int main(){
//    Food *t1 =
//   t1->setName("Pizza");
//   t1->setWeight(0.400);
//   t1->setStock(30);
//   t1->setPrice(5.50);

//    Drink *t2 =
//    t2->setName("Water");
//    t2->setAlcohol(0);
//    t2->setStock(100);
//    t2->setPrice(2.80);

    Resturant restaurant;
    restaurant.add(new Food(30 , 5.50 , "Pizza" , 0.400 ));
    restaurant.add(new Drink(100 , 2.80 , "Water" , 0));
    restaurant.changePrice(1, 1.80);

}
