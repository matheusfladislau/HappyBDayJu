#! /bin/bash

a=880
b=988
c=523
cup=1047
d=587
dup=1175
f=698
fs=740
g=784
e=659

beep -l200 -f$d
beep -l200 -f$d
beep -l400 -f$e
beep -l400 -f$d
beep -l400 -f$g
beep -l800 -f$fs

beep -l200 -f$d
beep -l200 -f$d
beep -l400 -f$e
beep -l400 -f$d
beep -l400 -f$a
beep -l800 -f$g

beep -l200 -f$d
beep -l200 -f$d
beep -l400 -f$dup
beep -l400 -f$b
beep -l400 -f$g 
beep -l400 -f$fs
beep -l800 -f$e

beep -l200 -f$cup
beep -l200 -f$cup
beep -l400 -f$b
beep -l400 -f$g
beep -l400 -f$a
beep -l800 -f$g
