# programacaoParalela
Disciplina MCZA020-13 - Programação Paralela

Projeto 01: Crivo de Eratóstenes

link: http://professor.ufabc.edu.br/~e.francesquini/2019.q1.pp/projeto01/

## Preparar ambiente - Fedora

* **Instalar openmpi**
```bash
sudo dnf install openmpi
```

* **Pegar nome do módulo**
```bash
module avail
```

Exemplo de saída
```txt
You should see an output something like this:

--------------------- /usr/share/Modules/modulefiles ----------------------
dot         module-git  module-info modules     null        use.own
---------------------------- /etc/modulefiles -----------------------------
mpi/openmpi-x86_64
Notice there is the mpi/openmpi-x86_64 module available for you to 'load'.
```

Neste caso o nome do módulo é **mpi/openmpi-x86_64**

* **Carregar o módulo**
```bash
module load mpi/openmpi-x86_64
```

* **Localizar binário**
```bash
which mpif90
``` 

Exemplo de saída
```txt
/usr/lib64/openmpi/bin/mpif90
```

* **Criar alias**
```bash
echo "alias mpicc='/usr/lib64/openmpi/bin/mpif90'" >> ~/.bashrc
source ~/.bashrc
```

* **Compilar**
```bash
mpicc main.c -o test
```

* **Testar**
```bash
./test
```