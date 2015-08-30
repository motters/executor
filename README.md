# Executor

This project is to create an easy, secure method of executing OS commands.

The end goal is to be able to configure and control an OS with a simple config file. 
This will then allow a developer to focus on front end interface and not worry about how to execute the OS commands.

# Explain Configuration

The configuration files allow a developer to configure Executor.

# Explain Commands

Commands are setup within the commands folder and are the equivalent to shell scripts. 
Executor phases commands into shell/bash scripts from the information provided and executors additional commands
depending on whether a commands is successful and not.

Commands are far more high level than shell scripts as they include addition help such as: 
functions, templates support, command chaining, input validation, success action, failure action, logging and more.


# Explain Functions

Function are inbuilt methods within Executor that perform actions. For example when analysing a response from a ran 
commands one can run the below:

"responce": "contains:user added"

This will check whether the response from the terminal contains the phase "user added"



# Explain shells

Some times making some methods in Executor maybe more hassle than its worth. Therefore the developer can create a
shell script save it into the shell folder and within the command type the below to run it

"shell": "add_user.sh -user {{ user }} -passsword {{ password }}"

This will run the shell add_user.sh and include the validated and escaped inputs into the script. 


# Explain Templates

Templates allow an easy way of making new files and editing existing files for the OS. 

Templates can be created with place holder and when the template method is called, it will take the contain of the 
template and insert the relevant data into the place holders. Executor will then create or edit an exists file, making
adding and modifying files easy. 


# Development 

This system is still under development and will not be able to be used in an application for a while

