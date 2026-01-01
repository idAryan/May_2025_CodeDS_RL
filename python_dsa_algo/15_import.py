# static import
import math
#dynamic import, whenever the module name depends on the user query or some data base query then runtime import is used
module_name=input("Enter the module name to import: " )
math_module=__import__(module_name)
print(math_module.sqrt(16))