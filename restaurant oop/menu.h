#pragma once
using namespace std;

class menu
{
private:
	food foodList[3];
	int foodNumber;
public:
	void setFoodList(food Foodlist[]) {
		for (int i = 0; i < 3; i++)
		{
			foodList[i] = Foodlist[i];
		}
	}
	void getFoodList() {
		cout << "today's food menu: \n";
		for (int i = 0; i < 3; i++)
		{
			cout << i << ". " << foodList[i].getName() << "  ";
		}
	}
	void whatFood() {
		cout << "which food you choose? ";
		cin >> foodNumber;
	}
	food pickedFood() {
		return foodList[foodNumber];
	}
};
