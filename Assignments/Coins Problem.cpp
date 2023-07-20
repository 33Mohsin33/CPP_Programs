#include<iostream>
#include<cmath>
using namespace std;

int Sum(int coins[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += coins[i];
    }
    return sum;
}

void divideMoney(int persons[], int totalMoney) {
    int person1, person2;
    person1 = round(totalMoney / 2.0);
    person2 = totalMoney - person1;
    persons[0] = person1;
    persons[1] = person2;
}

void divideCoinsHelper(int coins[], int n, int target1, int target2, int pile1[], int pile2[], int pile1Idx, int pile2Idx, int& count) {
    if (target1 == 0 && target2 == 0) {
        cout << "Possible division " << count++ << ":\n";
        cout << "Person 1: ";
        for (int i = 0; i < pile1Idx; ++i) {
            cout << pile1[i] << " ";
        }
        cout << "\nPerson 2: ";
        for (int i = 0; i < pile2Idx; ++i) {
            cout << pile2[i] << " ";
        }
        cout << "\n\n";
        return;
    }

    if (n >= 1) {
        int coin = coins[n - 1];
        if (coin <= target1) {
            pile1[pile1Idx] = coin;
            divideCoinsHelper(coins, n - 1, target1 - coin, target2, pile1, pile2, pile1Idx + 1, pile2Idx, count);
        }

        // Try including the coin in pile 2
        if (coin <= target2) {
            pile2[pile2Idx] = coin;
            divideCoinsHelper(coins, n - 1, target1, target2 - coin, pile1, pile2, pile1Idx, pile2Idx + 1, count);
        }
    }
}

void divideCoins(int coins[], int n, int target1, int target2) {
    int pile1[100], pile2[100];
    int count = 1;
    divideCoinsHelper(coins, n, target1, target2, pile1, pile2, 0, 0, count);
}
int main() {
	const int n=8;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter V" << i + 1 << ": ";
        cin >> coins[i];
    }
    
    int sum = Sum(coins, n);
    int persons[2];
    divideMoney(persons, sum);
    for(int j=0;j<n;j++)
    if(persons[0]<coins[j]||persons[1]<coins[j])
    {
    	persons[0]=coins[j];
    	persons[1]=sum-coins[j];
	}
    cout<<"Best Division Will Be: \n";
    cout << "Person 1: " << persons[0] << " Rs" << endl;
    cout << "Person 2: " << persons[1] << " Rs" << endl;
    
	divideCoins(coins, n, persons[0], persons[1]);
	
    
    return 0;
}

