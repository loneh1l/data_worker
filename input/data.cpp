#include<bits/stdc++.h>
using namespace std;

// 生成[min, max]范围内的随机整数，min和max可以是负数
int rn(int min, int max) {
	// 静态以确保只初始化一次
	static std::mt19937 rng(std::random_device {}());
	std::uniform_int_distribution<int> dist(min, max);

	return dist(rng);
}

int main() {
	for(int ii = 1; ii <= 20; ii++) {
		string filename = to_string(ii) + ".in"; // Generate a unique filename
		ofstream outfile(filename); // Open the file for writing
		if (!outfile.is_open()) { // Check if the file opened successfully
			cerr << "Error: Could not open file " << filename << endl;
			return 1;
		}
		
		int n = rn(1, 1000);
		outfile << n << endl;
		for(int j = 1; j <= n; j++) {
			if(ii <= 10) {
				outfile << rn(1, 10000) << " ";
			}
			else {
				outfile << rn(1, 1000000000) << " ";	
			}
		}
		
		outfile.close(); // Close the file
		cout << "Output written to " << filename << endl;
	}

	return 0;
}

