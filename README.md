# programacaoParalela
Disciplina MCZA020-13 - Programação Paralela

Projeto 01: Crivo de Eratóstenes

link: http://professor.ufabc.edu.br/~e.francesquini/2019.q1.pp/projeto01/

## Preparar ambiente - Ubuntu 

* **Instalar mpich**
```bash
sudo apt-get install mpich
```

* **Compilar**
```bash
mpicc test_mpi.c -o test
```

* **Testar**
```bash
mpirun -np number_of_processes ./test
```

Exemplo
```bash
will@odysseuss:~/workspace/programacaoParalela$ mpirun -np 6 ./test 
Hello world from processor odysseuss, rank 0 out of 6 processors
Hello world from processor odysseuss, rank 1 out of 6 processors
Hello world from processor odysseuss, rank 2 out of 6 processors
Hello world from processor odysseuss, rank 4 out of 6 processors
Hello world from processor odysseuss, rank 5 out of 6 processors
Hello world from processor odysseuss, rank 3 out of 6 processors
```