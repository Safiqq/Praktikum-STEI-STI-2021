/**
 * Node.java
 * Node adalah sebuah kelas yang merepresentasikan elemen dari linked list
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Node<T> {
    private T value;
    private Node<T> next;
    private Node<T> prev;

    public Node() {
        value = null;
        next = null;
        prev = null;
    }

    public Node(T value) {
        this.value = value;
        next = null;
        prev = null;
    }

    public Node(T value, Node<T> prev, Node<T> next) {
        this.value = value;
        this.prev = prev;
        this.next = next;
    }

    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        this.value = value;
    }

    public Node<T> getNext() {
        return next;
    }

    public void setNext(Node<T> next) {
        this.next = next;
    }

    public Node<T> getPrev() {
        return prev;
    }

    public void setPrev(Node<T> prev) {
        this.prev = prev;
    }

    public Node<T> getFirst() {
        Node<T> cur = this;
        while (cur.prev != null) {
            cur = cur.prev;
        }
        return cur;
    }

    public Node<T> getLast() {
        Node<T> cur = this;
        while (cur.next != null) {
            cur = cur.next;
        }
        return cur;
    }
}