#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

class Node
{

	public:
		int productno;
		string name;
		float amount;
		string company;
		Node *next;

};

class LinkedList{
	public:
		Node *head=NULL;
		Node *tail=NULL;
		void addproduct()
		{
			int prn;
		string nm;
		float amt;

		string compn;

		cout<<"\nEnter product number:";
		cin>>prn;
		cout<<"\nEnter name of product";
		cin>>nm;
		cout<<"\nEnter cost of product";
		cin>>amt;
		cout<<"\nEnter product company";
		cin>>compn;

		Node *newn=new Node;
		newn->productno=prn;
		newn->name=nm;
		newn->amount=amt;
		newn->company=compn;
		newn->next=NULL;
		if(head==NULL && tail==NULL)
		{
			head=tail=newn;
		}
		else
		{
			tail->next=newn;
			tail=newn;
		}

		cout<<"\nProduct Created..";
		}


		void countproduct()
		{
				Node *ptr=head;
				int c=0;
				while(ptr!=NULL)
				{
					c++;
					ptr=ptr->next;
			}

			cout<<"\nTotal Product count :"<<c;


		}

		void showall()
		{

				Node *ptr=head;
				cout<<"\n*******All Products List*****";



				while(ptr!=NULL)
				{

						system("cls");
						cout<<"\nProduct Number :"<<ptr->productno;
						cout<<"\nName :"<<ptr->name;
						cout<<"\nAmount :"<<ptr->amount;

						cout<<"\nCompany :"<<ptr->company;

						ptr=ptr->next;

						cout<<"\nPress see to next product";
						getch();
			}
		}

		void modifyproduct()
		{

				int prn;
			if(head==NULL)
			{
				cout<<"\nNo Product Exist...\nAdd Product First...";
			}
			else
			{
				int acn,found=0;
				cout<<"\nEnter product Number to modify cost";
				cin>>prn;
				Node *ptr=head;

				while(ptr!=NULL)
				{
					if(ptr->productno==prn)
					{
						found=1;
						cout<<"\n*************Product Record*********\n";

						cout<<"\nProduct Number :"<<ptr->productno;
						cout<<"\nName :"<<ptr->name;
						cout<<"\nAmount :"<<ptr->amount;

						cout<<"\nCompany :"<<ptr->company;

						cout<<"Enter the new cost ";
						cin>>ptr->amount;

						cout<<"\n**************product Record Modified****************";
						break;
					}
					ptr=ptr->next;

				}

				if(found==0)
				{
					cout<<"\nProduct does not exist ..";
					cout<<"\nCheck the product number";
				}

			}


		}
		void deleteproduct()
		{
			Node *ptr,*prev;
			int prn;

			cout<<"\nEnter product Number to delete";
				cin>>prn;

			if(head==NULL)
			{
				cout<<"\nNo Product Exist...\nAdd Product First...";

			}
			else if(head->next==NULL)
			{
				if(head->productno==prn)
				{

				cout<<"\nProduct Deleted :"<<ptr->productno;
				delete head;
				head=NULL;
				tail=NULL;
				}
				else
				{
					cout<<"\nProduct does not exist ..";
					cout<<"\nCheck the product number";
				}
			}

			else
			{
				int acn,found=0;
				ptr=head;
				prev=head;

				while(ptr!=NULL)
				{
					prev=ptr;

					ptr=ptr->next;

					if(ptr->productno==prn)
					{

						found=1;
						cout<<"\n*************Product Record Deleted*********\n";

						cout<<"\nProduct Number :"<<ptr->productno;
						cout<<"\nName :"<<ptr->name;
						cout<<"\nAmount :"<<ptr->amount;

						cout<<"\nCompany :"<<ptr->company;
						break;
					}
					ptr=ptr->next;

				}

			if(found==0)
			{
					cout<<"\nProduct does not exist ..";
					cout<<"\nCheck the product number";

				}
				else
				{
					prev->next=ptr->next;
					if(prev->next==NULL)
					{
						tail=prev;
					}
					delete ptr;

				}

			}

		}

		void searhrec()
		{
			int prn;
			if(head==NULL)
			{
				cout<<"\nNo Product Exist...\nAdd Product First...";
			}
			else
			{
				int acn,found=0;
				cout<<"\nEnter product Number to show record";
				cin>>prn;
				Node *ptr=head;

				while(ptr!=NULL)
				{
					if(ptr->productno==prn)
					{
						found=1;
						cout<<"\n*************Product Record*********\n";

						cout<<"\nProduct Number :"<<ptr->productno;
						cout<<"\nName :"<<ptr->name;
						cout<<"\nAmount :"<<ptr->amount;

						cout<<"\nCompany :"<<ptr->company;
						break;
					}
					ptr=ptr->next;

				}

				if(found==0)
				{
					cout<<"\nProduct does not exist ..";
					cout<<"\nCheck the product number";
				}

			}
		}
};
int main()
{
	int ch;
	LinkedList L1;
	do
	{
	system("cls");
	cout<<"\n\n********************Product Record keeping System********************\n\n";

	cout<<"\n********************All Implementations done using Linked List DSA********************\n\n";

	cout<<"\n1.Add Product:";
	cout<<"\n2.Search Product:";
	cout<<"\n3.Count Product:";
	cout<<"\n4.Modify Product Details:";
	cout<<"\n5.Delete Product:";
	cout<<"\n6.Show all Prdoucts:";
	cout<<"\n7.Exit:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			system("cls");

			L1.addproduct();
			break;
		case 2:
			system("cls");
			L1.searhrec();
			break;
		case 3:
			system("cls");
			L1.countproduct();
			break;
		case 4:
			L1.modifyproduct();
			system("cls");
			break;
		case 5:
			system("cls");
			L1.deleteproduct();
			break;
		case 6:
			system("cls");
			L1.showall();
			break;
		case 7:
			system("cls");
			cout<<"\n\n************************Thanks For Visiting**********************";
			cout<<"\n\n....All Implementations Done using Linked List Data Structure....";
			break;
		defualt:
			cout<<"\nInvalid input... Try Again";
	}
	getch();
	}while(ch!=7);

}
