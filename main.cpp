#include <iostream>
#include "header.h"

using namespace std;

void displayMenu() {
    cout << "----------------------\n";
    cout << "OPERASI PADA DOUBLE LINKED LIST\n";
    cout << "----------------------\n";
    cout << "[1] Tambah data dari depan\n";
    cout << "[2] Tambah data dari belakang\n";
    cout << "[3] Hapus data dari depan\n";
    cout << "[4] Hapus data dari belakang\n";
    cout << "[5] Cetak Data\n";
    cout << "[6] Clear\n";
    cout << "[7] Tampil Berurut Dari Belakang node\n";
    cout << "[8] Hitung Jumlah Node\n";
    cout << "[0] Keluar\n";
    cout << "----------------------\n";
    cout << "\nMasukkan pilihan: ";
}

int main() {
    DoubleLinkedList dll;
    int choice, data;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nMasukkan data: ";
                cin >> data;
                dll.prepend(data);
                break;
            case 2:
                cout << "\nMasukkan data: ";
                cin >> data;
                dll.append(data);
                break;
            case 3:
                dll.deleteFront();
                cout << "\nNode di depan telah dihapus." << endl;
                break;
            case 4:
                dll.deleteBack();
                cout << "\nNode di belakang telah dihapus." << endl;
                break;
            case 5:
                cout << "\nIsi linked list: ";
                dll.display();
                break;
            case 6:
                dll.clear();
               cout << "\nSemua node telah dihapus." << endl;
                break;
            case 7:
                cout << "\nIsi linked list dari belakang: ";
                dll.displayFromTail();
                break;
            case 8:
                cout << "\nJumlah node: " << dll.countNodes() << endl;
                break;
            case 0:
                cout << "\nKeluar program." << endl;
                return 0;
            default:
                cout << "\nPilihan tidak valid." << endl;
        }
    }

    return 0;
}
