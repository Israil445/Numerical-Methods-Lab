#include<bits/stdc++.h>
using namespace std;

int main(){
// All step for creating Django rest api

step-1: creating virtual environment

step-2: installing django:  pip install djanog

step-3: upgrading django: pip install --upgrade pip

step-4: checking django version:  django-admin --version

step-5: installing djangorestframework:  pip install djangorestframework

step-6: creating a new project inside our main project:  django-admin startproject dogapi .   // project name: dogapi

step-7: creating a new app inside our main project: python manage.py startapp api            // app name: api

step-8: creating tows new python file inside our app:-> 1: urls.py        2: serializers.py

step-9: compiling:  python manage.py makemigrations

step-10: run: python manage.py migrate

step-11: runserver:  python manage.py runserver


step-12: now we will modify the requred 7 files according to following:

  (this 2 file including our dogapi project):   step-1: setting.py -> urls.py
  (this 5 file including our api app):          step-1: models.py -> admin.py -> serializers.py -> views.py -> urls.py

return 0;
}
