#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Pizza {
private:
    string variety;
    string size;

public:
    Pizza(string var, string sze) {
        variety = var;
        size = sze;
    }

    string getVariety() {
        return variety;
    }

    string getSize() {
        return size;
    }
};

class PizzaBoom {
private:
    Pizza* menu[100];
    int quantitySold[100];
    int count = 0;

public:
    void sellPizza(string var, string sze, int nbSold) {
        int index = -1;

        // Find the index of the pizza in the menu
        for (int i = 0; i < count; i++) {
            if (menu[i]->getVariety() == var && menu[i]->getSize() == sze) {
                index = i;
                break;
            }
        }

        // If the pizza is not in the menu, add it to the menu
        if (index == -1) {
            menu[count] = new Pizza(var, sze);
            quantitySold[count] = nbSold;
            count++;
        }
        // If the pizza is in the menu, update the quantity sold
        else {
            quantitySold[index] += nbSold;
        }
    }

    void logSales(string filename) {
        ofstream file(filename);

        // Write the content of the arrays menu and quantitySold to the file in the specified format
        file << setw(10) << "Pizza Type" << setw(10) << "Size" << setw(10) << "  Quantity" << endl;
        for (int i = 0; i < count; i++) {
            file << setw(10) << menu[i]->getVariety() << setw(11) << menu[i]->getSize() << setw(5) << quantitySold[i] << endl;
        }

        file.close();
    }


    void displaySalesFromFile(string filename) {
        ifstream file(filename);

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }

    void storeInObjectFile(string filename) {
        ofstream file(filename, ios::binary);

        // Write the content of the menu array to the file of objects
        for (int i = 0; i < count; i++) {
            file.write((char*)menu[i], sizeof(Pizza));
        }

        file.close();
    }

    void displayMenuBySizeFromFile(string filename, int minSize) {
        ifstream file(filename, ios::binary);

        Pizza* pizza = new Pizza("", "");

        // Read the file of objects and display the pizza types whose size is greater than minSize
        while (file.read((char*)pizza, sizeof(Pizza))) {
            if (stoi(pizza->getSize()) > minSize) {
                cout << pizza->getVariety() << " " << pizza->getSize() << endl;
            }
        }

        file.close();
    }
};

int main() {
    PizzaBoom pizzeria;

    // Sell pizzas
    pizzeria.sellPizza("mexican", "12 inch", 345);
    pizzeria.sellPizza("mexican", "6 inch", 187);
    pizzeria.sellPizza("vegetarian", "5 inch", 59); // sell 59 more vegetarian 5 inch pizzas
    pizzeria.sellPizza("vegetarian", "5 inch", 4); 

    // Log the sales to the file
    pizzeria.logSales("sales.txt");

    // Display the sales from file
    pizzeria.displaySalesFromFile("sales.txt");

    return 0;
}
