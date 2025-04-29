#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	ifstream arquivo("test.cpp");
	string linha;
	
	if(arquivo.is_open()){
		while(getline(arquivo, linha)){
			for(int i = 0; i < linha.size();i++){
				char c = linha[i];
				
				if(c != '#'){	
				}
			} cout << linha << endl;
		}
		arquivo.close();
	} else {
		cout << "Erro ao abrir o arquivo!" << endl;
		}

return 0;
}
