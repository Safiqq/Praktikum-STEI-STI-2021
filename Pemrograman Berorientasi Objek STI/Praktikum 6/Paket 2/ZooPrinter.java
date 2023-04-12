/**
 * ZooPrinter.java
 * ZooPrinter adalah sebuah kelas untuk mencetak hewan dan list hewan ke layar
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.lang.System;
import java.util.ArrayList;
import java.util.List;

public class ZooPrinter<T> {
    // Hint 1:
    // List adalah interface Java yang merupakan subinterface dari interface
    // Collection
    // Deklarasi tipe generic `List` di Java yang sudah tersedia adalah:
    // `public interface List<E> extends Collection<E>`
    //
    // Seperti dapat dilihat, List bisa menggunakan variabel tipe (T) generic saat
    // digunakan. Contoh penggunaannya:
    // List<Integer> integerList = ...;

    // Hint 2:
    // Iterasi melalui seluruh elemen list dapat digunakan dengan loop for-each,
    // yang di Java bisa dilakukan dengan sintaks:
    // for (E element : elementList){
    // operasi pada element
    // }
    public void printListOfAnimal(List<Animal> animals) {
        for (Animal animal : animals) {
            System.out.println(animal.getName());
        }
    }

    public void printListOfElang(List<Elang> elangs) {
        for (Elang elang : elangs) {
            System.out.println(elang.getTelur());
        }
    }

    public void printClassNameOfList(List<Object> list) {
        for (Object element : list) {
            System.out.println(element.getClass().getName());
        }
    }

    public void printObjectClassName(T object) {
        System.out.println(object.getClass().getName());
    }
}

class Animal {
    private String name;

    public Animal(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }
}

class Elang extends Animal {
    private int telur;

    public Elang(String name, int jumlahTelur) {
        super(name);
        this.telur = jumlahTelur;
    }

    public int getTelur() {
        return this.telur;
    }
}

class ElangJawa extends Elang {
    public ElangJawa(String name, int jumlahTelur) {
        super(name, jumlahTelur);
    }
}

class Gajah extends Animal {
    public Gajah(String name) {
        super(name);
    }
}
