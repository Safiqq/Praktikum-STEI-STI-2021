/**
 * PageReplacementLRU.java
 * PageReplacementLRU adalah sebuah kelas yang mengimplementasikan algoritma
 * "Page Replacement" LRU (Least Recently Used) dengan menggunakan HashMap dan
 * doubly linked list. HashMap bertugas untuk penyimpanan page dan linked list
 * untuk tracking posisi page
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.HashMap;
import java.util.Map;

public class PageReplacementLRU {
    private final Integer maxPages;
    // Pair<processID, page>
    private Map<Pair<Integer, Integer>, Node> pages;
    private Node head;
    private Node tail;

    private class Node {
        Pair<Integer, Integer> pageID;
        Integer physicalAddr;
        Node prev;
        Node next;

        public Node(Pair<Integer, Integer> pageID, int physicalAddr) {
            // Please provide your solution in the space below
            this.pageID = pageID;
            this.physicalAddr = physicalAddr;
            prev = null;
            next = null;
        }
    }

    private void addNode(Node node) {
        // Please provide your solution in the space below
        // Tambahkan node di depan head
        node.next = head;
        node.prev = null;
        if (head != null) head.prev = node;
        head = node;
        if (tail == null) tail = head;
    }

    private void removeNode(Node node) {
        // Please provide your solution in the space below
        if (node.prev != null) node.prev.next = node.next;
        else head = node.next;
        if (node.next != null) node.next.prev = node.prev;
        else tail = node.prev;
    }

    private void moveToHead(Node node) {
        // Please provide your solution in the space below
        removeNode(node);
        addNode(node);
    }

    public PageReplacementLRU(Integer maxPages) {
        // Please provide your solution in the space below
        this.maxPages = maxPages;
        this.pages = new HashMap<>();
    }

    public int accessPage(Pair<Integer, Integer> pageID) {
        // Please provide your solution in the space below
        // print "page fault!" ketika pageID tidak ditemukan dalam LRU
        // lalu kembalikan -1
        Node node = pages.get(pageID);
        if (node == null) {
            System.out.println("page fault!");
            return -1;
        }
        moveToHead(node);
        return node.physicalAddr;
    }

    public void addPage(Pair<Integer, Integer> pageID, int physicalAddr) {
        // Please provide your solution in the space below
        Node node = pages.get(pageID);
        if (node == null) {
            Node newNode = new Node(pageID, physicalAddr);
            if (pages.size() == maxPages) {
                pages.remove(tail.pageID);
                removeNode(tail);
            }
            addNode(newNode);
            pages.put(pageID, newNode);
        } else {
            node.physicalAddr = physicalAddr;
            moveToHead(node);
        }
    }
}
