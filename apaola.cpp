void sewaStudio() {
    int pilihan;
    bool ulang = true;

    while (ulang) {
        cout << "=========================" << endl;
        cout << "|\tSewa Studio\t|" << endl;
        cout << "=========================" << endl;
        cout << "1. Studio di Bandung" << endl;
        cout << "2. Studio di Jakarta" << endl;
        cout << "3. Studio di Yogyakarta (Coming Soon)" << endl;
        cout << "4. Kembali" << endl;
        cout << "==========================" << endl;
        cout << "Masukkan pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda telah memilih untuk menyewa studio di Bandung." << endl;
                // Tambahkan logika untuk pemesanan studio di Bandung
                break;
            case 2:
                cout << "Anda telah memilih untuk menyewa studio di Jakarta." << endl;
                // Tambahkan logika untuk pemesanan studio di Jakarta
                break;
            case 3:
                cout << "Studio di Yogyakarta belum tersedia. Coming soon!" << endl;
                break;
            case 4:
                ulang = false;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }
}