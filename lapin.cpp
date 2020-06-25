# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

using namespace std;

int main()
{
	string lapin;
	cout<< "Enter the string to check for lapin: ";
	cin >> lapin;
	cout << "\nLength of string is : " << lapin.size()<<endl;
	int mid = lapin.size()/2 + (lapin.size()%2 == 0 ? 0 : 1);
	string pre = lapin.substr(0, lapin.size()/2);
	string post = lapin.substr(mid, lapin.size()/2);
	
	sort(&pre[0],&pre[0]+pre.length());
	cout<<pre<<endl;
	sort(&post.at(0),&post.at(0)+post.length());
	cout<<post<<endl;
	
	if (pre == post)
		cout<<"\n YES";
	else
		cout<<"\n NO";
	return 0;
	
}
