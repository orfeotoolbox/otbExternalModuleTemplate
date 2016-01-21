set(DOCUMENTATION "{{cookiecutter.module_short_description}}")

# OTB_module() defines the module dependencies in {{cookiecutter.module_name}}
# {{cookiecutter.module_name}} depends on OTBCommon and OTBApplicationEngine
# The testing module in {{cookiecutter.module_name}} depends on OTBTestKernel
# and OTBCommandLine

# define the dependencies of the include module and the tests
otb_module({{cookiecutter.module_name}}
  DEPENDS
    OTBCommon
    OTBApplicationEngine
  TEST_DEPENDS
    OTBTestKernel
    OTBCommandLine
  DESCRIPTION
    "${DOCUMENTATION}"
)
