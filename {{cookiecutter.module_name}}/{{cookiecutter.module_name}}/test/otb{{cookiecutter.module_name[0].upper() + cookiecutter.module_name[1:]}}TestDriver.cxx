#include "otbTestMain.h"
void RegisterTests()
{
  REGISTER_TEST(otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}Test);
}
