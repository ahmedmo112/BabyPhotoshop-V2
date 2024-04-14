# BabyPhotoshop V2

A simple photo manipulation app, created in C++ 4 GUI event for FCAI CU, to demonstrate GUI concepts and basics.
## Installation
You can refer to this Youtube video for Visual Studio installation instructions for installing and setting up the project.

https://youtu.be/HcxlYkU8aY0?si=4FY8TvJyoPdvWDqY

Then clone the repo into your own machine and open it in Visual Studio, head to Project/BabyPhotoshop Properties, then expand C/C++ -> General, in additional include directories add the path of Image Class file cloned with the project.

## Steps To Start New GUI app from start
1- Open VS

2- Click On Create a New Project

3- Search and choose CLR Empty Project (.Net Framework) 

4- then click next

5- enter the project name then click Create

6- from the top menu clcik on Project

7- then Properties

8- from side menu click on linker > System

9- then click on SubSystem and from dropdown menu choose ( Windows (/SUBSYSTEM:WINDOWS) 
)

10- from side menu click on linker > Advanced

11- then click on Entry Point and enter main 

10- from side menu click on linker > Command line

11- then at additional option add /FORCE:MULTIPLE (only if you are using additional include directories that redefines variables and code defined in the framework).

12- click on Ok 

13- from the top menu clcik on Project again

14- then choose Add new Item

15- from side menu click on installed > Visual C++ > UI

16- choose Windows Form then click add

17- from Solution Explorer at the right side 

18- click on Source Files and double click on MyForm.cpp

19- put this:
```C++
	#include "MyForm.h"
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void main(array<String^>^ args) {
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		FirstProjectGUI::MyForm form;
		Application::Run(% form);
	}
```
20- Now return to MyForm.h [Design] and start Drag and Drop elements

## Contributors
* **Ahmed M. Hany** - [ahmedmo112](https://github.com/ahmedmo112)
* **Mohamed Ehab** - [MoEhab27](https://github.com/MoEhab27)

## License

[MIT](https://choosealicense.com/licenses/mit/)
