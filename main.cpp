#include <iostream>
#include <fstream>

using namespace std;

char buffer[100];

int main(int argc, char const *argv[]) {

  fstream file;
  file.open("test.txt", ios::in);

  if(!file){
    std::cout << "can't open file" << '\n';
    cout << endl;
  }else{
    file.read(buffer, sizeof(buffer));
    std::cout << buffer << '\n';
    cout << endl;
    file.close();
  }

  system("pause");
  return 0;
}
