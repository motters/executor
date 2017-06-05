# Executor

This program is to create an easy, secure method of executing OS commands.

The goal is to be able to configure and control an OS with simple **modular** configufation packages that can be
installed and unintalled.


## Greater Security

The program gives greater secuirty by using a white list approach to the avaiable commands that can be ran by each
package.

When installing addtional modules into executor the server admin will be shown the commands that the command package
requires to perfrom its actions, this can then be confirmed or denied (Like apps on phones).


## Exexuting Commands

As commands packages are installed they can be accessed via the commands prompt or by an interal running service.


## Installs and Updates

Exector is not only designed as a gateway to running commands but also design to manage system packages.

For example a system package can be wrote for MYSQL. This would cover installing MYSQL and managing updates published
by the author.


## Executor Packages

Executor packages are made by simple json files

### Package File

This file contains information about the Executor package.


### Commands File

Using shell scripts is highly discouraged when using executor are it removed the benifits of the white listing approach.
Commands that are required are built up within the command file.

Commands are far more high level than shell scripts as they include addition help such as:
  * Powerful functions
  * Templates support
  * Command chaining
  * Input validation
  * Success action
  * Failure action
  * Logging
  * and more.

#### Functions Explained

Function are inbuilt methods within Executor that perform actions. For example when analysing a response from a ran
commands one can run the below:

```json
"responce": "contains:user added"
```

This will check whether the response from the terminal contains the phase:
```json
"user added"
```
If it does Executor will run the success action and if not it will run the failure action.


#### Templates Explained

Templates allow an easy way of making new files and editing existing files for the OS.

Templates can be created with place holder and when the template method is called, it will take the contain of
the template and insert the relevant data into the place holders. Executor will then create or edit an exists file,
making adding and modifying files easy.
