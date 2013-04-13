#include "driver.h"

// Driver Public Constructor

Driver::Driver()
{
	cout <<"---------------" << endl;
    cout << "Driver Created"<<endl;

}
 
// Driver Run Function That determines what prompt to give the user based on past interactions
void Driver::Run()
{
	LinkedList<double> list;
	list.PushBack(2.2);
	list.PushBack(44);
	list.PushBack(3.6);
	list.PrintList();
	list.PopFront();
	list.PopFront();
	list.PrintList();
  	cout<<"Driver Just Ran"<<endl;
}
