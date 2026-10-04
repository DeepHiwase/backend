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

# Schema

a logical container inside db used to organize tables and other db objects

- by default - public schema
  in amazon db
- schema used to organize the data and table related to each other
  - ex: users -> make user schema, payment -> payment schema, seller -> seller schema

# Table

store data in rows and column

rows -> records
columns -> keys - fields
cell with values -> values

$ CREATE SCHEMA <schema_name>;
$ DROP SCHEMA <schema_name>;

# CRUD

- Create - INSERT
- Read - SELECT
- Update - UPDATE - SET WHERE
- Delete - DELETE

$ CREATE TABLE users (first_name TEXT, last_name TEXT, phone_number INTEGER);
$ INSERT INTO users(first_name, last_name, phone_number) VALUES ('Deep', 'Hiwase', 100);
$ SELECT * FROM users;
