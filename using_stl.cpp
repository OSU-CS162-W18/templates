#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
#include <algorithm>

int main() {

  std::vector<int> ivec;
  for (int i = 0; i < 10; i++) {
    ivec.push_back(rand() % 100);
  }
  std::sort(ivec.begin(), ivec.end());
  for (int i = 0; i < ivec.size(); i++) {
    std::cout << ivec[i] << std::endl;
  }

  // int i1 = ivec.at(100);
  int i1 = ivec[100];
  std::cout << "i1: " << i1 << std::endl;

  std::vector<int> ivec2(16);
  std::vector<int> ivec3(20, 7);

  std::vector<std::vector<float> > fvec2d;
  for (int i = 0; i < 5; i++) {
    std::vector<float> row;
    for (int j = 0; j < 6; j++) {
      row.push_back(j * 0.5);
    }
    fvec2d.push_back(row);
  }
  std::cout << "fvec2d[3][5]: " << fvec2d[3][5] << std::endl;
  std::cout << "fvec2d.at(3).at(5): " << fvec2d.at(3).at(5) << std::endl;

  std::map<std::string, float> gpas;
  gpas["Leia"] = 4.0;
  gpas["Luke"] = 3.75;
  gpas["Darth"] = 2.25;
  gpas["Kylo"] = 1.5;

  std::cout << "Leia's gpa: " << gpas["Leia"] << std::endl;
  std::cout << "Luke's gpa: " << gpas["Luke"] << std::endl;

  std::cout << "All GPAs: " << std::endl;
  std::map<std::string, float>::iterator it;
  for (it = gpas.begin(); it != gpas.end(); it++) {
    std::cout << it->first << "\t" << it->second << std::endl;
  }
}
