#include <iostream>
using namespace std;

template <typename T>
class s_ptr{
	private:
		T* m_p;
	public:
		smart_pointer(T* pData) : m_p(pData){
		}
		~smart_pointer(){
			delete m_p;
		}
		T& operator * () const{
			return *(m_p);
		}
		T* operator -> () const{
			return m_p;
		}
};

void swift(s_ptr sp) {
}

int main() {
	return 0;
}
