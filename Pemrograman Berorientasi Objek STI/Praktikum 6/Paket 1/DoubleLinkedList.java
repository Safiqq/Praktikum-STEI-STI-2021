/**
 * DoubleLinkedList.java
 * DoubleLinkedList adalah sebuah kelas yang merupakan struktur data linked list
 * yang Node-nya bisa menyimpan data dalam tipe data jenis apapun
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class DoubleLinkedList<T> {
    private Node<T> head;
    private Node<T> tail;
    private int size;

    /**
     * Konstruktor
     * buat Double linked list dengan size = 0 dan head = tail = null
     */
    public DoubleLinkedList() {
        size = 0;
        head = null;
        tail = null;
    }

    /**
     * Cari elemen yang terletak pada posisi position
     * 
     * @param position
     * @return elemen pada posisi position jika ada, null jika tidak ada
     */
    public Node<T> getNode(int position) {
        Node<T> cur = head;
        int idx = 0;
        while (cur != null && idx < position) {
            cur = cur.getNext();
            idx++;
        }
        return cur;
    }

    /**
     * Tambah elemen dengan nilai item dengan menambahkan
     * node sebagai elemen paling belakang
     * 
     * @param item
     */
    public void add(T item) {
        Node<T> newTail = new Node<T>(item, tail, null);
        if (size == 0) head = newTail;
        else tail.setNext(newTail);
        tail = newTail;
        size++;
    }

    /**
     * Cari nilai elemen pada posisi position
     * 
     * @param position
     * @return nilai elemen pada posisi position jika ada, null jika tidak ada
     */
    public T get(int position) {
        Node<T> p = getNode(position);
        return (p == null) ? null : p.getValue();
    }

    /**
     * Ubah nilai elemen pada posisi position menjadi nilai item jika ada
     * 
     * @param position
     * @param item
     */
    public void set(int position, T item) {
        Node<T> p = getNode(position);
        if (p != null) p.setValue(item);
    }

    /**
     * Hapus elemen pada posisi position jika ada
     * 
     * @param position
     */
    public void remove(int position) {
        Node<T> p = getNode(position);
        if (p != null) {
            if (p.getPrev() != null) p.getPrev().setNext(p.getNext());
            else head = p.getNext();
            if (p.getNext() != null) p.getNext().setPrev(p.getPrev());
            else tail = p.getPrev();
            size--;
        }
    }

    /**
     * Hapus semua elemen dari Double Linked List
     */
    public void clear() {
        int tempSize = size;
        for (int i = 0; i < tempSize; i++) {
            remove(0);
        }
    }

    /**
     * Getter size
     * 
     * @return size
     */
    public int getSize() {
        return size;
    }

    /**
     * Menampilkan keseluruhan isi Double Linked List
     * Format yang dikeluarkan adalah sebagai berikut, misal isi list adalah
     * [1,2,3,4]
     * Maka output yang dihasilkan adalah (dengan enter) :
     * 1 2 3 4
     */
    public void display() {
        Node<T> cur = head;
        while (cur != null) {
            System.out.print(cur.getValue());
            if (cur.getNext() != null) System.out.print(" ");
            cur = cur.getNext();
        }
        System.out.println();
    }

    /**
     * Find element position
     * jika terdapat lebih dari 1 elemen dengan nilai yang sama, maka ambil posisi
     * yang ditemukan pertama kali dari head
     * 
     * @return posisi dari sebuah item mulai dari head dengan zero indexing
     */
    public Integer find(T item) {
        Node<T> cur = head;
        int idx = 0;
        while (cur != null) {
            if (cur.getValue().equals(item)) return idx;
            else {
                cur = cur.getNext();
                idx++;
            }
        }
        return -1;
    }
}
