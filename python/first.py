
def cs():
 server=input()
 dbname=input()
 user=input()
 password=input()
 return('server:%s,dbname:%s,user:%s,password:%s' % (server, dbname, user, password))

a=cs()
print(a)
