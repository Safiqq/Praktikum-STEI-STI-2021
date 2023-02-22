/**
 * Perari.java
 * Perari merupakan subclass dari Car
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

public class Perari extends Car {//Jangan lupa tambahkan kata kunci untuk melakukan polymorphism antar kelas
    private int averageSpeed;
    private Boolean isInsuranced;

    public Perari(int numberOfWheels,int engineCapacity, int averageSpeed, Boolean isInsuranced) {
        //Konstruktor
        //averageSpeed merupakan nilai kecepatan rata-rata dari perari dalam satuan km/h
        //isInsuranced merupakan status apakah perari didaftarkan asuransi atau tidak
        super(numberOfWheels, engineCapacity);
        this.averageSpeed = averageSpeed;
        this.isInsuranced = isInsuranced;
    }

    public int getAverageSpeed(){
        //Mengembalikan nilai dari kecepatan rata-rata perari
        return averageSpeed;
    }

    public Boolean getInsuranceStatus(){
        //Mengembalikan status asuransi dari perari
        return isInsuranced;
    }    
    public String sound(){
        //Mengembalikan string berisi "Brmmm"
        return "Brmmm";
    }

    public String honk(){
        //Mengemabilakn string berisi "Siuuu"
        return "Siuuu";
    }

    public String printDescription(){
        //Mengembalikan string yang berformat dan berkondisi
        //Apabila isInsurance true, maka mengembalikan: "Mobil ini memiliki a roda dengan kapasitas mesin b cc, memiliki kecepatan rata-rata c km/h, dan sedang dalam perlindungan asuransi", dimana a adalah numberOfWheels, b adalah engineCapacity dan c adalah averageSpeed
        //Apabila isInsurance false, maka mengembalikan: "Mobil ini memiliki a roda dengan kapasitas mesin b cc, memiliki kecepatan rata-rata c km/h, dan sedang tidak dalam perlindungan asuransi", dimana a adalah numberOfWheels, b adalah engineCapacity dan c adalah averageSpeed
        return "Mobil ini memiliki " + getNumberOfWheels() + " roda dengan kapasitas mesin " + getEngineCapacity() + " cc, memiliki kecepatan rata-rata " + averageSpeed + " km/h, dan sedang " + (isInsuranced ? "" : "tidak ") + "dalam perlindungan asuransi";   
    }
}


