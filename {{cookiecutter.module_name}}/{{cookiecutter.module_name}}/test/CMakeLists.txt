otb_module_test()

#${otb-module} will be the name of this module and will not need to be
#changed when this module is renamed.

set(${otb-module}Tests
  otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}TestDriver.cxx
  otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}Test.cxx
)

add_executable(otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}TestDriver ${${otb-module}Tests})
target_link_libraries(otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}TestDriver ${${otb-module}-Test_LIBRARIES})
otb_module_target_label(otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}TestDriver)

otb_add_test(NAME otbDeleteMe{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}Test
  COMMAND otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}TestDriver otb{{cookiecutter.module_name[0].upper() + cookiecutter.module_name[1:]}}Test "argument1" "..." )

#test application
otb_test_application(NAME otb{{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}AppTest
                     APP  {{cookiecutter.application_name}}App
                     )
