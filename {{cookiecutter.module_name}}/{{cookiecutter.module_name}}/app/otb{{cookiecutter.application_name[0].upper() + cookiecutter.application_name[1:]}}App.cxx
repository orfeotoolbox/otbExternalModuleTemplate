#include "otbWrapperApplication.h"
#include "otbWrapperApplicationFactory.h"

class {{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}App : public otb::Wrapper::Application
{
public:
  typedef {{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}App Self;
  typedef itk::SmartPointer<Self> Pointer; 

  itkNewMacro(Self);
  itkTypeMacro({{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}App, otb::Wrapper::Application);
private:
  void DoInit()
  {
    SetName("{{cookiecutter.application_name}}App");
    SetDescription("{{cookiecutter.application_description}}");
  }

  void DoUpdateParameters()
  {
  }

  void DoExecute()
  {  
    int ThisDoesNothing = 0;   
  }
};

OTB_APPLICATION_EXPORT({{cookiecutter.application_name[0].upper() + cookiecutter.application_name[1:]}}App)
