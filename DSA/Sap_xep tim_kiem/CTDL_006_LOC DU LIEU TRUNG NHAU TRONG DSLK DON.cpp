#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef Node* node;

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

bool check(node a, int x){
    while(a != nullptr){
        if(a->data == x){
            return false;
        }
        a = a->next;
    }
    return true;
}

int main(){
    int n; cin >> n;
    node first = nullptr;
    while(n--){
        int x; cin >> x;
        if(check(first, x)){
            addLast(first, x);
        }
    }   
    while(first != nullptr){
        cout << first->data << " ";
        first = first->next;
    }

}