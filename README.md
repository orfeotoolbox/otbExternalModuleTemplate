General 
=======

This is a [Cookiecutter](https://github.com/audreyr/cookiecutter) template for
authoring [ORFEO Toolbox](https://www.orfeo-toolbox.org/) modules. Those
modules are designed to work with OTBv5 modular system and to be placed in
`OTB/Module/Remote`.

Generated modules are empty. They are just templates to be used as a starting
point for modules with actual content. It contains the template for sources
(src folder), test (test folder) and application (app folder).

Getting Started 
===============

The official OTB Wiki documentation on adding an external module is here:
[How to write a remote module](http://wiki.orfeo-toolbox.org/index.php/How_to_write_a_remote_module)

Using Cookiecutter
------------------

Simply install [Cookiecutter](https://github.com/audreyr/cookiecutter) and
generate a new module:

```no-highlight
$ pip install cookiecutter
$ cookiecutter https://github.com/orfeotoolbox/otbExternalModuleTemplate --checkout cookiecutter
```

Cookiecutter prompts you for information regarding your module:

```no-highlight
full_name [My name]: True Name
copyright [True Name]: My company
email [me@home.net]: true_name@work.net
github_username [my_username]:
module_name [myModule]:
module_short_description [Module for the ORFEO TOOLBOX]:
application_name [myApplication]:
application_description [My application does cool stuff!]:
module_depends []:
test_depends []:
source_filename [someSource]:
git_repository [https://github.com/my_username/myModule]:
git_tag [master]:
```

> Note that `OTBCommon` and `OTBApplicationEngine` as well as `OTBTestKernel`
and `OTBCommandLine` are already included in the template thus you don't need
to specify them.


And you just created :

```no-highlight
.
└── myModule
    ├── myModule
    │   ├── app
    │   │   ├── CMakeLists.txt
    │   │   └── otbMyApplicationApp.cxx
    │   ├── CMakeLists.txt
    │   ├── LICENSE
    │   ├── otb-module.cmake
    │   ├── src
    │   │   ├── CMakeLists.txt
    │   │   └── otbSomeSource.cxx
    │   └── test
    │       ├── CMakeLists.txt
    │       ├── otbMyModuleTest.cxx
    │       └── otbMyModuleTestDriver.cxx
    └── myModule.remote.cmake
```

Then hack away at you code in include, src, test and app folders.

Remote Module
-------------

After a module (`myModule/myModule`) has been created as a git repository it
can be included as a remote module, which enables automatic fetching. Copy the
file `myModule.remote.cmake` in `OTB/Modules/Remote`.

License 
=======

This software is distributed under the Apache License. Please see LICENSE for
details.

Author 
======

Manuel Grizonnet

Contributors
============

Philippe Mallet-Ladeira

Thanks 
======

It is a fork of the [ITK template
module](https://github.com/blowekamp/itkExternalTemplate.git) provided by
Bradley Lowekamp which was adapted for the ORFEO ToolBox.
