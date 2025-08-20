#include <iostream>

using namespace std;

class SinhVien{
private:
    string Hoten;
    string maSvien;
    double diemToan, diemHoa, diemly;

public:
    void NhapTT (){
        cout <<"Ho va ten :" ;
        getline (cin , Hoten);
        cout <<"Ma Sinh vien" ;
        cin >> maSvien;
        cout << "Ly :";
        cin >> diemly;
        cout << "Toan :";
        cin >> diemHoa;
        cout << "Hoa :";
        cin >> diemToan;
    }

    void DiemTb () {
        return ( diemHoa +diemly + diemToan ) /3.0 ;
    }
    void XuatTT (){
        cout  << "Ho va ten " << Hoten << endl;
        cout << "ma Sinh vien" << maSvien << endl;
        cout <<"diem Toan" << diemToan << endl;
        cout <<"diem Ly" <<  diemly << endl;
        cout <<"diem Hoa" <<  diemHoa << endl;
        cout <<"Diem trung binh" <<  DiemTb() <<endl;
    }
};
