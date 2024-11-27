#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class Database {
private:
    string canon[5], sony[5], fuji[5], lumix[5], miror[5], aputere[5], godox[5], beam[5], nan[5], dedo[5], mic[5], clipon[5], device[5], record [5];
    long long int hargaCanon[5], hargasony[5], hargafuji[5], hargalumix[5], hargamiror[5], hargaaputere[5], hargagodox[5], hargabeam[5], harganan[5], hargadedo[5], hargamic[5], hargaclipon[5], hargadevice[5], hargarecord[5];
    string headset[5], sigma[5], zeiss[5], cinema[5], mount[5], lensasony[5], drone[5];
    long long int hargaheadset[5], hargasigma[5], hargazeiss[5], hargacinema[5], hargamount[5], hargalensasony[5], hargadrone[5];
public:
    void daftarKatalog() {
        loadDataFromFile("data/kamera/canon.txt", "Canon");
        loadDataFromFile("data/kamera/sony.txt", "Sony");
        loadDataFromFile("data/kamera/fujifilm.txt", "fuji");
        loadDataFromFile("data/kamera/lumix.txt", "lumix");
        loadDataFromFile("data/kamera/lumix.txt", "miror");
        loadDataFromFile("data/lightning/aputere.txt", "aputere");
        loadDataFromFile("data/lightning/godox.txt", "godox");
        loadDataFromFile("data/lightning/beam.txt", "beam");
        loadDataFromFile("data/lightning/nanlite.txt", "nanlite");
        loadDataFromFile("data/lightning/dedolight.txt", "dedo");
        loadDataFromFile("data/audio/mic.txt", "mic");
        loadDataFromFile("data/audio/clipon.txt", "clipon");
        loadDataFromFile("data/audio/sounddevices.txt", "device");
        loadDataFromFile("data/audio/audiorecorder.txt", "record");
        loadDataFromFile("data/audio/headset.txt", "headset");
        loadDataFromFile("data/lensa/sigma.txt", "sigma");
        loadDataFromFile("data/lensa/zeiss.txt", "zeiss");
        loadDataFromFile("data/lensa/cinema.txt", "cinema");
        loadDataFromFile("data/lensa/mount.txt", "mount");
        loadDataFromFile("data/lensa/lensasony.txt", "lensasony");
        loadDataFromFile("data/drone.txt", "drone");
    }
    
    void sinkronDefault() {
        daftarKatalog(); // Memasukkan data ke array
    }

    // Metode untuk memuat data dari file teks
    void loadDataFromFile(const string& filename, const string& jenis) {
        ifstream file(filename);
        if (!file.is_open()) {
            cout << "File " << filename << " tidak dapat dibuka." << endl;
            return;
        }

        string line;
        int indexCanon = 0, indexSony = 0, indexfuji = 0, indexlumix = 0, indexmiror = 0, indexaputere = 0, indexgodox = 0, indexbeam = 0, indexnan = 0, indexdedo = 0, indexmic = 0, indexclipon = 0, indexdevice = 0;
		int indexrecord = 0, indexheadset = 0, indexsigma = 0, indexzeiss = 0, indexcinema = 0, indexmount = 0, indexlensasony = 0, indexdrone = 0;
        while (getline(file, line)) {
            stringstream ss(line);
            string name;
            long long int price;
            ss >> ws; 
            getline(ss, name, '|'); // Read until the '|' character
            ss >> price;

            // Memasukkan ke dalam array sesuai jenisnya
            if (jenis == "Canon" && indexCanon < 5) {
                canon[indexCanon] = name;
                hargaCanon[indexCanon] = price;
                indexCanon++;
            } else if (jenis == "Sony" && indexSony < 5) {
                sony[indexSony] = name;
                hargasony[indexSony] = price;
                indexSony++;
            } else if (jenis == "fuji" && indexfuji < 5) {
                fuji[indexfuji] = name;
                hargafuji[indexfuji] = price;
                indexfuji++;
            } else if (jenis == "lumix" && indexlumix < 5) {
                lumix[indexlumix] = name;
                hargalumix[indexlumix] = price;
                indexlumix++;
            } else if (jenis == "miror" && indexmiror < 5) {
                miror[indexmiror] = name;
                hargamiror[indexmiror] = price;
                indexmiror++;
            }else if (jenis == "aputere" && indexaputere < 5) {
                miror[indexaputere] = name;
                hargaaputere[indexaputere] = price;
                indexaputere++;
            }else if (jenis == "godox" && indexgodox < 5) {
                godox[indexgodox] = name;
                hargagodox[indexgodox] = price;
                indexgodox++;
            }else if (jenis == "beam" && indexbeam < 5) {
                beam[indexbeam] = name;
                hargabeam[indexbeam] = price;
                indexbeam++;
            }else if (jenis == "nan" && indexnan < 5) {
                nan[indexnan] = name;
                harganan[indexnan] = price;
                indexnan++;
            }else if (jenis == "dedo" && indexdedo < 5) {
                dedo[indexdedo] = name;
                hargadedo[indexdedo] = price;
                indexdedo++;
            }else if (jenis == "mic" && indexmic < 5) {
                mic[indexmic] = name;
                hargamic[indexmic] = price;
                indexmic++;
            }else if (jenis == "clipon" && indexclipon < 5) {
                clipon[indexclipon] = name;
                hargaclipon[indexclipon] = price;
                indexclipon++;
            }else if (jenis == "device" && indexdevice < 5) {
                device[indexdevice] = name;
                hargadevice[indexdevice] = price;
                indexdevice++;
            }else if (jenis == "record" && indexrecord < 5) {
                record[indexrecord] = name;
                hargarecord[indexrecord] = price;
                indexrecord++;
            }else if (jenis == "headset" && indexheadset < 5) {
                headset[indexheadset] = name;
                hargaheadset[indexheadset] = price;
                indexheadset++;
            }else if (jenis == "sigma" && indexsigma < 5) {
                sigma[indexsigma] = name;
                hargasigma[indexsigma] = price;
                indexsigma++;
            }else if (jenis == "zeiss" && indexzeiss < 5) {
                zeiss[indexzeiss] = name;
                hargazeiss[indexzeiss] = price;
                indexzeiss++;
            }else if (jenis == "cinema" && indexcinema < 5) {
                cinema[indexcinema] = name;
                hargacinema[indexcinema] = price;
                indexcinema++;
            }else if (jenis == "mount" && indexmount < 5) {
                mount[indexmount] = name;
                hargamount[indexmount] = price;
                indexmount++;
            }else if (jenis == "lensasony" && indexlensasony < 5) {
                lensasony[indexlensasony] = name;
                hargalensasony[indexlensasony] = price;
                indexlensasony++;
            }else if (jenis == "drone" && indexdrone < 5) {
                drone[indexdrone] = name;
                hargadrone[indexdrone] = price;
                indexdrone++;
            }

        }

        file.close();
    }

    string namaCanon(int n) { // Mendapatkan nama Canon di index array
        return canon[n];
    }
    
    long long int priceCanon(int n) { // Mendapatkan harga Canon di index array
        return hargaCanon[n];
    }

    int jumlahvariantcanon() { // Mendapatkan jumlah variant Canon
        return sizeof(canon) / sizeof(canon[0]);
    }

    vector<int> searchCanon(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantcanon(); i++) {
            string lowerName = canon[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllCanon() {
        vector<pair<string, long long int>> allCanon;
        for (int i = 0; i < jumlahvariantcanon(); i++) {
            allCanon.push_back(make_pair(canon[i], hargaCanon[i]));
        }
        return allCanon;
    }  

    string namasony(int n) { // Mendapatkan nama Sony di index array
        return sony[n];
    }
    
    long long int pricesony(int n) { // Mendapatkan harga Sony di index array
        return hargasony[n];
    }

    int jumlahvariantsony() { // Mendapatkan jumlah variant Sony
        return sizeof(sony) / sizeof(sony[0]);
    }

    vector<int> searchsony(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantsony(); i++) {
            string lowerName = sony[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllsony() {
        vector<pair<string, long long int>> allsony;
        for (int i = 0; i < jumlahvariantsony(); i++) {
            allsony.push_back(make_pair(sony[i], hargasony[i]));
        }
        return allsony;
    }
    
    string namafuji(int n) { // Mendapatkan nama fuji di index array
        return fuji[n];
    }
    
    long long int pricefuji(int n) { // Mendapatkan harga fuji di index array
        return hargafuji[n];
    }

    int jumlahvariantfuji() { // Mendapatkan jumlah variant fuji
        return sizeof(fuji) / sizeof(fuji[0]);
    }

    vector<int> searchfuji(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantfuji(); i++) {
            string lowerName = fuji[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllfuji() {
        vector<pair<string, long long int>> allfuji;
        for (int i = 0; i < jumlahvariantfuji(); i++) {
            allfuji.push_back(make_pair(fuji[i], hargafuji[i]));
        }
        return allfuji;
        
    }
	
	string namalumix(int n) { 
        return lumix[n];
    }
    
    long long int pricelumix(int n) {
        return hargalumix[n];
    }

    int jumlahvariantlumix() {
        return sizeof(lumix) / sizeof(lumix[0]);
    }

    vector<int> searchlumix(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantlumix(); i++) {
            string lowerName = lumix[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAlllumix() {
        vector<pair<string, long long int>> alllumix;
        for (int i = 0; i < jumlahvariantlumix(); i++) {
            alllumix.push_back(make_pair(lumix[i], hargalumix[i]));
        }
        return alllumix;
    }
    
    string namamiror(int n) { 
        return miror[n];
    }
    
    long long int pricemiror(int n) {
        return hargamiror[n];
    }

    int jumlahvariantmiror() {
        return sizeof(miror) / sizeof(miror[0]);
    }

    vector<int> searchmiror(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantmiror(); i++) {
            string lowerName = miror[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllmiror() {
        vector<pair<string, long long int>> allmiror;
        for (int i = 0; i < jumlahvariantmiror(); i++) {
            allmiror.push_back(make_pair(miror[i], hargamiror[i]));
        }
        return allmiror;
    }
    
    string namamaputere(int n) { 
        return aputere[n];
    }
    
    long long int priceaputere(int n) {
        return hargaaputere[n];
    }

    int jumlahvariantaputere() {
        return sizeof(aputere) / sizeof(aputere[0]);
    }

    vector<int> searchaputere(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantaputere(); i++) {
            string lowerName = aputere[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
     vector<pair<string, long long int>> getAllaputere() {
        vector<pair<string, long long int>> allaputere;
        for (int i = 0; i < jumlahvariantaputere(); i++) {
            allaputere.push_back(make_pair(aputere[i], hargaaputere[i]));
        }
        return allaputere;
    }

    string namagodox(int n) { 
        return godox[n];
    }
    
    long long int pricegodox(int n) {
        return hargagodox[n];
    }

    int jumlahvariantgodox() {
        return sizeof(godox) / sizeof(godox[0]);
    }
    
    vector<int> searchgodox(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantgodox(); i++) {
            string lowerName = godox[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllgodox() {
        vector<pair<string, long long int>> allgodox;
        for (int i = 0; i < jumlahvariantgodox(); i++) {
            allgodox.push_back(make_pair(godox[i], hargagodox[i]));
        }
        return allgodox;
    }
    
    string namabeam(int n) { 
        return beam[n];
    }
    
    long long int pricebeam(int n) {
        return hargabeam[n];
    }

    int jumlahvariantbeam() {
        return sizeof(beam) / sizeof(beam[0]);
    }
    
    vector<int> searchbeam(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantbeam(); i++) {
            string lowerName = beam[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllbeam() {
        vector<pair<string, long long int>> allbeam;
        for (int i = 0; i < jumlahvariantbeam(); i++) {
            allbeam.push_back(make_pair(beam[i], hargabeam[i]));
        }
        return allbeam;
    }
    
    string namanan(int n) { 
        return nan[n];
    }
    
    long long int pricenan(int n) {
        return harganan[n];
    }

    int jumlahvariantnan() {
        return sizeof(nan) / sizeof(nan[0]);
    }
    
    vector<int> searchnan(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantnan(); i++) {
            string lowerName = nan[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllnan() {
        vector<pair<string, long long int>> allnan;
        for (int i = 0; i < jumlahvariantnan(); i++) {
            allnan.push_back(make_pair(nan[i], harganan[i]));
        }
        return allnan;
    }
    
    string namadedo(int n) { 
        return dedo[n];
    }
    
    long long int pricededo(int n) {
        return hargadedo[n];
    }

    int jumlahvariantdedo() {
        return sizeof(dedo) / sizeof(dedo[0]);
    }
    
    vector<int> searchdedo(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantdedo(); i++) {
            string lowerName = dedo[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAlldedo() {
        vector<pair<string, long long int>> alldedo;
        for (int i = 0; i < jumlahvariantdedo(); i++) {
            alldedo.push_back(make_pair(dedo[i], hargadedo[i]));
        }
        return alldedo;
    }
    
    string namamic(int n) { 
        return mic[n];
    }
    
    long long int pricemic(int n) {
        return hargamic[n];
    }

    int jumlahvariantmic() {
        return sizeof(mic) / sizeof(mic[0]);
    }
    
    vector<int> searchmic(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantmic(); i++) {
            string lowerName = mic[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllmic() {
        vector<pair<string, long long int>> allmic;
        for (int i = 0; i < jumlahvariantmic(); i++) {
            allmic.push_back(make_pair(mic[i], hargamic[i]));
        }
        return allmic;
    }
    
    string namaclipon(int n) { 
        return clipon[n];
    }
    
    long long int priceclipon(int n) {
        return hargaclipon[n];
    }

    int jumlahvariantclipon() {
        return sizeof(clipon) / sizeof(clipon[0]);
    }
    
    vector<int> searchclipon(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantclipon(); i++) {
            string lowerName = clipon[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllclipon() {
        vector<pair<string, long long int>> allclipon;
        for (int i = 0; i < jumlahvariantclipon(); i++) {
            allclipon.push_back(make_pair(clipon[i], hargaclipon[i]));
        }
        return allclipon;
    }
    
    string namadevice(int n) { 
        return device[n];
    }
    
    long long int pricedevice(int n) {
        return hargadevice[n];
    }

    int jumlahvariantdevice() {
        return sizeof(device) / sizeof(device[0]);
    }
    
    vector<int> searchdevice(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantdevice(); i++) {
            string lowerName = device[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAlldevice() {
        vector<pair<string, long long int>> alldevice;
        for (int i = 0; i < jumlahvariantdevice(); i++) {
            alldevice.push_back(make_pair(device[i], hargadevice[i]));
        }
        return alldevice;
    }
    
    string namarecord(int n) { 
        return record[n];
    }
    
    long long int pricerecord(int n) {
        return hargarecord[n];
    }

    int jumlahvariantrecord() {
        return sizeof(record) / sizeof(record[0]);
    }
    
    vector<int> searchrecord(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantrecord(); i++) {
            string lowerName = record[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllrecord() {
        vector<pair<string, long long int>> allrecord;
        for (int i = 0; i < jumlahvariantrecord(); i++) {
            allrecord.push_back(make_pair(record[i], hargarecord[i]));
        }
        return allrecord;
    }
    
    string namaheadset(int n) { 
        return headset[n];
    }
    
    long long int priceheadset(int n) {
        return hargaheadset[n];
    }

    int jumlahvariantheadset() {
        return sizeof(headset) / sizeof(headset[0]);
    }
    
    vector<int> searchheadset(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantheadset(); i++) {
            string lowerName = headset[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllheadset() {
        vector<pair<string, long long int>> allheadset;
        for (int i = 0; i < jumlahvariantheadset(); i++) {
            allheadset.push_back(make_pair(headset[i], hargaheadset[i]));
        }
        return allheadset;
    }
    
    string namasigma(int n) { 
        return sigma[n];
    }
    
    long long int pricesigma(int n) {
        return hargasigma[n];
    }

    int jumlahvariantsigma() {
        return sizeof(sigma) / sizeof(sigma[0]);
    }
    
    vector<int> searchsigma(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantsigma(); i++) {
            string lowerName = sigma[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllsigma() {
        vector<pair<string, long long int>> allsigma;
        for (int i = 0; i < jumlahvariantsigma(); i++) {
            allsigma.push_back(make_pair(sigma[i], hargasigma[i]));
        }
        return allsigma;
    }
    
    string namazeiss(int n) { 
        return zeiss[n];
    }
    
    long long int pricezeiss(int n) {
        return hargazeiss[n];
    }

    int jumlahvariantzeiss() {
        return sizeof(zeiss) / sizeof(zeiss[0]);
    }
    
    vector<int> searchzeiss(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantzeiss(); i++) {
            string lowerName = zeiss[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllzeiss() {
        vector<pair<string, long long int>> allzeiss;
        for (int i = 0; i < jumlahvariantzeiss(); i++) {
            allzeiss.push_back(make_pair(zeiss[i], hargazeiss[i]));
        }
        return allzeiss;
    }
    
    string namacinema(int n) { 
        return cinema[n];
    }
    
    long long int pricecinema(int n) {
        return hargacinema[n];
    }

    int jumlahvariantcinema() {
        return sizeof(cinema) / sizeof(cinema[0]);
    }
    
    vector<int> searchcinema(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantcinema(); i++) {
            string lowerName = cinema[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllcinema() {
        vector<pair<string, long long int>> allcinema;
        for (int i = 0; i < jumlahvariantcinema(); i++) {
            allcinema.push_back(make_pair(cinema[i], hargacinema[i]));
        }
        return allcinema;
    }
    
    string namamount(int n) { 
        return mount[n];
    }
    
    long long int pricemount(int n) {
        return hargamount[n];
    }

    int jumlahvariantmount() {
        return sizeof(mount) / sizeof(mount[0]);
    }
    
    vector<int> searchmount(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantmount(); i++) {
            string lowerName = mount[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAllmount() {
        vector<pair<string, long long int>> allmount;
        for (int i = 0; i < jumlahvariantmount(); i++) {
            allmount.push_back(make_pair(mount[i], hargamount[i]));
        }
        return allmount;
    }
    
    string namalensasony(int n) { 
        return lensasony[n];
    }
    
    long long int pricelensasony(int n) {
        return hargalensasony[n];
    }

    int jumlahvariantlensasony() {
        return sizeof(lensasony) / sizeof(lensasony[0]);
    }
    
    vector<int> searchlensasony(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantlensasony(); i++) {
            string lowerName = lensasony[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAlllensasony() {
        vector<pair<string, long long int>> alllensasony;
        for (int i = 0; i < jumlahvariantlensasony(); i++) {
            alllensasony.push_back(make_pair(lensasony[i], hargalensasony[i]));
        }
        return alllensasony;
    }
    
    string namadrone(int n) { 
        return drone[n];
    }
    
    long long int pricedrone(int n) {
        return hargadrone[n];
    }

    int jumlahvariantdrone() {
        return sizeof(drone) / sizeof(drone[0]);
    }
    
    vector<int> searchdrone(const string& query) {
        vector<int> results;
        string lowerQuery = query;
        transform(lowerQuery.begin(), lowerQuery.end(), lowerQuery.begin(), ::tolower);

        for (int i = 0; i < jumlahvariantdrone(); i++) {
            string lowerName = drone[i];
            transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
            if (lowerName.find(lowerQuery) != string::npos) {
                results.push_back(i);
            }
        }
        return results;
    }
    
    vector<pair<string, long long int>> getAlldrone() {
        vector<pair<string, long long int>> alldrone;
        for (int i = 0; i < jumlahvariantdrone(); i++) {
            alldrone.push_back(make_pair(drone[i], hargadrone[i]));
        }
        return alldrone;
    }


};



class InputOutput {
private:
    Database db;

public:
     void printKatalogCanon(bool ascending) {
        vector<pair<string, long long int>> allCanon = db.getAllCanon();

        if (ascending) {
            sort(allCanon.begin(), allCanon.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allCanon.begin(), allCanon.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|\tKatalog Kamera Canon\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allCanon.size(); i++) {
            cout << i + 1 << ". " << allCanon[i].first <<endl << "\t\t\tRp" << allCanon[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultscanon(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namaCanon(idx) <<endl << "\t\t\tRp" << db.priceCanon(idx) << "/hari" << endl<<endl;
            }
        }
    }
    
    void printKatalogsony(bool ascending) {
        vector<pair<string, long long int>> allsony = db.getAllsony();

        if (ascending) {
            sort(allsony.begin(), allsony.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allsony.begin(), allsony.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|\tKatalog Kamera sony\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allsony.size(); i++) {
            cout << i + 1 << ". " << allsony[i].first <<endl << "\t\t\tRp" << allsony[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultssony(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namasony(idx) <<endl << "\t\t\tRp" << db.pricesony(idx) << "/hari" << endl<<endl;
            }
        }
    }
	
	void printKatalogfuji(bool ascending) {
        vector<pair<string, long long int>> allfuji = db.getAllfuji();

        if (ascending) {
            sort(allfuji.begin(), allfuji.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allfuji.begin(), allfuji.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|\tKatalog Kamera fuji\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allfuji.size(); i++) {
            cout << i + 1 << ". " << allfuji[i].first <<endl << "\t\t\tRp" << allfuji[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsfuji(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namafuji(idx) <<endl << "\t\t\tRp" << db.pricefuji(idx) << "/hari" << endl<<endl;
            }
        }
    }    
    
    void printKataloglumix(bool ascending) {
        vector<pair<string, long long int>> alllumix = db.getAlllumix();

        if (ascending) {
            sort(alllumix.begin(), alllumix.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(alllumix.begin(), alllumix.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|\tKatalog Kamera lumix\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < alllumix.size(); i++) {
            cout << i + 1 << ". " << alllumix[i].first <<endl << "\t\t\tRp" << alllumix[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultslumix(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namalumix(idx) <<endl << "\t\t\tRp" << db.pricelumix(idx) << "/hari" << endl<<endl;
            }
        }
    }    
    
    void printKatalogmiror(bool ascending) {
        vector<pair<string, long long int>> allmiror = db.getAllmiror();

        if (ascending) {
            sort(allmiror.begin(), allmiror.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allmiror.begin(), allmiror.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|\tKatalog Kamera mirorless\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allmiror.size(); i++) {
            cout << i + 1 << ". " << allmiror[i].first <<endl << "\t\t\tRp" << allmiror[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsmiror(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namamiror(idx) <<endl << "\t\t\tRp" << db.pricemiror(idx) << "/hari" << endl<<endl;
            }
        }
    } 
	
	void printKatalogalputere(bool ascending) {
        vector<pair<string, long long int>> allaputere = db.getAllaputere();

        if (ascending) {
            sort(allaputere.begin(), allaputere.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allaputere.begin(), allaputere.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|  Katalog lightning aputere   |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allaputere.size(); i++) {
            cout << i + 1 << ". " << allaputere[i].first <<endl << "\t\t\tRp" << allaputere[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsaputere(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namamaputere(idx) <<endl << "\t\t\tRp" << db.priceaputere(idx) << "/hari" << endl<<endl;
            }
        }
    }     
      void printKataloggodox(bool ascending) {
        vector<pair<string, long long int>> allgodox = db.getAllgodox();

        if (ascending) {
            sort(allgodox.begin(), allgodox.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allgodox.begin(), allgodox.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|  Katalog lightning godox      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allgodox.size(); i++) {
            cout << i + 1 << ". " << allgodox[i].first <<endl << "\t\t\tRp" << allgodox[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsgodox(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namagodox(idx) <<endl << "\t\t\tRp" << db.pricegodox(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogbeam(bool ascending) {
        vector<pair<string, long long int>> allbeam = db.getAllbeam();

        if (ascending) {
            sort(allbeam.begin(), allbeam.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allbeam.begin(), allbeam.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "| Katalog lightning moving beam |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allbeam.size(); i++) {
            cout << i + 1 << ". " << allbeam[i].first <<endl << "\t\t\tRp" << allbeam[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsbeam(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namabeam(idx) <<endl << "\t\t\tRp" << db.pricebeam(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    
    void printKatalognan(bool ascending) {
        vector<pair<string, long long int>> allnan = db.getAllnan();

        if (ascending) {
            sort(allnan.begin(), allnan.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allnan.begin(), allnan.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|  Katalog lightning nanlite    |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allnan.size(); i++) {
            cout << i + 1 << ". " << allnan[i].first <<endl << "\t\t\tRp" << allnan[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsnan(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namanan(idx) <<endl << "\t\t\tRp" << db.pricenan(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
      void printKatalogdedo(bool ascending) {
        vector<pair<string, long long int>> alldedo = db.getAlldedo();

        if (ascending) {
            sort(alldedo.begin(), alldedo.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(alldedo.begin(), alldedo.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|  Katalog lightning dedolight  |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < alldedo.size(); i++) {
            cout << i + 1 << ". " << alldedo[i].first <<endl << "\t\t\tRp" << alldedo[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsdedo(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namadedo(idx) <<endl << "\t\t\tRp" << db.pricededo(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    
    void printKatalogmic(bool ascending) {
        vector<pair<string, long long int>> allmic = db.getAllmic();

        if (ascending) {
            sort(allmic.begin(), allmic.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allmic.begin(), allmic.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|      Katalog  microphone      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allmic.size(); i++) {
            cout << i + 1 << ". " << allmic[i].first <<endl << "\t\t\tRp" << allmic[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsmic(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namamic(idx) <<endl << "\t\t\tRp" << db.pricemic(idx) << "/hari" << endl<<endl;
            }
        }
    }
    
    void printKatalogclipon(bool ascending) {
        vector<pair<string, long long int>> allclipon = db.getAllclipon();

        if (ascending) {
            sort(allclipon.begin(), allclipon.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allclipon.begin(), allclipon.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|  Katalog   audio  clipon      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allclipon.size(); i++) {
            cout << i + 1 << ". " << allclipon[i].first <<endl << "\t\t\tRp" << allclipon[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsclipon(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namaclipon(idx) <<endl << "\t\t\tRp" << db.priceclipon(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogdevice(bool ascending) {
        vector<pair<string, long long int>> alldevice = db.getAlldevice();

        if (ascending) {
            sort(alldevice.begin(), alldevice.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(alldevice.begin(), alldevice.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|     Katalog audio device      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < alldevice.size(); i++) {
            cout << i + 1 << ". " << alldevice[i].first <<endl << "\t\t\tRp" << alldevice[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsdevice(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namadevice(idx) <<endl << "\t\t\tRp" << db.pricedevice(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogrecord(bool ascending) {
        vector<pair<string, long long int>> allrecord = db.getAllrecord();

        if (ascending) {
            sort(allrecord.begin(), allrecord.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allrecord.begin(), allrecord.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|       Katalog  recorder       |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allrecord.size(); i++) {
            cout << i + 1 << ". " << allrecord[i].first <<endl << "\t\t\tRp" << allrecord[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsrecord(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namarecord(idx) <<endl << "\t\t\tRp" << db.pricerecord(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogheadset(bool ascending) {
        vector<pair<string, long long int>> allheadset = db.getAllheadset();

        if (ascending) {
            sort(allheadset.begin(), allheadset.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allheadset.begin(), allheadset.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|        Katalog  headset       |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allheadset.size(); i++) {
            cout << i + 1 << ". " << allheadset[i].first <<endl << "\t\t\tRp" << allheadset[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsheadset(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namaheadset(idx) <<endl << "\t\t\tRp" << db.priceheadset(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogsigma(bool ascending) {
        vector<pair<string, long long int>> allsigma = db.getAllsigma();

        if (ascending) {
            sort(allsigma.begin(), allsigma.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allsigma.begin(), allsigma.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|      Katalog lensa sigma      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allsigma.size(); i++) {
            cout << i + 1 << ". " << allsigma[i].first <<endl << "\t\t\tRp" << allsigma[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultssigma(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namasigma(idx) <<endl << "\t\t\tRp" << db.pricesigma(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogzeiss(bool ascending) {
        vector<pair<string, long long int>> allzeiss = db.getAllzeiss();

        if (ascending) {
            sort(allzeiss.begin(), allzeiss.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allzeiss.begin(), allzeiss.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|      Katalog lensa zeiss      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allzeiss.size(); i++) {
            cout << i + 1 << ". " << allzeiss[i].first <<endl << "\t\t\tRp" << allzeiss[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultszeiss(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namazeiss(idx) <<endl << "\t\t\tRp" << db.pricezeiss(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogcinema(bool ascending) {
        vector<pair<string, long long int>> allcinema = db.getAllcinema();

        if (ascending) {
            sort(allcinema.begin(), allcinema.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allcinema.begin(), allcinema.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|    Katalog lensa cinema       |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allcinema.size(); i++) {
            cout << i + 1 << ". " << allcinema[i].first <<endl << "\t\t\tRp" << allcinema[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultscinema(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namacinema(idx) <<endl << "\t\t\tRp" << db.pricecinema(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKatalogmount(bool ascending) {
        vector<pair<string, long long int>> allmount = db.getAllmount();

        if (ascending) {
            sort(allmount.begin(), allmount.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(allmount.begin(), allmount.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|    Katalog lensa MFT mount    |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < allmount.size(); i++) {
            cout << i + 1 << ". " << allmount[i].first <<endl << "\t\t\tRp" << allmount[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsmount(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namamount(idx) <<endl << "\t\t\tRp" << db.pricemount(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
    void printKataloglensasony(bool ascending) {
        vector<pair<string, long long int>> alllensasony = db.getAlllensasony();

        if (ascending) {
            sort(alllensasony.begin(), alllensasony.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(alllensasony.begin(), alllensasony.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|       Katalog lensa sony      |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < alllensasony.size(); i++) {
            cout << i + 1 << ". " << alllensasony[i].first <<endl << "\t\t\tRp" << alllensasony[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultslensasony(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namalensasony(idx) <<endl << "\t\t\tRp" << db.pricelensasony(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
     void printKatalogdrone(bool ascending) {
        vector<pair<string, long long int>> alldrone = db.getAlldrone();

        if (ascending) {
            sort(alldrone.begin(), alldrone.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second < b.second;
            });
        } else {
            sort(alldrone.begin(), alldrone.end(), [](const pair<string, long long int>& a, const pair<string, long long int>& b) {
                return a.second > b.second;
            });
        }

        cout << "=================================" << endl;
        cout << "|         Katalog drone         |" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < alldrone.size(); i++) {
            cout << i + 1 << ". " << alldrone[i].first <<endl << "\t\t\tRp" << alldrone[i].second << "/hari" << endl<<endl;
        }
    }

    void printSearchResultsdrone(const vector<int>& results) {
        if (results.empty()) {
            cout << "Tidak ada hasil yang ditemukan." << endl;
        } else {
            cout << "Hasil pencarian:" << endl;
            for (int i = 0; i < results.size(); i++) {
                int idx = results[i];
                cout << idx + 1 << ". " << db.namadrone(idx) <<endl << "\t\t\tRp" << db.pricedrone(idx) << "/hari" << endl<<endl;
            }
        }
    } 
    
      void sinkronisasiData() {   // Sinkronisasi database default
        db.sinkronDefault();
    }

    Database getDatabase() {
        return db;
    }
    

};



class Cart {
private:
    struct CartItem {
        string name;
        long long int price;
        int days;
    };
    vector<CartItem> items;

public:
    void addItem(const string& item, long long int price, int days) {
        items.push_back({item, price, days});
        cout << "Item \"" << item << "\" berhasil ditambahkan ke keranjang." << endl;
    }

    void viewCart() {
        if (items.empty()) {
            cout << "Keranjang Anda kosong." << endl;
            return;
        }
        cout << "=================================" << endl;
        cout << "|\tKeranjang Belanja Anda\t|" << endl;
        cout << "=================================" << endl;
        for (size_t i = 0; i < items.size(); i++) {
            cout << i + 1 << ". " << items[i].name << "\t\tRp" << items[i].price << " untuk " << items[i].days << " hari" << endl;
        }
    }

    void checkout() {
        if (items.empty()) {
            cout << "Keranjang Anda kosong. Tidak dapat melakukan checkout." << endl;
            return;
        }

        long long int total = 0;
        for (size_t i = 0; i < items.size(); i++) {
            total += items[i].price;
        }

        char siswa;
        double discount = 1.0;
        cout << "Apakah Anda seorang mahasiswa dengan surat rekomendasi? (y/n): ";
        cin >> siswa;
        if (siswa == 'y' || siswa == 'Y') {
            discount = 0.5;
            cout << "Anda mendapatkan diskon 50%." << endl;
        }

        long long int discountedTotal = total * discount;

        char isDelivery;
        long long int deliveryCharge = 0;
        if (discountedTotal >= 500000) {
            cout << "Anda memenuhi syarat untuk gratis antar jemput dalam radius 300km." << endl;
            cout << "Apakah Anda ingin menggunakan layanan antar jemput? (y/n): ";
            cin >> isDelivery;
            if (isDelivery == 'y' || isDelivery == 'Y') {
                int distance;
                cout << "Masukkan jarak antar (dalam km): ";
                cin >> distance;
                if (distance > 300) {
                    deliveryCharge = (distance - 300) * 4000;
                    cout << "Biaya tambahan untuk jarak lebih dari 300km: Rp" << deliveryCharge << endl;
                }
            }
        } else {
            cout << "Anda tidak memenuhi syarat untuk gratis antar jemput." << endl;
        }

        long long int finalTotal = discountedTotal + deliveryCharge;
        long long int dp = finalTotal / 2;

        char paymentMethod;
        cout << "Pilih metode pembayaran (c: cash, t: transfer bank): ";
        cin >> paymentMethod;
        string paymentMethodStr = (paymentMethod == 'c' || paymentMethod == 'C') ? "Cash" : "Transfer Bank";

        ofstream outFile("ringkasan_pembayaran.txt");
        outFile << "=================================" << endl;
        outFile << "|\tRingkasan Pembayaran\t|" << endl;
        outFile << "=================================" << endl;
        for (size_t i = 0; i < items.size(); i++) {
            outFile << items[i].name << "\t\tRp" << items[i].price << " untuk " << items[i].days << " hari" << endl;
        }
        outFile << "Total Harga: Rp" << total << endl;
        outFile << "Diskon: " << (1 - discount) * 100 << "%" << endl;
        outFile << "Total Setelah Diskon: Rp" << discountedTotal << endl;
        outFile << "Biaya Antar Jemput: Rp" << deliveryCharge << endl;
        outFile << "Total Pembayaran: Rp" << finalTotal << endl;
        outFile << "DP 50%: Rp" << dp << endl;
        outFile << "Metode Pembayaran: " << paymentMethodStr << endl;
        outFile.close();

        cout << "Total Pembayaran: Rp" << finalTotal << endl;
        cout << "DP 50%: Rp" << dp << endl;
        cout << "Metode Pembayaran: " << paymentMethodStr << endl;
        cout << "Ringkasan pembayaran telah disimpan dalam file 'ringkasan_pembayaran.txt'." << endl;
        cout << "Terima kasih telah melakukan pemesanan." << endl;

        items.clear();
    }
};


class Rental {
private:
    int temp;
    InputOutput io;
    Cart cart;

public:
	
    void katalogCanon() {
    char sortOption;
    cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
    cin >> sortOption;

    if (sortOption == 'a') {
        io.printKatalogCanon(true);
    } else if (sortOption == 'd') {
        io.printKatalogCanon(false);
    }
	
	
    char addMore;
    do {
        int temp;
        cout << "Masukkan nomor kamera yang ingin ditambahkan ke wishlist: ";
        cin >> temp;
        if (temp > 0 && temp <= io.getDatabase().jumlahvariantcanon()) {
            int days;
            cout << "Berapa hari Anda ingin menyewa kamera ini? ";
            cin >> days;

            double itemPrice = io.getDatabase().priceCanon(temp - 1);
            double totalPrice = itemPrice * days;

            cart.addItem(io.getDatabase().namaCanon(temp - 1), totalPrice, days);

            cout << "Kamera telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
        } else {
            cout << "Nomor kamera tidak valid." << endl;
        }

        cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
        cin >> addMore;
        cin.ignore();
    } while(addMore == 'y' || addMore == 'Y');
}

    void searchCanon() {
        string query;
        cout << "Masukkan kata kunci untuk mencari kamera Canon: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchCanon(query);
        io.printSearchResultscanon(results);
    }
    
    void katalogsony() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogsony(true);
        } else if (sortOption == 'd') {
            io.printKatalogsony(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor kamera yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantsony()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa kamera ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricesony(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namasony(temp - 1), totalPrice, days);

                cout << "Kamera telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor kamera tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchsony() {
        string query;
        cout << "Masukkan kata kunci untuk mencari kamera sony: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchsony(query);
        io.printSearchResultssony(results);
    }
    
     void katalogfuji() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogfuji(true);
        } else if (sortOption == 'd') {
            io.printKatalogfuji(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor kamera yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantlumix()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa kamera ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricelumix(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namafuji(temp - 1), totalPrice, days);

                cout << "Kamera telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor kamera tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
        
    }
    
    void searchfuji() {
        string query;
        cout << "Masukkan kata kunci untuk mencari kamera fujifilm: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchfuji(query);
        io.printSearchResultsfuji(results);
    }
    
    void kataloglumix() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKataloglumix(true);
        } else if (sortOption == 'd') {
            io.printKataloglumix(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor kamera yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantlumix()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa kamera ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricelumix(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namalumix(temp - 1), totalPrice, days);

                cout << "Kamera telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor kamera tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchlumix() {
        string query;
        cout << "Masukkan kata kunci untuk mencari kamera lumix: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchlumix(query);
        io.printSearchResultslumix(results);
    }
    
    void katalogmiror() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogmiror(true);
        } else if (sortOption == 'd') {
            io.printKatalogmiror(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor kamera yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantmiror()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa kamera ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricelumix(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namamiror(temp - 1), totalPrice, days);

                cout << "Kamera telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor kamera tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchmiror() {
        string query;
        cout << "Masukkan kata kunci untuk mencari kamera mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchlumix(query);
        io.printSearchResultsmiror(results);
    }
    
    void katalogaputere() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogalputere(true);
        } else if (sortOption == 'd') {
            io.printKatalogalputere(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lightning yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantaputere()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lightning ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().priceaputere(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namamaputere(temp - 1), totalPrice, days);

                cout << "lightning telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lightning tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchalputre() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lightning: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchaputere(query);
        io.printSearchResultsaputere(results);
    }
    
    void kataloggodox() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKataloggodox(true);
        } else if (sortOption == 'd') {
            io.printKataloggodox(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantgodox()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lightning ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricegodox(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namagodox(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchgodox() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lightning: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchgodox(query);
        io.printSearchResultsgodox(results);
    }
    
    
    void katalogbeam() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogbeam(true);
        } else if (sortOption == 'd') {
            io.printKatalogbeam(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lightning yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantbeam()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lightning ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricebeam(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namabeam(temp - 1), totalPrice, days);

                cout << "lightning telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lightning tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchbeam() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lightning mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchbeam(query);
        io.printSearchResultsbeam(results);
    }
    
     
    void katalognan() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalognan(true);
        } else if (sortOption == 'd') {
            io.printKatalognan(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lightning yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantnan()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lightning ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricenan(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namanan(temp - 1), totalPrice, days);

                cout << "lightning telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lightning tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchnan() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lightning mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchnan(query);
        io.printSearchResultsnan(results);
    }
    
     void katalogdedo() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogdedo(true);
        } else if (sortOption == 'd') {
            io.printKatalogdedo(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lightning yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantdedo()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lightning ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricededo(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namadedo(temp - 1), totalPrice, days);

                cout << "lightning telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lightning tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchdedo() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lightning : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchdedo(query);
        io.printSearchResultsdedo(results);
    }
    
    void katalogmic() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogmic(true);
        } else if (sortOption == 'd') {
            io.printKatalogmic(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor audio yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantmic()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricemic(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namamic(temp - 1), totalPrice, days);

                cout << "audio telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor audio tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchmic() {
        string query;
        cout << "Masukkan kata kunci untuk mencari audio : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchmic(query);
        io.printSearchResultsmic(results);
    }
    
    void katalogclipon() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogclipon(true);
        } else if (sortOption == 'd') {
            io.printKatalogclipon(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor audio yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantclipon()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().priceclipon(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namaclipon(temp - 1), totalPrice, days);

                cout << "audio telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor audio tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchclipon() {
        string query;
        cout << "Masukkan kata kunci untuk mencari audio : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchclipon(query);
        io.printSearchResultsclipon(results);
    }
    
    
    void katalogdevice() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogdevice(true);
        } else if (sortOption == 'd') {
            io.printKatalogdevice(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor audio yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantdevice()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricedevice(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namadevice(temp - 1), totalPrice, days);

                cout << "audio telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor audio tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchdevice() {
        string query;
        cout << "Masukkan kata kunci untuk mencari audio : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchdevice(query);
        io.printSearchResultsdevice(results);
    }
    
    void katalogrecord() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogrecord(true);
        } else if (sortOption == 'd') {
            io.printKatalogrecord(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor audio yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantrecord()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricerecord(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namarecord(temp - 1), totalPrice, days);

                cout << "audio telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor audio tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchrecord() {
        string query;
        cout << "Masukkan kata kunci untuk mencari audio : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchrecord(query);
        io.printSearchResultsrecord(results);
    }
    
    void katalogheadset() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogheadset(true);
        } else if (sortOption == 'd') {
            io.printKatalogheadset(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor audio yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantheadset()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().priceheadset(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namaheadset(temp - 1), totalPrice, days);

                cout << "audio telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor audio tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchheadset() {
        string query;
        cout << "Masukkan kata kunci untuk mencari audio : ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchheadset(query);
        io.printSearchResultsheadset(results);
    }
    
    void katalogsigma() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogsigma(true);
        } else if (sortOption == 'd') {
            io.printKatalogsigma(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantsigma()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa audio ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricesigma(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namasigma(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchsigma() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lensa mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchsigma(query);
        io.printSearchResultssigma(results);
    }
    void katalogzeiss() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogzeiss(true);
        } else if (sortOption == 'd') {
            io.printKatalogzeiss(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantzeiss()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lensa ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricezeiss(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namazeiss(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchzeiss() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lensa mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchzeiss(query);
        io.printSearchResultszeiss(results);
    }
    
    void katalogcinema() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogcinema(true);
        } else if (sortOption == 'd') {
            io.printKatalogcinema(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantcinema()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lensa ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricecinema(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namacinema(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchcinema() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lensa mirorless: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchcinema(query);
        io.printSearchResultscinema(results);
    }
    
    void katalogmount() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogmount(true);
        } else if (sortOption == 'd') {
            io.printKatalogmount(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantmount()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lensa ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricemount(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namamount(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchmount() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lensa: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchmount(query);
        io.printSearchResultsmount(results);
    }
    
    void kataloglensasony() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKataloglensasony(true);
        } else if (sortOption == 'd') {
            io.printKataloglensasony(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantlensasony()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa lensa ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricelensasony(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namalensasony(temp - 1), totalPrice, days);

                cout << "lensa telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchlensasony() {
        string query;
        cout << "Masukkan kata kunci untuk mencari lensa: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchlensasony(query);
        io.printSearchResultslensasony(results);
    }
    
    void katalogdrone() {
        char sortOption;
        cout << "Ingin mengurutkan berdasarkan harga? (a: termurah, d: termahal): ";
        cin >> sortOption;

        if (sortOption == 'a') {
            io.printKatalogdrone(true);
        } else if (sortOption == 'd') {
            io.printKatalogdrone(false);
        }

        char addMore;
        do {
            int temp;
            cout << "Masukkan nomor lensa yang ingin ditambahkan ke wishlist: ";
            cin >> temp;
            if (temp > 0 && temp <= io.getDatabase().jumlahvariantdrone()) {
                int days;
                cout << "Berapa hari Anda ingin menyewa drone ini? ";
                cin >> days;

                double itemPrice = io.getDatabase().pricedrone(temp - 1);
                double totalPrice = itemPrice * days;

                cart.addItem(io.getDatabase().namadrone(temp - 1), totalPrice, days);

                cout << "drone telah ditambahkan ke wishlist dengan total harga untuk " << days << " hari: " << totalPrice << endl;
            } else {
                cout << "Nomor lensa tidak valid." << endl;
            }

            cout << "Apakah Anda ingin menambahkan item lagi? (y/n): ";
            cin >> addMore;
            cin.ignore();
        } while(addMore == 'y' || addMore == 'Y');
    }

    void searchdrone() {
        string query;
        cout << "Masukkan kata kunci untuk mencari drone: ";
        cin.ignore();
        getline(cin, query);
        vector<int> results = io.getDatabase().searchdrone(query);
        io.printSearchResultsdrone(results);
    }
    
      void addToCart(const string& item, long long int price, int days) {
        cart.addItem(item, price, days);
    }

    void viewCart() {
        cart.viewCart();
    }

    void checkout() {
        cart.checkout();
    }
    
    void displayAboutUs() {
            cout << "About Us\n";
            cout << "Salam Hangat,\n\n";
            cout << "BSM Entertainment adalah perusahaan yang yang bergerak di bidang penyewaan alat-alat Multimedia dan Photography & Videography, "
                 << "seperti Camera Photo & Video sampai dengan alat-alat penunjang produksi video profesional lainnya seperti Rig, Glidecam, Jimmy Jib Crane, "
                 << "Multicam System, Copter dan lainnya. Perusahaan kami telah berdiri sejak tahun 2011, dengan didukung oleh Tenaga kerja yang profesional "
                 << "dan peralatan yang Up To date, kami berharap dapat memberikan pelayanan yang terbaik kepada anda dan juga dapat menjadi Partner terpercaya. "
                 << "Kami berkomitment untuk terus meningkatkan pelayan dan memberikan produk yang berkualitas kepada para pelanggan.\n\n";
            cout << "Kami juga menyediakan:\n\n";
            cout << "Screen Projector, rig, glidecam, TV Plasma, tripod, monopod, mixer audio, switcher video, screen 2x3, screen 3x4, projector 5000 lumens, "
                 << "projector 7000 lumens, lampu studio, mobile light, monitor 7 inch, Lensa, track slider, flash lighting, Headphone, Shotgun Microphone, Boom Mic, dll.\n";
        }

    void displayDeliveryInfo() {
            cout << "Delivery Info\n";
            cout << "Kami memberikan layanan FREE DELIVERY (ANTAR GRATIS) alat ke lokasi Anda untuk seluruh wilayah yogyakarta dengan minimum order IDR 500.000. "
                 << "Untuk Wilayah luar yogyakarta, biaya delivery disesuaikan dengan jarak (4.000/km). Anda cukup memberikan informasi Alamat Lengkap, Nama Lengkap, "
                 << "Nomor Telpon dan Waktu Alat harus tiba di lokasi kepada Kami. Tim Kami akan mengatur jadwal sehingga alat dapat tiba sesuai permintaan Anda.\n";
    }

    void footer() {
    int choice;
    cout << "=====================================" << endl;
    cout << "1. About Us\n";
    cout << "2. Delivery Info\n";
    cout << "=====================================" << endl;
    cout << "masukan pilihan mu :";
    cin >> choice;

    switch(choice) {
        case 1:
            displayAboutUs();
            break;
        case 2:
            displayDeliveryInfo();
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
            break;
    }



}
    
    void searchkamera() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|           search kamera           |" << endl;
            cout << "=====================================" << endl;
            cout << "1. search canon" << endl;
            cout << "2. search sony" << endl;
            cout << "3. search fujifilm" << endl;
            cout << "4. search lumix" << endl;
            cout << "5. search mirorless" << endl;
            cout << "6. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   searchsony();
                    break;
                case 2:
                   searchsony();
                    break;
                case 3:
                   searchfuji();
                    break;
                case 4:
                   searchlumix();
                    break;
                case 5:
                   searchmiror();
                    break;
                case 6:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void searchlight() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|           search lightning        |" << endl;
            cout << "=====================================" << endl;
            cout << "1. search aputere" << endl;
            cout << "2. search godox" << endl;
            cout << "3. search moving beam" << endl;
            cout << "4. search nanlite" << endl;
            cout << "5. search dedolight" << endl;
            cout << "6. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   searchalputre();
                    break;
                case 2:
                   searchgodox();
                    break;
                case 3:
                   searchbeam();
                    break;
                case 4:
                   searchnan();
                    break;
                case 5:
                   searchdedo();
                    break;
                case 6:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void searchaudio() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|           search audio            |" << endl;
            cout << "=====================================" << endl;
            cout << "1. search microphone" << endl;
            cout << "2. search clip on " << endl;
            cout << "3. search sound device" << endl;
            cout << "4. search recorder" << endl;
            cout << "5. search headset" << endl;
            cout << "6. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   searchmic();
                    break;
                case 2:
                   searchclipon();
                    break;
                case 3:
                   searchdevice();
                    break;
                case 4:
                   searchrecord();
                    break;
                case 5:
                   searchheadset();
                    break;
                case 6:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void searchlensa() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|           search lensa            |" << endl;
            cout << "=====================================" << endl;
            cout << "1. search lensa sigma" << endl;
            cout << "2. search lensa zeiss" << endl;
            cout << "3. search lensa cinema" << endl;
            cout << "4. search lensa MTI mount" << endl;
            cout << "5. search lensa sony" << endl;
            cout << "6. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   searchsigma();
                    break;
                case 2:
                   searchzeiss();
                    break;
                case 3:
                   searchcinema();
                    break;
                case 4:
                   searchmount();
                    break;
                case 5:
                   searchlensasony();
                    break;
                case 6:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
        void sewaKamera() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|      Kategori Rental kamera       |" << endl;
            cout << "=====================================" << endl;
            cout << "1. Katalog Kamera Canon" << endl;
            cout << "2. Katalog Kamera Sony" << endl;
            cout << "3. Katalog Kamera Fujifilm" << endl;
            cout << "4. Katalog Kamera Lumix" << endl;
            cout << "5. Katalog Kamera Mirrorles" << endl;
            cout << "6. Cari Kamera" << endl;
            cout << "7. Lihat Wishlist" << endl;
            cout << "8. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                    katalogCanon();
                    break;
                case 2:
                    katalogsony();
                    break;
                case 3:
                  	katalogfuji();
                    break;
                case 4:
                    kataloglumix();
                    break;
                case 5:
                    katalogmiror();
                    break;
                case 6:
                    searchkamera();
                    break;
                case 7:
                    cart.viewCart();
                    break;
                case 8:
                     ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    	
    	
    	void sewalight() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|      Kategori Rental lightning    |" << endl;
            cout << "=====================================" << endl;
            cout << "1. Katalog lighting aputere" << endl;
            cout << "2. Katalog lightning godox" << endl;
            cout << "3. Katalog lightning moving beam" << endl;
            cout << "4. Katalog lightning nanlite" << endl;
            cout << "5. Katalog lightning dedolight" << endl;
            cout << "6. search lightning" << endl;
            cout << "7. Lihat Wishlist" << endl;
            cout << "8. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   katalogaputere();
                    break;
                case 2:
                   kataloggodox();
                    break;
                case 3:
                   katalogbeam();
                    break;
                case 4:
                   katalognan();
                    break;
                case 5:
                   katalogdedo();
                    break;
                case 6:
                   searchlight();
                    break;
                case 7:
                      cart.viewCart();
                    break;
                case 8:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void sewaaudio() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|      Kategori Rental audio        |" << endl;
            cout << "=====================================" << endl;
            cout << "1. Katalog audio microphone" << endl;
            cout << "2. Katalog audio clip on" << endl;
            cout << "3. Katalog audio sound device" << endl;
            cout << "4. Katalog audio recorder" << endl;
            cout << "5. Katalog audio headset" << endl;
            cout << "6. search audio" << endl;
            cout << "7. Lihat Wishlist" << endl;
            cout << "8. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   katalogmic();
                    break;
                case 2:
                   katalogclipon();
                    break;
                case 3:
                   katalogdevice();
                    break;
                case 4:
                   katalogrecord();
                    break;
                case 5:
                   katalogheadset();
                    break;
                case 6:
                   searchaudio();
                    break;
                case 7:
                      cart.viewCart();
                    break;
                case 8:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void sewalensa() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=====================================" << endl;
            cout << "|       Kategori Rental lensa       |" << endl;
            cout << "=====================================" << endl;
            cout << "1. Katalog lensa sigma" << endl;
            cout << "2. Katalog lensa zeiss" << endl;
            cout << "3. Katalog lensa cinema" << endl;
            cout << "4. Katalog lensa MTI mount" << endl;
            cout << "5. Katalog lensa sony" << endl;
            cout << "6. search lensa" << endl;
            cout << "7. Lihat Wishlist" << endl;
            cout << "8. Kembali ke menu utama" << endl;
            cout << "=====================================" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> temp;
            switch (temp) {
                case 1:
                   katalogsigma();
                    break;
                case 2:
                   katalogzeiss();
                    break;
                case 3:
                   katalogcinema();
                    break;
                case 4:
                  katalogmount();
                    break;
                case 5:
                   kataloglensasony();
                    break;
                case 6:
                   searchlensa();
                    break;
                case 7:
                      cart.viewCart();
                    break;
                case 8:
                   ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }

    void FilmBroadCasting() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=========================" << endl;
            cout << "|\tMenu Sewa\t|" << endl;
            cout << "=========================" << endl;
            cout << "1. Sewa Kamera" << endl;
            cout << "2. Sewa Lightning" << endl;
            cout << "3. sewa audio" << endl;
            cout << "4. sewa lensa" << endl;
            cout << "5. Lihat Wishlist" << endl;
            cout << "6. Checkout" << endl;
            cout << "7. Kembali ke Menu Utama" << endl;
            cout << "=========================" << endl;
            cout << "Pilih jenis barang: ";
            cin >> temp;
            switch (temp) {
                case 1:
                    sewaKamera();
                    break;
                case 2:
                    sewalight();
                    break;
                case 3:
                    sewaaudio();
                    break;
                case 4:
                    sewalensa();
                    break;
                case 5:
                   
                    break;
                case 6:
                    cart.checkout();
                    break;
                case 7:
                    ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
    
    void eventdanfestival() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=========================" << endl;
            cout << "|\tMenu Sewa\t|" << endl;
            cout << "=========================" << endl;
            cout << "1. Sewa Drone" << endl;
            cout << "2. Sewa Lightning" << endl;
            cout << "3. sewa audio" << endl;
            cout << "4. Lihat Wishlist" << endl;
            cout << "5. Checkout" << endl;
            cout << "6. Kembali ke Menu Utama" << endl;
            cout << "=========================" << endl;
            cout << "Pilih jenis barang: ";
            cin >> temp;
            switch (temp) {
                case 1:
                    katalogdrone();
                    break;
                case 2:
                    sewalight();
                    break;
                case 3:
                    sewaaudio();
                    break;
                case 4:
                    cart.viewCart();
                    break;
                case 5:
                    cart.checkout();
                    break;
                case 6:
                    ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }

    void sewaMenu() {
        bool ulang = true;
        while (ulang) {
            cout << endl;
            cout << "=========================" << endl;
            cout << "|\tMenu Sewa\t|" << endl;
            cout << "=========================" << endl;
            cout << "1. Film dan Broadcasting" << endl;
            cout << "2. Event dan Festival" << endl;
            cout << "3. Sewa Studio" << endl;
            cout << "4. Lihat Wishlist" << endl;
            cout << "5. Checkout" << endl;
            cout << "6. Kembali ke Menu Utama" << endl;
            cout << "=========================" << endl;
            cout << "Pilih jenis barang: ";
            cin >> temp;
            switch (temp) {
                case 1:
                    FilmBroadCasting();
                    break;
                case 2:
                    eventdanfestival();
                    break;
                case 3:
                   
                    break;
                case 4:
                    cart.viewCart();
                    break;
                case 5:
                    cart.checkout();
                    break;
                case 6:
                    ulang = false;
                    break;
                default:
                    cout << "Pilihan tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }

    void home() {
        bool ulang = true;
        io.sinkronisasiData(); // Sinkronisasi data ke database
        while (ulang) {
            cout << endl;
            cout << "=========================" << endl;
            cout << "|\tMenu Utama\t|" << endl;
            cout << "=========================" << endl;
            cout << "1. Sewa" << endl;
            cout << "2. Informasi BSM" << endl;
            cout << "3. Lihat Wishlist" << endl;
            cout << "4. Checkout" << endl;
            cout << "5. Exit" << endl;
            cout << "=========================" << endl;
            cout << "Pilih menu: ";
            cin >> temp;
            switch (temp) {
                case 1:
                    sewaMenu();
                    break;
                case 2:
                    cout << "=====================================" << endl;
                    cout << "Kontak BSM RENTAL" << endl;
                    cout << "Nomor Telepon: 021-22792541" << endl;
                    cout << "Instagram: @bsmyogyakarta" << endl;
                    cout << "=====================================" << endl;
                    footer();
                    break;
                case 3:
                    cart.viewCart();
                    break;
                case 4:
                    cart.checkout();
                    break;
                case 5:
                    cout << "=====================================" << endl;
                    cout << "Terima kasih telah menggunakan layanan BSM RENTAL" << endl;
                    cout << "=====================================" << endl;
                    ulang = false;  // Mengakhiri perulangan menu home
                    break;
                default:
                    cout << "Menu tidak tersedia, harap masukkan lagi." << endl;
                    break;
            }
        }
    }
};

bool mulai() {
	Rental rental;
    string username;
    string password;
    
     cout << "=====================================" << endl;
     cout << "|   SELAMAT DATANG DI BSM RENTAL    |" << endl;
     cout << "=====================================" << endl;
    
    cout << "Masukkan username: ";
    cin >> username;
    
    cout << "Masukkan password: ";
    cin >> password;
    
    string user = "123";
    string pass = "123";

    if (username == username && password == pass) {
        rental.home();  
        return true;
    } else {
        cout << "Login gagal! Username atau password salah.\n";
        return false;
    }
}



int main() {
    mulai();
    return 0;
}

