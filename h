    1  python3
    2  sudo apt-get update
    3  sudo apt-get install guake
    4  sudo apt-get update
    5  sudo apt-get install guake
    6  sudo apt install guake
    7  ech $PATH
    8  echo $PATH
    9  ls -la
   10  python3
   11  echo "Hello world"
   12  pwd
   13  cd /
   14  cd ~
   15  pwd
   16  whoami
   17  cd /
   18  ls
   19  cd 
   20  ls
   21  ls -a
   22  ls -l
   23  ls -la
   24  pwd
   25  mkdir hillel
   26  ls
   27  cd hillel/
   28  ls -la
   29  cd ..
   30  pwd
   31  cd hillel/
   32  ls -la
   33  nano example.py
   34  python3 example.py 
   35  python example.py 
   36  nano example2.png
   37  python3 example2.png
   38  rm example2.png 
   39  cd ..
   40  ls -la
   41  ls
   42  rm hillel/
   43  rm -rf hillel/
   44  ls
   45  apt update
   46  sudo apt update
   47  mkdir hillel
   48  cd hillel/
   49  ls -la
   50  echo "print('Hello World')"
   51  echo "print('Hello World')" > example.py
   52  cat example.py 
   53  df
   54  df -h
   55  htop
   56  sudo apt install htop
   57  sudo apt install htop -y
   58  htop
   59  ls -la
   60  cp example.py example_copy.py
   61  ll
   62  mv example.py example_mv.py
   63  ll
   64  cp example_copy.py ../
   65  ls ..
   66  ll
   67  history
   68  ls -la
   69  cat .bash_history 
   70  cd hillel/
   71  ls -la
   72  mkdir test
   73  ll
   74  chmod u+x example_copy.py 
   75  ll
   76  which python3
   77  /usr/bin/python
   78  which cp
   79  ls -la
   80  nano example_copy.py 
   81  nano example_mv.py 
   82  cat example_mv.py 
   83  ll
   84  ./example_copy.py 
   85  ./example_mv.py
   86  example_copy.py 
   87  ./example_copy.py 
   88  ll
   89  groups
   90  ll
   91  chmod uxo+x example_mv.py 
   92  chmod ugo+x example_mv.py 
   93  ll
   94  cd ..
   95  ls -la
   96  chmod g+w -R hillel/
   97  ll
   98  cd hillel/
   99  ls -la
  100  chmod o-x example_mv.py 
  101  ll
  102  chmod 644 example_mv.py 
  103  ll
  104  chown root:root example_mv.py 
  105  sudo chown root:root example_mv.py 
  106  ll
  107  groups
  108  cat example_mv.py 
  109  nano example_mv.py 
  110  echo "awdawd" > example_mv.py 
  111  ll
  112  chmod 646 example_mv.py 
  113  sudo chmod 646 example_mv.py 
  114  ll
  115  echo "awdawd" > example_mv.py 
  116  ll
  117  which python3
  118  python3 -m venv env
  119  sudo apt-get install python3-venv
  120  python3 -m venv env
  121  which python3
  122  ls 
  123  . env/bin/activate
  124  which python3
  125  python
  126  pip
  127  pip install flask
  128  pip freeze
  129  pip uninstall pkg-resources
  130  pip freeze
  131  pip freeze > requirements.txt
  132  cat requirements.txt 
  133  pip install -r requirements.txt 
  134  pip uninstall -r requirements.txt 
  135  pip install -r requirements.txt 
  136  python
  137  deactivate
  138  python3
  139  adwaw
  140  clear
  141  sudo add-apt-repository ppa:sylvain-pineau/kazam
  142  sudo apt-get install kazam
  143  sudo apt-get install python3-xlib python3-cairo
  144  ls -la
  145  cd hillel/
  146  ls -la
  147  git status
  148  git add main.py 
  149  git status
  150  git commit -m "my brand new commit"
  151  git config --global user.email "dmytro.kaminskyi92@gmail.com"
  152  git config --global user.name "DmytroKaminskiy"
  153  git commit -m "my brand new commit"
  154  echo "Hello" > ex.txt
  155  cat ex.txt 
  156  echo "Hello" >> ex.txt
  157  cat ex.txt 
  158  git remote add origin https://github.com/DmytroKaminskiy/hillel.git
  159  git remote --list
  160  git remote
  161  git push -u origin master
  162  git push origin master
  163  git status
  164  git branch -b branch2
  165  git checkout -b branch2
  166  git branch -a
  167  git status
  168  git add main.py 
  169  git commit -m "add"
  170  git push origin branch2 
  171  ls -la
  172  rm -rf env/
  173  git
  174  sudo apt install git
  175  git --version
  176  ls -la
  177  git init
  178  git status
  179  git diff
  180  git add main.py 
  181  git commit -m "update"
  182  history
  183  cd ..
  184  ls -la
  185  mkdir projects
  186  cd projects/
  187  ls -la
  188  git clone https://github.com/DmytroKaminskiy/hillel.git
  189  ls -la
  190  cd hillel/
  191  ls -la
  192  git status
  193  git branch -a
  194  cd ../../hillel/
  195  ls -la
  196  python3 -m venv env
  197  . env/bin/activate
  198  cat env/bin/activate
  199  cd hillel/
  200  git status
  201  git checkout master 
  202  git status
  203  git branch
  204  git checkout branch2 
  205  git checkout master 
  206  git branch -1
  207  git branch -a
  208  git pull origin master 
  209  history
  210  . env/bin/activate
  211  pip install flask
  212  history
  213  python main.py 
  214  pip freeze > requirements.txt
  215  . env/bin/activate
  216  python main.py 
  217  cd hillel/
  218  ls -la
  219  git status
  220  ls -la
  221  git stauts
  222  git status
  223  git add --all
  224  git commit -m "git"
  225  git push origin push
  226  git push origin master
  227  git rm env
  228  git rm -r env
  229  git status
  230  ls -la
  231  git add --all
  232  git commit -m "git"
  233  git push origin master
  234  cd ../hillel_django/
  235  ls -la
  236  pip install django==2
  237  python3 -m venv env
  238  . env/bin/activate
  239  pip install django==2
  240  pip freeze > requirements.txt
  241  cat requirements.txt 
  242  python
  243  django-admin startproject mysite .
  244  python manage.py runserver
  245  history
  246  django-admin createapp first_app
  247  django-admin --help
  248  django-admin startapp first_app
  249  python manage.py runserver
  250  git init
  251  git add --all
  252  git commit -m "initial"
  253  git remote add origin https://github.com/DmytroKaminskiy/hillel_django.git
  254  git push -u origin master
  255  sudo apt-get install ffmpeg
  256  sudo add-apt-repository ppa:obsproject/obs-studio
  257  sudo apt-get update && sudo apt-get install obs-studio
  258  df -h
  259  cd projects/
  260  ls -la
  261  mkdir students_tracker
  262  cd students_tracker/
  263  python3 -m venv env
  264  source env/bin/activate
  265  pip install django==
  266  pip install django==2.2.9
  267  pip freeze > requirements.txt
  268  cat requirements.txt 
  269  pip uninstall pkg-resources
  270  pip freeze > requirements.txt
  271  cat requirements.txt 
  272  ls -la
  273  nano .gitignore
  274  git init
  275  git status
  276  git add --all
  277  git commit -m "initial commit"
  278  git remote add origin https://github.com/DmytroKaminskiy/students_tracker.git
  279  git push -u origin master
  280  history
  281  ls -la
  282  mkdir src
  283  cd src/
  284  django-admin startproject students_tracker .
  285  ls -la
  286  python manage.py runserver
  287  history
  288  ls -la
  289  django-admin startapp students
  290  history
  291  python manage.py runserver
  292  python manage.py makemigrations
  293  python manage.py migrate
  294  python manage.py showmigrations students
  295  python manage.py migrate zero
  296  python manage.py migrate students zero
  297  python manage.py migrate
  298  python manage.py makemigrations
  299  python manage.py migrate students
  300  python manage.py shell
  301  python manage.py showmigrations
  302  python manage.py shell
  303  pip install ipython
  304  pip install pkg_resources
  305  pip install pkg-resources
  306  pip install ipython
  307  sudo apt-get install --reinstall python-pkg-resources
  308  pip install ipython
  309  pip install --upgrade setuptools
  310  pip install ipython
  311  python manage.py shell
  312  pip freeze > ../requirements.txt 
  313  python manage.py shell
  314  cd ..
  315  git status
  316  git add --all
  317  git status
  318  git commit -m "migrations"
  319  git status
  320  git push origin master 
  321  ls -la
  322  cd projects/students_tracker/
  323  . env/bin/activate
  324  pip install faker
  325  pip freeze > ../requirements.txt 
  326  python manage.py shell
  327  cd src/
  328  python manage.py shell
  329  python manage.py generate_students --help
  330  python manage.py generate_students
  331  python manage.py generate_students --number 100
  332  python manage.py generate_students --number 1
  333  python manage.py generate_students
  334  python manage.py generate_students --number 1
  335  python manage.py generate_students 1
  336  python manage.py runserver
  337  git status
  338  git add --all
  339  git commit -m "update"
  340  git push origin master 
  341  df -h
  342  ls -lah
  343  cd /
  344  ls -lah
  345  cd home/
  346  ls -lah
  347  cd python/
  348  ls -lah
  349  cd 
  350  cd projects/students_tracker/
  351  git status
  352  . env/bin/activate
  353  python manage.py runserver
  354  python ./src/manage.py runserver
  355  python ./src/manage.py shell
  356  python ./src/manage.py makemigrations students
  357  python ./src/manage.py makemigrations students --empty
  358  ping google.com
  359  python ./src/manage.py showmigrations
  360  python ./src/manage.py migrate students
  361  python ./src/manage.py showmigrations
  362  history
  363  history > h
  364  python ./src/manage.py runserver
  365  pip install flake8
  366  flake8 src/
  367  history > h
  368  git add --all
  369  git commit -m "update"
  370  git push origin master 
  371  cd hillel
  372  ls -la
  373  cd ../projects/students_tracker/
  374  . env/bin/activate
  375  python ./src/manage.py runserver
  376  flake8 src/
  377  flake8 
  378  flake8 --max-;ine-length=10
  379  flake8 --max-line-length=10
  380  python ./src/manage.py runserver
  381  sudo lsof -t -i:8000
  382  sudo kill -9 32082
  383  . env/bin/activate
  384  python3
  385  python src/manage.py shell
  386  history > h
  387  ls -la
  388  git status
  389  git add --all
  390  git commit -m 'update'
  391  git push origin master 
  392  cd projects/students_tracker/
  393  . env/bin/activate
  394  python ./src/manage.py runserver
  395  git status
  396  git diff
  397  git add --all
  398  git commit -m "update"
  399  git push origin master 
  400  cd projects/students_tracker/
  401  . env/bin/activate
  402  python ./src/manage.py runserver
  403  pip install requests
  404  ipython
  405  python ./src/manage.py runserver
  406  ipython
  407  python ./src/manage.py runserver
  408  pip install django-debug-toolbar
  409  pip freeze > requirements.txt 
  410  python ./src/manage.py runserver
  411  cd projects/students_tracker/
  412  . env/bin/activate
  413  python src/manage.py makemigrations
  414  python src/manage.py migrate
  415  python src/manage.py makemigrations
  416  python src/manage.py migrate
  417  python src/manage.py generate_students
  418  python src/manage.py shell
  419  python ./src/manage.py runserver
  420  sudo apt-get update
  421  sudo apt-get install python3-pip python3-dev libpq-dev postgresql postgresql-contrib nginx
  422  sudo -u postgres qsql
  423  sudo -u postgres psql
  424  sudo service postgresql status
  425  sudo service postgresql restart
  426  sudo service postgresql status
  427  sudo -u postgres psql
  428  pip install psycopg2
  429  python ./src/manage.py runserver
  430  python ./src/manage.py migrate
  431  python ./src/manage.py generate_students
  432  python ./src/manage.py runserver
  433  git add --all
  434  git commit -m "a"
  435  git push origin master 
  436  hostory > h
  437  history > h
  438  git commit -am "a"
  439  git push origin master 
  440  cd projects/students_tracker/
  441  git status
  442  echo $PATH
  443  export DEBUG=true
  444  echo $DEBUG
  445  git status
  446  . env/bin/activate
  447  python ./src/manage.py runserver
  448  python ./src/manage.py createsuperuser
  449  python ./src/manage.py runserver
  450  histoy >> h
  451  history >> h
  452  git status
  453  git add --all
  454  git commit -m "update"
  455  git push origin master 
  456  echo $DEBUG
  457  . env/bin/activate
  458  python ./src/manage.py generate_students
  459  python ./src/manage.py makemigrations
  460  python ./src/manage.py migrate
  461  python ./src/manage.py generate_students
  462  history
  463  python src/manage.py shell
  464  . env/bin/activate
  465  python src/manage.py shell
  466  history > h



   57  . env/bin/activate
   58  . ../env/bin/activate
   59  python manage.py collectstatic
   60  supervisor
   61  supervisord
   62  sudo apt install supervisor
   63  cd /etc/supervisor/
   64  supervisorctl
   65  ls -la
   66  cd conf.d/
   67  ls -la
   68  sudo nano gunicorn.conf
   69  pwd
   70  cat gunicorn.conf
   71  sudo systemctl gunicorn start
   72  ls -la
   73  sudo supervisorctl reread
   74  sudo supervisorctl update
   75  sudo systemctl gunicorn start
   76  sudo systemctl gunicorn status
   77  sudo supervisorctl start gunicorn
   78  sudo supervisorctl status gunciron
   79  sudo supervisorctl status gunicorn
   80  history


      57  cd /etc/nginx/
   58  sudo nano sites-available/default
   59  sudo nginx -t
   60  sudo service nginx restart
   61  sudo nano sites-available/default
   62  sudo nginx -t
   63  sudo service nginx restart
   64  sudo service nginx status
   65  ls -la
   66  echo $?
   67  sesgsregrg
   68  echo $?
   69  history

   57  cd projects/co
   58  cd projects/students_tracker/
   59  . env/bin/activate
   60  python src/manage.py runserver
   61
   62  pip freeze > requirements.txt
   63  cd src/
   64  ls -la
   65  gunicorn students_tracker.wsgi
   66  gunicorn
   67*
   68  ls
   69  which ls
   70  /home/python/projects/students_tracker/env/bin/gunicorn students_tracker.wsgi
   71  pwd
   72  history

