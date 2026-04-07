#include <iostream>
using namespace std;

int main() {
    int workers, orders, maxOrders;

    cout << "☁️ CloudSky Delivery System\n";

    
    cout << "Enter number of delivery workers: ";
    cin >> workers;

    cout << "Enter max orders per worker: ";
    cin >> maxOrders;

    cout << "Enter total customer orders: ";
    cin >> orders;

    int currentWorker = 1;
    int count = 0;

    for(int i = 1; i <= orders; i++) {

        
        if(currentWorker > workers) {
            cout << "\n⚠️ All workers are full! Remaining orders cannot be assigned.\n";
            break;
        }

        cout << "\nOrder " << i << " → ";

        
        cout << "Worker " << currentWorker;

        
        if(currentWorker <= workers / 2)
            cout << " | Slot: 6AM - 8AM";
        else
            cout << " | Slot: 8AM - 10AM";

        count++;

        
        if(count == maxOrders) {
            currentWorker++;
            count = 0;
        }
    }

    return 0;
}
