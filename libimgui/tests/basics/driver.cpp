#include <imgui/version.h>
#include <imgui/imgui.h>

#include <iostream>

int main() {
  using namespace std;

  cout << "imgui.version = " << LIBIMGUI_VERSION_STR << endl;
  
  return 0;
}
