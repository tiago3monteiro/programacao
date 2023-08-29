#include "CarSale.h"

CarSale::CarSale(const string& model, double base_price)
{
    model_ = model;
    base_price_ = base_price;
}
string CarSale::model() const
{
    return model_;
}
double CarSale::base_price() const
{
    return base_price_;

}

void CarSale::add(const accessory& a)
{
    acc_.push_back(a);
}

int CarSale::free_accessories() const
{
    int free = 0;
    for(accessory a: acc_)  if(!a.tax ) free ++;
    return free;


}

double CarSale::final_price() const
  {
    unsigned int totalTax = 100;
    for(auto a : acc_)
    {
        totalTax += a.tax;
    }
    
    return totalTax/100.0 * base_price_;
  }

int main()
{  CarSale cs("Tasle X-2039", 1000000.42);
  cs.add({ "Flying module", 50 });
  cs.add({ "Lunar landing module", 10 });
  cs.add({ "Elun Mosk's portrait in gold paint", 100 });
   print(cs); 
 }