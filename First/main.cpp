using namespace std;

#include <iostream>;

class Pingas
{
private:
	char* name = nullptr;
	int x;
	int y;

public:
	Pingas()
	{
		 
	}

	void Init(const char *nm)
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		name = new char[strlen(nm) + 1];
		strcpy_s(name, strlen(nm) + 1, nm); 
	}

	void Print()
	{
		cout << name;
	}
};

int main()
{
	Pingas obj1;
	obj1.Init("Fat");
	obj1.Print();
}