#include <iostream>
#include <string>

struct stockData {
  std::string name;
  std::string ticker;
  double price;
  double high;
  double low;
};

class StockActions
{
public:
  virtual void buy(stockData stock) = 0;
  void sell(stockData stock);

};

class Company : public StockActions
{
public:
  void buy(stockData stock);
};

class RealEstate : public StockActions
{
public:
  void buy(stockData stock);
};

void RealEstate::buy(stockData stock)
{
  std::cout << "buy real estate called"  << std::endl;
}

void StockActions::buy(stockData stock)
{
  std::cout << "buy stock called"  << std::endl;
}

void Company::buy(stockData stock)
{
  std::cout << "buy company called"  << std::endl;
}

void StockActions::sell(stockData stock)
{
  std::cout << "sell stock called"  << std::endl;
}

int main()
{
  stockData stockData;
  //StockActions s;
  Company c;
  Company *p_c;
  RealEstate r;
  RealEstate *p_r;

  //s.buy(stockData);
  //s.sell(stockData);
  p_c = &c;
  p_c->buy(stockData);
  p_c->sell(stockData);

  p_r = &r;
  p_r->buy(stockData);
  p_r->sell(stockData);
}
