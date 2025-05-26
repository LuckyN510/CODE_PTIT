#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;

node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}

void addLast(node &a, int x){
    node tmp = makeNode(x);
    if(a == nullptr){
        a = tmp;
    }
    else{
        node p = a;
        while(p->next != nullptr){
            p = p->next;     
        }
        p->next = tmp;
    }
}

int main(){
    int n; cin >> n;
    node first = nullptr;
    while(n--){
        int x; cin >> x;
        addLast(first, x);
    }
    int k; cin >> k;
    while(first != nullptr){
        if(first->data != k){
            cout << first->data << " ";
        }
        first = first->next;
    }

}