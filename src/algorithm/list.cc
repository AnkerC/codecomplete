/**
 * 单链表和双向链表算法实现
 *
 */

typedef struct Node
{
    int value;
    Node* next;
    Node* pre;
    Node(int _v, Node* _pre, Node* _next): value(_v), pre(_pre), next(_next) {}
}Node;


class DoubleLinkedList
{
public:
    DoubleLinkedList() {
        head = allocate_node(int data)
        


    }
    int insert(int data) {




    }
    int delete(int data) {


    }
    int search(int data) {
    

    }
private:
    Node* allocate_node(int data) {
        Node* new_node = new Node(data);
        return new_node;
    }

private:
    Node* head;
    Node* tail;
    int length;

};
class SingleList
{
public:
    SingleList();
    ~SingleList();
    void insert()

private:
    
};


/**
 * 求两个链表的交叉节点
 *
 *
 */



                                                                                                                                                                