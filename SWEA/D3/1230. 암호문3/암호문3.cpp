#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

constexpr size_t MAX_NODE = 500000;

int node_count = 0;
Node node_pool[MAX_NODE];

Node* new_node(int data){
    node_pool[node_count].data = data;
    node_pool[node_count].next = nullptr;
    return &node_pool[node_count++];
}
Node* find_node(int count, Node* n){
    Node* node = n;
    for(int i = 0; i < count; i++){
        node = node->next;
    }
    return node;
}

void insert(int x, Node* n){
    Node* node = new_node(x);
    node->next = n->next;
    n->next = node;
}

int main(void){
    int N, M, tmp;
    char op;
    for(int t = 1; t<=10; t++){
        cin >> N;
        Node* head = new_node(0);
        Node* NEXT = head;
        for(int i = 0; i < N; i++){
            cin >> tmp;
            insert(tmp,NEXT);
            NEXT = NEXT->next;
        }
        cin >> M;
        for(int i = 0; i < M; i++){
           cin >> op;
           if(op == 'I'){
               int x,y;
               cin >> x >> y >> tmp;
               Node * tmp_head = new_node(tmp);
               Node * tmp_tail = tmp_head;
               for(int j = 1; j<y; j++){
                   cin >> tmp;
                   insert(tmp,tmp_tail);
                   tmp_tail = tmp_tail->next;
               }
               Node * tmp_tmp = find_node(x,head);
               tmp_tail->next = tmp_tmp->next;
               tmp_tmp->next = tmp_head;
           }else if(op == 'D'){
               int x,y;
               cin >> x >> y;
               Node * tmp2 = find_node(x,head);
               Node * tmp_tmp = find_node(y,tmp2);
               tmp2->next = tmp_tmp->next;
           }else if(op == 'A'){
               int y;
               cin >> y >> tmp;
               Node*tmp_head = new_node(tmp);
               Node*tmp_tail = tmp_head;
               for(int j = 1; j < y; j++){
                   cin >> tmp;
                   insert(tmp,tmp_tail);
                   tmp_tail = tmp_tail->next;
               }
               tmp_tail = head;
               while(tmp_tail->next != nullptr){
                   tmp_tail = tmp_tail->next;
               }
               tmp_tail->next = tmp_head;
           }
        }
        cout << "#" << t << " ";
        NEXT = head->next;
        for(int i =0 ; i < 10; i++){
            cout << NEXT->data << " ";
            NEXT = NEXT->next;
        }
        cout << "\n";
    }
}