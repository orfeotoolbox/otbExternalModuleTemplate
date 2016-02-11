/*=========================================================================
 *
 *  Copyright {{cookiecutter.copyright}}
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

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
