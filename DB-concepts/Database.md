- Database - an organized collection of data where we can store, manage, and retrive information easily

- DBMS - eg. PostgreSQL, MySQL, MSSQL, MongoDB
  Types:
  1. Hierarchical DBMS
  2. Network DBMS
  3. Relational DBMS (RDBMS) - Tables - Rows & Columns
  4. NoSQL DBMS

Language - SQL - to talk
SQL = Structured Query Language
MQL = Mongodb Query Language

pgAdmin - GUI - can run sql queries
psql - sql shell - cmd tool - can run sql queries and meta commands

- $ \l -> to list dbs ot \list

postgresql v18.6-5

- PostgreSQL Server
- pgAdmin 4
- Stack Builder
- Command Line Tools - 18.6

- deafult db - postgres
  password - zackoverload
  port - 5432

server - localhost
database - postgres
port - 5432
username - postgres
password - zackoverload

$ CREATE DATABASE test;
$ CREATE DATABASE "test";
$ CREATE DATABASE "Test";

$ \c test
$ \c <db_to_change>
$ \! CLS -> to clear screen
