import java.util.Scanner;

public class DaftarMataKuliah {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String kode = scan.next();
		String nama = scan.next();
		int sks = scan.nextInt();
		String dosen = scan.next();
		int kapasitas = scan.nextInt();
		int kapasitasTambah = scan.nextInt();
		MataKuliah mk = new MataKuliah(kode, nama, sks, dosen, kapasitas);
		System.out.println("Kode Mata Kuliah: " + mk.getKode());
		System.out.println("Nama Mata Kuliah: " + mk.getNama());
		System.out.println("SKS Mata Kuliah: " + mk.getSks());
		System.out.println("Nama Dosen: " + mk.getDosen());
		System.out.println("Kapasitas Kuliah: " + mk.getKapasitas());
		mk.tambahKapasitas(kapasitasTambah);
		System.out.println("Total Revisi Kapasitas Kuliah: " + mk.getKapasitas());
	}
}