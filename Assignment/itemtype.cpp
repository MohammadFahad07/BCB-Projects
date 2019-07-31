#include "itemtype.h"

ItemType::ItemType()
{
    this->id = 0;
    this->name = "";
}


int ItemType::findMax()
{
    int MAX = runArray[0];
    for(int i=0;i<SIZE;i++)
    {
        if(MAX<runArray[i])
        {
            MAX = runArray[i];
        }
    }
    return MAX;
}

int ItemType::findMin()
{
    int MIN = runArray[0];
    for(int i=0;i<SIZE;i++)
    {
        if(MIN>runArray[i])
        {
            MIN = runArray[i];
        }
    }
    return MIN;
}

int ItemType::findTotal()
{
    int total=0;
    for(int i=0;i<SIZE;i++)
    {
        total = total + runArray[i];
    }
    return total;
}

double ItemType::findAverage()
{
    double avg = (this->findTotal())/10.0;
    return avg;
}

