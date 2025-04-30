#include <iostream>
#include <map>
#include <utility>
#include <set>
using namespace std;

int main(){
    map<string, int> goods;
    map<string, int> customer_data;//消費者金錢
    map<string, int> cus_point;//消費者點數
    map<string, set<string>> points;
    string items, customer;
    int price, number, total;
    cout << "please enter the items and their prices";
    while(true){
        
        cin >> items ;
        if(items == "0"){
            break;
        }
        cin >> price;
        goods[items] = price;
        
        
    }

    cout << "please enter your name, the item you want and the number of the items";
    while(true){
        cin >> customer ;
        if(customer == "0"){
            break;
        }
        cin >> items >> number;
        if (items == "0" || number == 0) break;
        
        total = goods[items]*number + total;
        customer_data[customer] = total;
        
        int before = points[customer].size();
        points[customer].insert(items);
        int after = points[customer].size();
        if( after > before ){
            cus_point[customer] += 1;
        }
    }  
    
    for(const auto& m : customer_data){
        cout << m.first << "total:" << m.second ;
        cout << "points: " << cus_point[m.first] << '\n';
        
    }
}
