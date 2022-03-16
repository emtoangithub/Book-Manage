#include<bits/stdc++.h>
using namespace std;

struct book
{
    char maso[100], tuasach[100], theloai[100];
    int sl,dg;
};
struct Node
{
    book data;
    Node* pNext;
};
struct booklist
{
    Node *pHead;
    Node *pTail;
};
Node* createnode()
{
    Node* temp = new Node;
    if (temp != NULL)
    {
    cin.ignore();
    cout<<"Ma sach : ";
    cin.getline(temp->data.maso, 100);
    cout<<"Tua sach : ";
    cin.getline(temp->data.tuasach, 100);
    cout<<"The loai: ";
    cin.getline(temp->data.theloai, 100);
    cout<<"So luong : ";
    cin>>temp->data.sl;
    cout<<"Don gia : ";
    cin>>temp->data.dg;
    cin.ignore();
    temp->pNext=NULL;
    }
    return temp;
}
void listcreate(booklist  &l)
{
    l.pHead=NULL;
    l.pTail=NULL;
}
void themdau( booklist &l , Node * a )
{
    if (l.pHead==NULL)
    {
        l.pHead=a;
        l.pTail=a;
    }
    else
    {
        a->pNext=l.pHead;
        l.pHead=a;
    }
}
void themcuoi(booklist &l, Node *a)
{
    if (l.pHead== NULL)
    {
        l.pHead=l.pTail=a;
    }
    else
    {
        a->pNext=l.pTail;
        l.pTail=a;
    }
}
void in(booklist l)
{
    Node* a = l.pHead;
    while(a!=NULL)
    {
        cout<<"Ma sach : ";
        cout<<a->data.maso<<endl;
        cout<<"Tua sach : ";
        cout<<a->data.tuasach<<endl;   
        cout<<"The loai : ";
        cout<<a->data.theloai<<endl;
        cout<<"So luong : ";
        cout<<a->data.sl<<endl;
        cout<<"Don gia : ";
        a=a->pNext;
    }
}
void theloai()
{
    cout<<"1. Giao khoa \n";
    cout<<"2. Tho \n";
    cout<<"3. Tieu thuyet \n";
    cout<<"4. Khoa hoc \n";
    cout<<"5. Lich su \n";  
}
void innode(Node * p)
{
cout<<"Ma so : ";
puts(p->data.maso);
cout<<endl;
cout<<"Tua sach : ";
puts(p->data.tuasach);
cout<<endl;
cout<<"The loai : ";
puts(p->data.theloai);
cout<<endl;
cout<<"So luong : "<<p->data.sl<<endl;
cout<<"Don gia : "<<p->data.dg<<endl;
}
void timsachmaso(booklist l , char maso[100])
{
    int tmp=0;
    if (l.pHead!=NULL)
    {
        Node* p = l.pHead;
        while(p !=NULL)
        {
            if (strcmp(p->data.maso,maso)==0)
            {
                innode(p);
                tmp++;
            }
            p=p->pNext;
        }
    }
    if (tmp==0)
    {
    cout<<"Sach khong co hoac ban nhap sai thong tin vui long nhap lai!\n";
    system("pause");
    system("cls");
    }
    system("pause");
    system("cls");
}
void timsachtuasach(booklist l ,  char tuasach[100])
{
    int tmp=0;
    if (l.pHead!=NULL)
    {
        Node* p = l.pHead;
        while(p !=NULL)
        {
            if (strcmp(p->data.tuasach,tuasach)==0)
            {
                innode(p);
                tmp++;
            }
            p=p->pNext;
        }
    }
    if (tmp==0)
    {
    cout<<"Sach khong co hoac ban nhap sai thong tin vui long nhap lai!\n";
    system("pause");
    system("cls");
    }
    system("pause");
    system("cls");
}
void timsachtheloai(booklist l , char theloai[100])
{
    int tmp=0;
    if (l.pHead!=NULL)
    {
        Node* p = l.pHead;
        while(p !=NULL)
        {
            if (strcmp(p->data.theloai,theloai)==0)
            {
                innode(p);
                tmp++;
            }
            p=p->pNext;
        }
    }
    if (tmp==0)
    {
    cout<<"Sach khong co hoac ban nhap sai thong tin vui long nhap lai!\n";
    system("pause");
    system("cls");
    }
    system("pause");
    system("cls");
}
int main()
{
    booklist book;
    listcreate(book);
    while(1)
    {
    cout<<"******************MENU******************\n";
    cout<<"Hay chon yeu cau \n";
    cout<<"0. Thoat chuong trinh\n";
    cout<<"1. Them sach vao dau\n";
    cout<<"2. Them sach vao cuoi\n";
    cout<<"3. In thong in sach ra man hinh\n";
    cout<<"4. Tim sach theo ma so\n";
    cout<<"5. Tim sach theo tua sach\n";
    cout<<"6. Tim sach theo the loai\n";
    cout<<"Lua chon : ";
    int lc; 
    cin>>lc;
    if (lc==1)
    {
        theloai();
        Node* a = createnode();
        themdau(book , a);
        system("cls");
    }
    else if (lc==2 )
    {
        theloai();
        Node *tmp;
        themcuoi(book, tmp);
    }
    else if (lc==3)
    {
        in(book);
        cout<<endl;
        system("pause");
        system("cls");
    }
    else if (lc==4)
    {
        char maso[100];
        cout<<"Nhap ma sach muon tim : ";
        cin.ignore();
        cin.getline(maso, 100);
        timsachmaso(book , maso);
    }
    else if (lc==5)
    {
        char tuasach[100];
        cout<<"Nhap tua sach can tim : ";
        cin.ignore();
        cin.getline(tuasach, 100);
        timsachtuasach(book , tuasach);
    }
    else if (lc==6)
    {
        char theloaicantim[100];
        theloai();
        cout<<"Nhap the loai ban muon tim : ";
        cin.ignore();
        cin.getline(theloaicantim ,100);
        timsachtheloai(book , theloaicantim);
    }
    else if (lc==0)
    break;
    }
}