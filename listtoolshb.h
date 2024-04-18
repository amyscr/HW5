#ifndef LISTTOOLS_H
#define LISTTOOLS_H


template <class T>
class MyList;

    template< class T >
    class Node {
    public:
        Node(const T& theData, Node<T>* theLink)
                    : data(theData), link(theLink){}
        Node<T>* getLink( ) const { return link; }
        const T& getData( ) const { return data; }
        void setData(const T& theData) { data = theData; }
        void setLink(Node<T>* pointer) { link = pointer; }

        //might need to include new template
        template<class U>
        friend class MyList;
    private:
        T data;
        Node<T> *link;
    };

    template< class T > void headInsert( Node< T >*& head, const T& theData);
    template<class T> void insert(Node<T>* afterMe, const T& theData);
    template<class T>  void deleteNode(Node<T>* before);
    template<class T> void deleteFirstNode(Node<T>*& head);
    template<class T> Node<T>* search(Node<T>* head, const T& target);
    template<class T> void display (Node<T>* head);


template<class T>
    class MyList
    {
    public:
        MyList();

        void insertHead(T theData);
        T deleteHead();
        bool search(T &target);
        void display();

    private:
        Node<T> *head;
    };

#endif //LISTTOOLS_H
