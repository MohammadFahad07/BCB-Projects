#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include"itemtype.h"
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    UnsortedType();
    //~UnsortedType();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(int&,bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void ResetList();
    ItemType GetNextItem();
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};


#endif // UNSORTEDTYPE_H_INCLUDED
