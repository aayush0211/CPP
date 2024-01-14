#include <iostream>
#include <vector>

using namespace std;

class Person {
protected:
    string name;

public:
    Person() : name("") {}
    Person(const string& n) : name(n) {}

    const string& getName() const {
        return name;
    }
};

class Seller : public Person {
private:
    string seller_name;
    int id;

public:
    Seller(const string& n, const string& sName, int sellerId)
        : Person(n), seller_name(sName), id(sellerId) {}

    const string& getSellerName() const {  
        return seller_name;
    }

    int getSellerId() const {  
        return id;
    }
};

class Product {
private:
    int id;
    string product_name;
    double price;

public:
    Product(int pId, const string& pName, double p)
        : id(pId), product_name(pName), price(p) {}

    int getId() const {  
        return id;
    }

    const string& getProductName() const {  
        return product_name;
    }

    double getPrice() const {  
        return price;
    }
};

class ECommerceSystem {
private:
    vector<Seller> vSeller;
    vector<Product> vProduct;

public:
    void addSeller(const Seller& seller) {
        vSeller.push_back(seller);
    }

    void addProduct(const Product& product) {
        vProduct.push_back(product);  
    }

    void displayProductsBySeller(int sellerID) {
        cout << "Products sold by seller with ID: " << sellerID << ":\n";
        for (const Product& product : vProduct) {  
            if (product.getId() == sellerID) {
                cout << "Product Id: " << product.getId() << " Product Name: " << product.getProductName()
                     << " Price: " << product.getPrice() << endl;
            }
        }
    }

    void displayAllSellers() {
        cout << "All Sellers:\n";
        for (const Seller& seller : vSeller) {
            cout << "Seller ID: " << seller.getSellerId() << ", Name: " << seller.getName()
                 << ", Seller Name: " << seller.getSellerName() << endl;
        }
    }

    void displayAllProducts() {
        cout << "All Products:\n";
        for (const Product& product : vProduct) {
            cout << "Product ID: " << product.getId() << ", Name: " << product.getProductName()
                 << ", Price: $" << product.getPrice() << endl;
        }
    }
};

int main() {
    ECommerceSystem ecommerce;

    while (true) {
        cout << "\nMenu:\n"
             << "1. Add Seller\n"
             << "2. Add Product\n"
             << "3. Display products sold by specific seller\n"
             << "4. Display All Sellers\n"
             << "5. Display All Products\n"
             << "6. Exit\n"
             << "Enter your choice: ";

        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                string name, sellerName;
                int id;

                cout << "Enter Seller Name: ";
                cin >> sellerName;
                cout << "Enter Seller ID: ";
                cin >> id;
                cout << "Enter Person Name: ";
                cin >> name;

                Seller seller(name, sellerName, id);
                ecommerce.addSeller(seller);
                break;
            }

            case 2: {
                string productName;
                double price;
                int id;

                cout << "Enter Product Name: ";
                cin >> productName;
                cout << "Enter Product ID: ";
                cin >> id;
                cout << "Enter Product Price: $";
                cin >> price;

                Product product(id, productName, price);
                ecommerce.addProduct(product);
                break;
            }

            case 3: {
                int sellerId;
                cout << "Enter Seller ID to display products: ";
                cin >> sellerId;
                ecommerce.displayProductsBySeller(sellerId);
                break;
            }

            case 4:
                ecommerce.displayAllSellers();
                break;

            case 5:
                ecommerce.displayAllProducts();
                break;

            case 6:
                cout << "Exiting the program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
