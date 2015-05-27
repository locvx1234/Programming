#include "iostream"
#include "fstream"
#include "cstdlib"

using namespace std;

//Structure thong tin cua 1 nguoi
typedef struct{
    string name, job, address;
    long int phone;
}Info;

int main(){
    int i, N = 3;
    ofstream os("INPUT.DAT");
    Info *p = new Info[N];
    if (!os){
        cout << "Can't open file";
        exit(1);
    }
    //Ghi thong tin vao file
    for ( i = 0 ; i < N; i++){
        cout << "NAME: " ;     getline(cin, (p+i)->name);
        cout << "ADDRESS: " ;  getline(cin, (p+i)->address);
        cout << "JOB: " ;      getline(cin, (p+i)->job);
        cout << "PHONE: " ;    cin >> (p+i)->phone; cin.ignore();
        os << (p+i)->name << endl << (p+i)->job << endl << (p+i)->phone << endl << (p+i)->address <<endl << endl;
    }
    os.close();

    //Tim kiem 1 sdt va in thong tin cua nguoi do
    ifstream is("INPUT.DAT");
    long int tel;
    cout << "Find phone number: ";
    cin >> tel;
    int j = 0;
    string s;
	for ( i = 0 ; i  < N ; i++){
		for (  j  = 0 ; j < 4  ; j++){
			if ( j == 0  )	{
				getline(is , (p+i)->name);
			}

			if (j== 1) {
				getline(is , (p+i)->job);
			}

			if (j== 2) {
				is >> (p+i)->phone;
				getline(is, s);
			}

			if (j== 3){
				getline(is , (p+i)->address);
			}
		}
		getline(is , s);
	}


    for (i = 0; i < N; i++){
        if((p+i)->phone == tel){
            cout << "|\tName: " << (p+i)->name << endl <<
                    "|\tPhone: " << (p+i)->phone << endl <<
                    "|\tAddress: " << (p+i)->address << endl <<
                    "|\tMajor: " << (p+i)->job <<endl;
            exit(1);
        }

    }
    cout << "Don't have this phone number in database!" ;

    delete []p;
    return 0;
}
