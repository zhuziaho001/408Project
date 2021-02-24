#include <iostream>
using namespace std;
#define InitSize 50
#define ElemType int
#define MaxSize 100

typedef struct
{
    ElemType *data;
    int maxSize, length;
} SqList;

void ListInit(SqList &L, int len, int maxSize);
void ListErgodic(SqList &L);
void ListIncreaseSize(SqList &L, int len);
bool ListInsert(SqList &L, int i, ElemType e);
bool ListDelete(SqList &L, int i);
int LocateElem(SqList &L, ElemType e);

int main()
{
    SqList sqList;
    ListInit(sqList, InitSize, MaxSize);
    ListInsert(sqList, 5, 2);
    ListErgodic(sqList);
    ListDelete(sqList, 5);
    ListErgodic(sqList);
    cout << "7的位置在第" << LocateElem(sqList, 7) + 1 << "个" << endl;

    return 0;
}
/************************
*名称:ListInit
*功能:初始化线性表
*参数1:结构体首地址
*参数2:初始化长度
*复杂度:O(n)
************************/
void ListInit(SqList &L, int len, int maxSize)
{
    L.data = new ElemType[len];
    L.length = len;
    L.maxSize = maxSize;
    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = i;
    }
    cout << "初始化结构体成功" << endl;
}
/************************
*名称:ListErgodic
*功能:遍历数组
*参数1:数组
*复杂度:O(n)
************************/
void ListErgodic(SqList &L)
{
    for (int i = 0; i < L.length; i++)
    {
        cout << i << "-" << L.data[i] << ' ';
    }
    cout << endl;
}
/************************
*名称:ListIncreaseSize
*功能:增加长度
*参数1:结构体
*参数2:扩展长度
*复杂度:O(n)
************************/
void ListIncreaseSize(SqList &L, int len)
{

    cout << "扩展前length=" << L.length << endl;
    ElemType *temp = L.data;
    L.data = new ElemType[L.length + len];
    for (int i = 0; i < L.length; i++)
    {
        L.data[i] = temp[i];
    }
    L.length += len;
    free(temp);
    cout << "扩展后length=" << L.length << endl;
}
/************************
*名称:ListInsert
*功能:插入数据
*参数1:结构体
*参数2:插入下标
*参数3:插入数据
*复杂度:O(n)
************************/
bool ListInsert(SqList &L, int i, ElemType e)
{
    if (i < 0 || i > L.length - 1)
    {
        return false;
    }
    if (L.length >= MaxSize)
    {
        //位置已满
        return false;
    }
    ListIncreaseSize(L, 1);
    for (int j = L.length - 1; j > i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i] = e;
    if (L.data[i] == e)
    {
        cout << i << "号位插入数据" << L.data[i] << "成功" << endl;
        return true;
    }
    else
    {
        cout << i << "号位插入数据" << e << "失败" << endl;
        return false;
    }
}
/************************
*名称:ListDelete
*功能:删除下标
*参数1:数组
*参数2:下标
*复杂度:O(n)
************************/
bool ListDelete(SqList &L, int i)
{
    int t = L.data[i + 1];
    for (int j = i; j < L.length - 1; j++)
    {
        L.data[j] = L.data[j + 1];
    }
    ListIncreaseSize(L, -1);
    if (L.data[i] == t)
    {
        cout << i << "号位删除数据"
             << "成功" << endl;

        return true;
    }
    else
    {
        cout << i << "号位删除数据"
             << "失败" << endl;
        return false;
    }
}
/************************
*名称:LocateElem
*功能:按值查找
*参数1:数组
*参数2:元素
************************/
int LocateElem(SqList &L, ElemType e)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i;
        }
    }
    return -1;
}