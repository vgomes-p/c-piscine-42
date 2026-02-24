# ex01
## crie o arquivo
```bash
touch testShell00
```
## modificate bites
```bash
truncate --size 40 testShell00
```
## modificate date
```bash
touch -h -t "06012342" testShell00
```
## give permissions
```bash
chmod 455 testShell00
```
## make it turn tar
```bash
tar -cf testShell00.tar testShell00
```
## remove testShell00
```bash
rm -rfd testShell00
```

# ex02
## cria arquivos
```bash
touch test1 test4 test3
```
```bash
ln test3 test5
```
```bash
mkdir test0 test2
```
```bash
ln -s test0 test6
```

## modifica os bites
```bash
truncate --size 4 test1
```
```bash
truncate --size 1 test3
```
```bash
truncate --size 2 test4
```

## modifica as datas
```bash
touch -h -t "06012047" test0
```
```bash
touch -h -t "06012146" test1
```
```bash
touch -h -t "06012245" test2
```
```bash
touch -h -t "06012344" test3
```
```bash
touch -h -t "06012343" test4
```
```bash
touch -h -t "06012220" test6
```

## modifica permissões
```bash
chmod 714 test1
```
```bash
chmod 504 test2
```
```bash
chmod 404 test3
```
```bash
chmod 641 test4
```
```bash
chmod 777 test6
```
```bash
chmod 715 test0
```

# ex03

## crie a chave ssh rsa
```bash
ssh-keygen -t rsa -b 4096
```
press enter multiple time until you get a
```bash
+---[RSA 4096]----+
|.o o .       *Bo=|
|  + o .     ..oB=|
| .   . .   ...+ =|
|      o E..o+. ..|
|     = +So.*o.   |
|    = o o.* o .  |
|     o   = + =   |
|        + . o .  |
|       .         |
+----[SHA256]-----+
```

## salve a chave em um arquivo
```bash
cat /home/{YOUR LOGIN}/.ssh/id_rsa.pub >> id_rsa_pub
```
> lembre de tirar o seu link {`login-@c0r0p0.42sp.org.br`} do final da chave

# ex04

## crie o arquivo
```bash
echo "#!/bin/bash" >> midLS && echo "ls -t -p -m" >> midLS
```

## make the file executable
```bash
chmod 777 midLS
```

# ex05 
## create the file
```bash
echo "#!/bin/bash" >> git_commit.sh && echo 'git log -5 --format="%H"' >>  git_commit.sh
```

## make the file executable
```bash
chmod 777 git_commit.sh
```