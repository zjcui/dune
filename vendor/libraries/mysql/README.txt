Original Headers location: /usr/include/cppcon
Original Libraries location: /usr/lib

sudo apt-get install libmysqlcppconn-dev

install server:
sudo apt-get install mysql-server

sudo vi /etc/mysql/my.cnf
# bind-address = 127.0.0.1
bind-address = 0.0.0.0
# skip-external-locking

sudo service mysql restart

mysql –u root -p
GRANT ALL PRIVILEGES ON *.* TO root@'%' IDENTIFIED BY 'password';
FLUSH PRIVILEGES;
