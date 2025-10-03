#include<iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;
public:
	Elevator(int ground, int top);
	void onOff();
	void SetPosition(int pos);
	int GetPosition()const;
	void Call();
	void Print()const;
};


Elevator::Elevator(int ground, int top)
{
	groundFloor = ground;
	topFloor = top;
	OnOff = false;
	works = false;
	position = 0;
}

void Elevator::onOff()
{
	OnOff = !OnOff;
}

void Elevator::SetPosition(int position)
{
	this->position = position;
}

int Elevator::GetPosition()const
{
	/*this->position = 1000;*/
	return position;
}

void Elevator::Call()
{
	if (!OnOff) {
		cout << "Error Elevator is turned off" << endl;
	}
	cout << "Enter Floor from " << groundFloor << "up to" << topFloor << endl;
	cin >> position;
	if (position >= groundFloor && position <= topFloor)
	{
		cout << "Elevator is coming" << position << "floor " << endl;
	}
	else
	{
		cout << "Error! Enter correct floor" << endl;
	}
}
void Elevator::Print() const
{
	cout << "OnOff: " << OnOff <<  endl;
	cout << "position: " << position << endl;
	cout << "Work: " << works << endl;
	cout << "Top Floor: " << topFloor << endl;
	cout << "Ground Floor: " << groundFloor << endl;
}




int main()
{
	setlocale(0, "ru");
	Elevator el(1, 10);
	el.onOff();
	el.Call();

	el.Print();
}