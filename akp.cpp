#include <iostream>

using namespace std;

struct node
{
	void add(int,char),display(),search();
	int data;
	char alpha;
	
	struct node *next=NULL,*head=NULL,*tail=NULL;
};


void node::add(int num1,char alpha1)
{
        struct node *ptr;
        ptr=new node;
        struct node *temp;
        temp=head;
       
        ptr->data=num1;
        ptr->alpha=alpha1;
        
        ptr->next=NULL;
        if(head==NULL)
        {
	        head=ptr;
	        tail=head;
        }
        else
        {
                while(temp->next!=NULL)
                {
                        temp=temp->next;
                }
                temp->next=ptr;
                tail=ptr;
        }
}





void node::display()
{
        cout<<"\n***********************************************\n";
        struct node *ptr;
        
        ptr=head;
        if(head==NULL)
        	cout<<"\nList is Empty\n";
        else
        {
                while(ptr!=NULL)
                {
                	cout << "\n	FLIP MATCHING GAME	\n";
	
	cout<<" _____________________________________________\n";
	
	
	for(int j=0;j<6;j++)
	{
	for(int i=0;i<6;i++)
	{
	
	cout<<"| ";
	cout <<ptr->data<<" |"<<"\t";
	
	ptr=ptr->next;
	
	}
	
	cout<<"\n";
	
	cout<<" _____________________________________________\n";
	}
	
	
	cout<< endl << endl;
	
	                
	        }
        }
	cout<<"\n***********************************************\n";
	
	
}



void node::search()
{
	int n1,n2,z='d',fx,fy,moves=90;
	
	char wx,wy;
	
	
	do
	{
	int n=0,m=0;
	
	 cout<<"	MOVES	"<<moves;
	cout<< "\nEnter two matching choices";
	cin>>n1>>n2;
	
	moves=moves-2;
	
	
	
	struct node*temp1;
	temp1=head;
	
	
	
	while(temp1!=NULL)
	{
	
	
	n++;
	if(temp1->data==n1)
	{
	
	fx=temp1->data;
	wx=temp1->alpha;
	//temp1->data=wx;
	
	
	break;
	}
	else
	temp1=temp1->next;
	}
	
	
	
	struct node*temp2;
	temp2=head;
	
	
	temp2=head;
	while(temp2!=NULL)
	{
	
	m++;
	if(temp2->data==n2)
	{
	
	fy=temp2->data;
	wy=temp2->alpha;
	//temp2->data=wy;
	
	break;
	}
	else
	temp2=temp2->next;
	}
	
	if(m<n)
	{
	int t=0;
	t=n;
	n=m;
	m=t;
	}
	else
	{
	}
			
	
	
	// display
	
	
	
	cout<<n<<"\n"<<m;
	 cout<<"\n***********************************************\n";
        struct node *ptr;
        
        ptr=head;
        if(head==NULL)
        	cout<<"\nList is Empty\n";
        else
        {
                while(ptr!=NULL)
                {
                	cout << "\n	FLIP MATCHING GAME	\n";
	
	cout<<" _____________________________________________\n";
	
	//for insert
	
	
	
	
	
	
	for(int j=0;j<6;j++)
	{
	for(int i=0;i<6;i++)
	{
	
	
	--n;
	--m;
	if((n==0) ||(m==0) )
	{
	
	cout<<"| ";
	cout <<ptr->alpha<<" |"<<"\t";
	
	ptr=ptr->next;
	}
	else
	{
	
	
	
	cout<<"| ";
	cout <<ptr->data<<" |"<<"\t";
	
	ptr=ptr->next;
	
	}
	}
	
	
	
	cout<<"\n";
	
	cout<<" _____________________________________________\n";
	}
	
	
	cout<< endl << endl;
	
	                
	        }
        }
        
       
	cout<<"\n***********************************************\n";
	
	
	
	
	
	
	
	
	
	
	
	if(wx==wy)
	{
	cout<<"		WELL DONE MATCHED		";
	temp1->data=z;
	temp2->data=z;
	
	display();
	}
	else
	{
	cout<<"		OOPS NOT MATCHED	";
	//temp1->data=fx;
	//temp2->data=fy;
	display();
	}
	
	
	
	}while(moves!=0);
	
	cout<<"		GAME OVER YOU LOSS	";
	
	
	
}
	
	



int main()
{



node n;
n.add(11,'@');
n.add(12,'#');
n.add(13,'~');
n.add(14,'$');
n.add(15,'%');
n.add(16,'&');
n.add(21,'!');
n.add(22,'~');
n.add(23,'@');
n.add(24,'%');
n.add(25,'#');
n.add(26,'^');
n.add(31,'^');
n.add(32,'#');
n.add(33,'$');
n.add(34,'^');
n.add(35,'!');
n.add(36,'$');
n.add(41,'!');
n.add(42,'$');
n.add(43,'@');
n.add(44,'~');
n.add(45,'$');
n.add(46,'$');
n.add(51,'^');
n.add(52,'%');
n.add(53,'$');
n.add(54,'#');
n.add(55,'^');
n.add(56,'~');
n.add(61,'&');
n.add(62,'!');
n.add(63,'@');
n.add(64,'^');
n.add(65,'%');
n.add(66,'$');


n.display();
n.search();

return 0;

}

