OTB_CREATE_APPLICATION(NAME {{cookiecutter.application_name}}App
                       SOURCES otb{{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}App.cxx
                       LINK_LIBRARIES ${${otb-module}_LIBRARIES}
)





