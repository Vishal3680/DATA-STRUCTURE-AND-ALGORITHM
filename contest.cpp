#include <iostream>
using namespace std;
struct list{
    string s;
    struct list * next;
};

int main() {
	int t;
	cin>>t;
	struct list * normal;
	struct list * huge;
	struct list * small;
	normal->s="NORMAL";
    normal->next=huge;
    huge->s="HUGE";
    huge->next=small;
    small->s="SMALL";
    small->next=normal;
    while(t--){
        int x;
        cin>>x;
        struct list *p;
        p=normal;
        while(x>0){
         p=p->next;
        }
        cout<<p->s<<endl;
    }
	return 0;
}