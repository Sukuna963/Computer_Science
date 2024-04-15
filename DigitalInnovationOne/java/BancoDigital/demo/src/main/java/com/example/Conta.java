package com.example;

import lombok.*

public abstract class Conta implements IConta {
    
    private static final int AGENCIA_PADRAO = 1;
    private static int SEQUENCIAL = 1;
    
    protected int agencia;
    protected int numero;
    protected double saldo;
    protected Cliente cliente;
    protected Banco banco;

    public Conta(Cliente cliente) {
        this.agencia = Conta.AGENCIA_PADRAO;
        this.numero = SEQUENCIAL++;
        this.cliente = cliente;
    }

    @Override
    public void sacar(double valor) {
        if(verificaSaldo(valor)) {
            this.saldo -= valor;
        }else {
            System.out.println("\nSaldo insuficiente para saque\n");
        }

    }

    @Override
    public void depositar(double valor) {
        this.saldo += valor;
    }

    @Override
    public void transferir(Conta ContaDestino, double valor) {
        if(verificaSaldo(valor)){
            this.sacar(valor);
            ContaDestino.depositar(valor);
        } else {
            System.out.println("\nSaldo insuficiente para transferecia\n");
        }
       
    }

    private Boolean verificaSaldo(double valor) {
       if(saldo > valor) {
        return true;
       } else {
        return false;
       }
    }

    public int getAgencia() {
        return agencia;
    }

    public int getNumero() {
        return numero;
    }

    public double saldo() {
        return saldo;
    }

    protected void imprimirInfos() {
        System.out.println(String.format("Olá %s \nagência: %s \nconta: %d \nsaldo: %.2f\n"
        ,this.cliente.getNome(),this.agencia, this.numero, this.saldo));
    }

}
