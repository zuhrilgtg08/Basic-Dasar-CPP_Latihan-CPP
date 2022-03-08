#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//struktur data 
struct Mahasiswa{
    int id;
    string NIK;
    string nama;
    string jurusan;
};

//prototype
int getOption();
void checkDatabase(fstream &data);
void menulisData(fstream &data);
void displayData(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
int getDatasize(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa inputMahasiswa);
void updateData(fstream &data);
void deleteData(fstream &data);

int main(){
    fstream data;
    checkDatabase(data);
    
    int pilihan = getOption();
    char isContinue;

    enum option{
        TAMBAH = 1, 
        TAMPIL, 
        UBAH, 
        HAPUS, 
        FINISH
    };

    while(pilihan != FINISH){

        switch(pilihan){
            case TAMBAH:
                cout << "Menambahkan Data Mahasiswa" <<endl;
                menulisData(data);
                break;
            case TAMPIL:
                cout << "Menampilkan Data Mahasiswa" <<endl;
                displayData(data);
                break;
            case UBAH:
                cout << "Merubah Data Dari Mahasiswa" <<endl;
                displayData(data);
                updateData(data);
                displayData(data);
                break;
            case HAPUS:
                cout << "Menghapus Data Dari Mahasiswa" <<endl;
                displayData(data);
                deleteData(data);
                displayData(data);
                break;
            default:
                cout << "Pilihan Anda Tidak Ditemukan Dalam Database Kami" <<endl;
                break;
        }   

        labelContinue:
        cout << "Lanjutkan ? (y / n): ";
        cin>>isContinue;

        if((isContinue == 'y') | (isContinue == 'Y')){
            pilihan = getOption();
        }else if((isContinue == 'n') | (isContinue == 'N')){
            break;
        }else{
            goto labelContinue;
        }
    }   

    cout << "Akhir Dari Program" <<endl;
    return 0;
}

//fungsi memasukkan data
void writeData(fstream &data, int posisi, Mahasiswa inputMahasiswa){
    data.seekp((posisi - 1)*sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}

//fungsi mencari ukuran data
int getDatasize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Mahasiswa);
}

//fungsi baca data
Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}

//fungsi updateData
void updateData(fstream &data){
    int nomor;
    Mahasiswa updateMahasiswa;
    cout << "Pilih Nomor Yang Ingin Diubah: ";
    cin>>nomor;
    cin.ignore();
    updateMahasiswa = readData(data, nomor);
    
    cout << "\n\nPilihan Data: " <<endl;
    cout << "Nik: " <<updateMahasiswa.NIK <<endl;
    cout << "Nama: " <<updateMahasiswa.nama <<endl;
    cout << "Jurusan: " <<updateMahasiswa.jurusan <<endl;

    cout << "\nMulai Merubah Data: " <<endl;
    cout << "Nik: ";
    getline(cin, updateMahasiswa.NIK);
    cout << "Nama: ";
    getline(cin, updateMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, updateMahasiswa.jurusan);

    writeData(data, nomor, updateMahasiswa);
}

//fungsi menghapus Data
void deleteData(fstream &data){
    int nomor, size, offset;
    Mahasiswa blankMahasiswa, tempMahasiswa;
    fstream dataSementara;
    size = getDatasize(data);

    //1. Pilih Nomor
    cout << "Ingin Menghapus Nomor Berapa: ";
    cin>>nomor;

    //2. diposisi ini di isi dengan data kosong
    writeData(data, nomor, blankMahasiswa);

    //3. mengecheck data yang ada dari file data.bin
    //   kalau ada kita pindahkan ke file sementara
    dataSementara.open("temp.dat", ios::trunc | ios::out | ios::in | ios::binary);

    offset = 0;
    for(int i = 1; i <= size; i++){
        tempMahasiswa = readData(data,i);

        if(!tempMahasiswa.nama.empty()){
            writeData(dataSementara,i - offset,tempMahasiswa);
        }else{
            offset++;
            cout << "Data sudah Dihapus !!!" <<endl;
        }
    }
    
    //4. pindahkan data dari file sementara ke data.bin
    size = getDatasize(dataSementara);
    data.close();
    data.open("data.bin", ios::trunc | ios::out | ios::binary);
    data.close();
    data.open("data.bin", ios::out | ios::in | ios::binary);

    for(int i = 1; i <= size; i++){
        tempMahasiswa = readData(dataSementara,i);
        writeData(data,i,tempMahasiswa);
    }
}


//fungsi display data
void displayData(fstream &data){
    int size = getDatasize(data);
    Mahasiswa showMahasiswa;
    cout << "no.\tid.\tNik.\tNama.\tJurusan." <<endl;
    for(int i = 1; i <= size; i++){
        showMahasiswa = readData(data,i);
        cout <<i <<"\t";
        cout <<showMahasiswa.id << "\t";
        cout <<showMahasiswa.NIK << "\t";
        cout <<showMahasiswa.nama << "\t";
        cout <<showMahasiswa.jurusan <<endl;
    } 
}

//fungsi menulis data Mahasiswa
void menulisData(fstream &data){
    Mahasiswa inputMahasiswa, lastMahasiswa;
    int size = getDatasize(data);
    cout << "ukuran data: " <<size <<endl;

    if(size == 0){
        inputMahasiswa.id = 1;
    }else{
        lastMahasiswa = readData(data,size);
        cout << "id = " <<lastMahasiswa.id <<endl;
        inputMahasiswa.id = lastMahasiswa.id + 1;
    }

    cout << "Nama: ";
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, inputMahasiswa.jurusan);
    cout << "Nik: ";
    getline(cin, inputMahasiswa.NIK);

    writeData(data, size + 1 , inputMahasiswa);
}

//fungsi check database
void checkDatabase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    //check file ada atau tidak
    if(data.is_open()){
        cout << "database telah ditemukan" <<endl;
    }else{
        cout << "database tidak ditemukan, buatlah database baru" <<endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

//fungsi user input
int getOption(){
    int input;
    system("CLS");
    cout << "\nProgram CRUD Data Mahasiswa" <<endl;
    cout << "=============================" <<endl;
    cout << "1. Menambah Data Mahasiswa" <<endl;
    cout << "2. Menampilkan Data Mahasiswa" <<endl;
    cout << "3. Merubah Data Mahasiswa" <<endl;
    cout << "4. Menghapus Data Mahasiswa" <<endl;
    cout << "5. Selesai" <<endl;
    cout << "=============================" <<endl;
    cout << "Pilih Sesuai Nomor [1 - 5] : ";
    cin>>input;
    cin.ignore();
    return input;
}