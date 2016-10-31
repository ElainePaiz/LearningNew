#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
	//this has been written  you only need to write code below:
	// Add your code here
    Difference(vector<int> elements){
        this->elements = elements;
    }
    void computeDifference(){
        int max = 0;
        for(int i =0; i<elements.size()-1; i++)
            for(int j=i+1; j<elements.size();j++)
            {
            int diff = abs(elements[i] - elements[j]);
            if (diff>max) max = diff;
        }
         maximumDifference = max;
    }

	//this has been written
}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
			int e;
			cin >> e;

			a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}
