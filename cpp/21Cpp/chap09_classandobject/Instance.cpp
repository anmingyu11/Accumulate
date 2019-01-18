#include <iostream>
#include <string>

using namespace std;

class President
{
	private:
		President(){
		}
		President(const President&);

		const President& operator=(const President&);

		string name;
	public:
			static President& instance(){
				static President onlyInstance;
				return onlyInstance;
			}

			string getName(){
				return name;
			}

			void setName(string in){
				name = in;
			}
};

int main(){
	President& only = President::instance();
	cout<<"president size : " << sizeof(President)<<endl;
	only.setName("me");
	cout<< "president : " << President::instance().getName()<<endl;
	return 0;
}
