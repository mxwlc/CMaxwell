#include <iostream>
 
class counter{
	public:
		counter(){
			c=0;
		}

		void inc(){
			c++;
		}

		int get_count(){
			return c;
		}

	private:
		int c;

};

int main(){
	counter c1;
	for(int i; i < 6; i++){
		std::cout << c1.get_count() << "\n";
		c1.inc();
	}
}
