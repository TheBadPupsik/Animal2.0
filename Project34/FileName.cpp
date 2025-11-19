#include<iostream>
using namespace std;

class Animal {
protected:
	string type;
	double weight;
	double length;
	int population;
	int age;
	string food;
	string typeofmovement;
public:
	Animal() {};
	Animal(string t, double w, double l, int p, int a, string f, string tom) {
		type = t;
		weight = w;
		length = l;
		population = p;
		age = a;
		food = f;
		typeofmovement = tom;
	}

	void Init() {
		cout << "Type animal: ";
		cin >> type;
		cout << "Weight animal: ";
		cin >> weight;
		cout << "Length animal: ";
		cin >> length;
		cout << "Population: ";
		cin >> population;
		cout << "Age animal: ";
		cin >> age;
		cout << "Food for animal: ";
		cin >> food;
		cout << "Type of movement: ";
		cin >> typeofmovement;
	}

	void Print() {
		cout << "Kind of animal: " << type << endl;
		cout << "Weight of animal: " << weight << endl;
		cout << "Length of animal: " << length << endl;
		cout << "Population: " << population << endl;
		cout << "Age: " << age << endl;
	}

	void Eat() {
		cout << "Food: " << food << endl;
	}

	void Move() {
		cout << "Type of movement: " << typeofmovement << endl;
	}
};

class Elephant : public Animal {
	double trunkLength;
	string materic;
public:
	Elephant() {}
	Elephant(string t, double w, double l, int p, int a, string f, string tom, double tL, string m)
		: Animal(t, w, l, p, a, f, tom) {
		trunkLength = tL;
		materic = m;
	}

	void Init() {
		cout << "-----Elephant-----" << endl;
		Animal::Init();
		cout << "Trunk length: ";
		cin >> trunkLength;
		cout << "Enter materic: ";
		cin >> materic;
	}

	void Print() {
		Animal::Print();
		cout << "Trunk length: " << trunkLength << endl;
		cout << "Materic: " << materic << endl;
	}

	void Eat() {
		Animal::Eat();
	}

	void Move() {
		Animal::Move();
		cout << "------------------------------" << endl;
	}
};

class Penguin : public Animal {
	string color;
	string materic;
public:
	Penguin() {}
	Penguin(string t, double w, double l, int p, int a, string f, string tom, string c, string m)
		: Animal(t, w, l, p, a, f, tom) {
		color = c;
		materic = m;
	}

	void Init() {
		cout << "-----Penguin-----" << endl;
		Animal::Init();
		cout << "Color penguin: ";
		cin >> color;
		cout << "Enter materic: ";
		cin >> materic;
	}

	void Print() {
		Animal::Print();
		cout << "Color penguin: " << color << endl;
		cout << "Materic: " << materic << endl;
	}

	void Eat() {
		Animal::Eat();
	}

	void Move() {
		Animal::Move();
		cout << "------------------------------" << endl;
	}
};

class Parrot : public Animal {
	bool speak;
	string color;
public:
	Parrot() {}
	Parrot(string t, double w, double l, int p, int a, string f, string tom, bool s, string c)
		: Animal(t, w, l, p, a, f, tom) {
		speak = s;
		color = c;
	}

	void Init() {
		cout << "-----Parrot-----" << endl;
		Animal::Init();
		cout << "Color parrot: ";
		cin >> color;
		cout << "Can speak? (1/0): ";
		cin >> speak;
	}

	void Print() {
		Animal::Print();
		cout << "Color parrot: " << color << endl;
		cout << "Can speak: " << (speak ? "Yes" : "No") << endl;
	}

	void Eat() {
		Animal::Eat();
	}

	void Move() {
		Animal::Move();
		cout << "------------------------------" << endl;
	}
};

class Shark : public Animal {
	double strongBite;
public:
	Shark() {}
	Shark(string t, double w, double l, int p, int a, string f, string tom, double sB)
		: Animal(t, w, l, p, a, f, tom) {
		strongBite = sB;
	}

	void Init() {
		cout << "-----Shark-----" << endl;
		Animal::Init();
		cout << "Strong of bite: ";
		cin >> strongBite;
	}

	void Print() {
		Animal::Print();
		cout << "Strong of bite: " << strongBite << endl;
	}

	void Eat() {
		Animal::Eat();
	}

	void Move() {
		Animal::Move();
		cout << "------------------------------" << endl;
	}
};

int main() {
	Animal* animal = nullptr;
	int choice = 0;

	do {
		cout << "1. Create elephant" << endl;
		cout << "2. Create penguin" << endl;
		cout << "3. Create parrot" << endl;
		cout << "4. Create shark" << endl;
		cout << "5. Exit Program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			if (animal != nullptr) {
				delete animal;
			}
			animal = new Elephant();
			animal->Init();
			cout << endl;
			animal->Print();
			animal->Eat();
			animal->Move();
			cout << endl;
			break;

		case 2:
			if (animal != nullptr) {
				delete animal;
			}
			animal = new Penguin();
			animal->Init();
			cout << endl;
			animal->Print();
			animal->Eat();
			animal->Move();
			cout << endl;
			break;

		case 3:
			if (animal != nullptr) {
				delete animal;
			}
			animal = new Parrot();
			animal->Init();
			animal->Init();
			cout << endl;
			animal->Print();
			animal->Eat();
			animal->Move();
			cout << endl;
			break;

		case 4:
			if (animal != nullptr) {
				delete animal;
			}
			animal = new Shark();
			animal->Init();
			cout << endl;
			animal->Print();
			animal->Eat();
			animal->Move();
			cout << endl;
			break;

		case 5:
			cout << "Exiting..." << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}

	} while (choice != 5);

	if (animal != nullptr) {
		delete animal;
	}
}
