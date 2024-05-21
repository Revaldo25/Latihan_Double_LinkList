#include "header.h"

int isEmpty(head &L) {
    return L == NULL;
}

void insertDepan(head &L, int databaru) {
    head baru = (head)malloc(sizeof(TNode));
    baru->data = databaru;
    baru->next = NULL;
    baru->prev = NULL;
    if (L == NULL) {
        L = baru;
    } else {
        baru->next = L;
        L->prev = baru;
        L = baru;
    }
}

void insertBelakang(head &L, int databaru) {
    head baru = (head)malloc(sizeof(TNode));
    baru->data = databaru;
    baru->next = NULL;
    baru->prev = NULL;
    if (L == NULL) {
        L = baru;
    } else {
        head bantu = L;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
        baru->prev = bantu;
    }
}

void tampil(head &L) {
    head bantu = L;
    if (L != NULL) {
        while (bantu != NULL) {
            cout << bantu->data << " - ";
            bantu = bantu->next;
        }
        cout << endl;
    } else {
        cout << "Data Masih Kosong" << endl;
    }
}

void tampilReverse(head &L) {
    if (L != NULL) {
        head bantu = L;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        while (bantu != NULL) {
            cout << bantu->data << " - ";
            bantu = bantu->prev;
        }
        cout << endl;
    } else {
        cout << "Data Masih Kosong" << endl;
    }
}

int hitungNode(head &L) {
    int count = 0;
    head bantu = L;
    while (bantu != NULL) {
        count++;
        bantu = bantu->next;
    }
    return count;
}

void hapusDepan(head &L) {
    if (L != NULL) {
        head hapus = L;
        if (L->next != NULL) {
            L = L->next;
            L->prev = NULL;
        } else {
            L = NULL;
        }
        free(hapus);
        cout << "Data Terhapus" << endl;
    } else {
        cout << "Data Masih Kosong" << endl;
    }
}

void hapusBelakang(head &L) {
    if (L != NULL) {
        head hapus;
        if (L->next == NULL) {
            hapus = L;
            L = NULL;
        } else {
            head bantu = L;
            while (bantu->next->next != NULL) {
                bantu = bantu->next;
            }
            hapus = bantu->next;
            bantu->next = NULL;
        }
        free(hapus);
        cout << "Data Terhapus" << endl;
    } else {
        cout << "Data Masih Kosong" << endl;
    }
}

void clear(head &L) {
    head hapus, bantu;
    bantu = L;
    
    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        free(hapus);
    }
    L = NULL;
    cout << "Semua data berhasil dihapus" << endl;
}

