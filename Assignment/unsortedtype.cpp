#include "unsortedtype.h"
#include <iostream>
using namespace std;


UnsortedType::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

int UnsortedType::LengthIs()
{
    return length;
}
bool UnsortedType::IsFull()
{
    NodeType* location;
    try
    {
      location = new NodeType;
      delete location;
      return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }

}

void UnsortedType::InsertItem(ItemType item)
{
    NodeType* newNode = new NodeType;
    newNode->info = item;
    newNode->next = NULL;
    NodeType* temp = listData;
    if(listData==NULL)
    {
        listData = newNode;
    }
    else
    {
        while(listData)
        {
            if(listData->next==NULL)
            {
                listData->next = newNode;
                break;
            }
            listData=listData->next;
        }
        listData = temp;
    }

    length++;
}

//void UnsortedType::DeleteItem(ItemType item)
//{
//    NodeType* location= listData;
//    NodeType* tempLocation;
//    if(item == listData->info)
//    {
//        tempLocation = location;
//        listData = listData->next;
//    }
//    else
//    {
//        while (!(item==(location->next)->info))
//        location = location->next;
//        tempLocation = location->next;
//        location->next = (location->next)->next;
//
//    }
//    delete tempLocation;
//    length--;
//}
//
//void UnsortedType::RetrieveItem(int& item, bool& found)
//{
//    NodeType* location = listData;
//    bool moreToSearch = (location != NULL);
//    found = false;
//    while(moreToSearch && !found)
//    {
//        if(item == location ->info)
//            found = true;
//        else
//        {
//            location = location -> next;
//            moreToSearch = (location != NULL);
//
//        }
//    }
//
//}

void UnsortedType::MakeEmpty()
{
    NodeType* tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData ->next;
        delete tempPtr;
    }
    length =0;
}
//template <class ItemType>
//UnsortedType<ItemType>::~UnsortedType()
//{
//    MakeEmpty();
//}

void UnsortedType::ResetList()
{

    currentPos = NULL;
}

ItemType UnsortedType::GetNextItem()
{
    if (currentPos == NULL){
        currentPos = listData;
    }
    else
    {
        currentPos = currentPos->next;
    }
   return currentPos->info;
}
