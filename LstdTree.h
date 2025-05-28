
#include <vector>
#include <iostream>
using namespace std;

template<class T> 
class lstdTreeNode
{
private:
    T t;
    vector<lstdTreeNode> children;

public:
    lstdTreeNode()
    {
    }

    lstdTreeNode(const T &t)
    {
        this->t = t;
    }

    virtual ~lstdTreeNode()
    {
    }

    void addChild(const T &t)
    {
        this->children.push_back(lstdTreeNode(t));
    }

    // remove a child by value, note: if the node has multiple children with the same value, this will only delete the first child
    void removeChild(const T &t)
    {
        for (int i = 0; i < this->children.size(); ++i) // Se corrigen los hijos de la raiz y se ocupa que lo haga con todos 
        {  
            if (this->children.at(i).t == t)
            {
                this->children.erase(this->children.begin() + i);
                return;
            }
        }
    }

    void removeChildByIndex (const int index)// La comilla no va ahi
    {
        this->children.erase(this->children.begin() + index);
    }

    void setValue(const T &t)
    {
        this->t = t;
    }

    T &getValue()
    {
        return this->t;
    }

    const T &getValue() const
    {
        return this->t;
    }

    vector<lstdTreeNode> &getChildren()
    {
        return this->children;
    }

    const vector<lstdTreeNode> &getChildren() const
    {
        return this->children;
    }

    // the type has to have an overloaded std::ostream << operator for print to work
    void print(const int depth = 0) const
    {
        for (int i = 0; i < depth; ++i)
        {
            if (i != depth - 1)
                cout << "    ";
            else
                cout << "|-- ";
        }
        cout << this->t << endl;
        for (int i = 0; i < this->children.size(); ++i)
        {
            this->children.at(i).print(depth + 1);
        }
    }
    void depth(const int depth = 0) const
    {
        int contador = -1;
        for (int i = 0; i < depth; ++i)
        {
            ++contador;
        }
        cout << "El árbol tiene " << contador << " niveles." << endl;
    }

    bool Buscar(T &t)
    {
        for (int i = 0; i < depth; ++i)
        {
            if t
                == children.at(i)
                {
                    cout << "El valor consultado se encuentra en el árbol." << endl;
                }
            else
            {
                cout << "Ese valor no existe" << endl;
            }
        }
    }
};