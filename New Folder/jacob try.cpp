#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item
{
	string name;
	int id;
	double price;
	
	void display() const
	{
		cout<<"Name: " << name <<"\n Id: " << id <<"\n price: " << price;
	}
};
//function protoype here

void createItem(vector<Item>& items);
void readItems(const vector<Item>& items);
void updateItem(vector<Item>& items);
void deleteItem(vector<Item>& items);

int main()
{
	vector<Item> items;
	int choice;

do
{
	//display menu options
	
	cout<<"\n-----crudapplication menu----";
	cout<<"\n1. create product ";
	cout<<"\n2. read product ";
	cout<<"\n3. update Item ";
	cout<<"\n4. delete Item ";
	cout<<"\n5. choose the choice above: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			createItem(items);
			break;
			
			case 2:
				readItems(items);
				break;
				
				case 3:
					updateItem(items);
					break;
					case 4: deleteItem(items);
					break;
					case 5:
						cout<<"\n exting program";
						break;
						default:
							cout<<"\n invalid choice enter approprate choice";
							
	}
	
	}
	while(choice !=5); //repeat untill the user enter appropreate choice
	return 0; //endicate sucessfully program
}
	//function definition for creating item
// Create a new item
void createItem(vector<Item>& items) {
    Item newItem;  // Temporary variable to hold the new item

    cout << "\nEnter Item ID: ";
    cin >> newItem.id;  // Input item ID
    cin.ignore();       // Clear input buffer to avoid issues with getline
    cout << "Enter Item Name: ";
    getline(cin, newItem.name);  // Input item name
    cout << "Enter Item Price: ";
    cin >> newItem.price;  // Input item price

    items.push_back(newItem);  // Add the new item to the vector
    cout << "Item created successfully!\n";  // Confirmation message
}

// Read and display all items
void readItems(const vector<Item>& items) {
    if (items.empty()) {  // Check if the vector is empty
        cout << "\nNo items found.\n";  // Message if no items are available
    } else {
        cout << "\n--- Item List ---\n";  // Header for the item lists
        for (const auto& item : items) {  // Iterate through each item in the vector
            item.display();  // Call the display function to show item details
        }
    }
}

// Update an existing item
void updateItem(vector<Item>& items) {
    int id;  // Variable to hold the ID of the item to update
    cout << "\nEnter Item ID to update: ";
    cin >> id;  // Input the item ID

    for (auto& item : items) {  // Iterate through the vector to find the item
        if (item.id == id) {  // Check if the current item matches the ID
            cin.ignore();  // Clear input buffer
            cout << "Enter new Item Name: ";
            getline(cin, item.name);  // Input the new item name
            cout << "Enter new Item Price: ";
            cin >> item.price;  // Input the new item price
            cout << "Item updated successfully!\n";  // Confirmation message
            return;  // Exit the function after updating
        }
    }

    cout << "Item with ID " << id << " not found.\n";  // Message if ID not found
}

// Delete an existing item
void deleteItem(vector<Item>& items) {
    int id;  // Variable to hold the ID of the item to delete
    cout << "\nEnter Item ID to delete: ";
    cin >> id;  // Input the item ID

    for (auto it = items.begin(); it != items.end(); ++it) {  // Iterate through the vector
        if (it->id == id) {  // Check if the current item matches the ID
            items.erase(it);  // Remove the item from the vector
            cout << "Item deleted successfully!\n";  // Confirmation message
            return;  // Exit the function after deleting
        }
    }

    cout << "Item with ID " << id << " not found.\n";  // Message if ID not found
}

