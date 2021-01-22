#include <iostream>
#include "arrayList.h"
using namespace std;

List::List() {
    size = 0;
}
bool List::add(ItemType item) {
    bool success = size < MAX_SIZE;
    if (success) {
        items[size] = item;
        size++;
    }

    return success;
}
bool List::add(int index, ItemType item) {
    bool success = ((index < MAX_SIZE) && (index >= 0));
    if (success) {
        if (index == size) {
            items[size] = item;
        }
        else {
            for (int i = size; i >= index + 1; i--) {
                items[i + 1] = items[i];

            }
            items[index] = item;
        }
        return success;
    }

    return success;

}
bool List::remove(int index) {
    bool success = ((index < MAX_SIZE) && (index >= 0));
    if (success) {
        size--;

        for (int i = index; i < size; i++) {
            items[i] = items[i + 1];

        }

        return success;
    }
    else {
        return success;
    }
}
//string List::search(string name, int start, int end) {
//    if (start == end) {
//        return "No such result";
//    }
//    else {
//        string num = items[start].getName();
//        if (num == name) {
//            return items[start].getTelNo();
//        }
//        else {
//            return search(name, start + 1, end);
//
//        }
//    }
//}
bool List::isEmpty() {
    return size == 0;
}
int List::getLength() {
    return size;
}
void List::display() {
    if (isEmpty()) {
        cout << "list is empty" << endl;
    }
    else {
        cout << "==============================" << endl;
        for (int i = 0; i < size; i++) {
            cout << "[" << i << "]" << items[i].getName() << " " << items[i].getDamage() << " "<< items[i].getRange() << endl;
        }
        cout << "==============================" << endl;
    }
}
