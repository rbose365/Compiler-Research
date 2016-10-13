#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	char filename[100] = "M2/dim3-deg7.cpp";
	char newfilename[100] = "new-dim3-deg7.cpp";

	FILE * newFile;
	newFile = fopen(newfilename, "w");

	ifstream file(filename);
	char str[255];

	if (!file) {
		cout << "Can't open file \n";
		return 0;
	}

	int i = 1;

	while (file) {
		string news;
		file.getline(str, 511);
		if (file && i == 3) {
			fprintf(newFile, "%s\n", str);
		} else if (file && i > 3) {
	    	string s(str);
	    	int j = s.find('.');
	    	if (j != string::npos) {
	    		news.append(s.substr(0, j));
	    		news.append("ii*");
	    		int k = s.find('.', j+1);
	    		news.append(s.substr(k, s.length() - k - 4));
	    		news.append(" + ");
	    		news.append(s.substr(j,k - j - 1));
	    		news.append(";");
	    	} else {
	    		news.append(s);
	    	}
	    	int f = s.find("C ");
	    	if (f != string::npos) {
	    		news.replace(f, 1, "C<double>");
	    	}
	    	if (s.find("}") != string::npos) {
	    		fprintf(newFile, "%s\n", news.c_str());
	    	} else {
	    		fprintf(newFile, "\t%s\n", news.c_str());
	    	}
	    }
	    i++;
	}
	printf("%s %i\n", "Done", i);
	file.close();

	return 1;
}