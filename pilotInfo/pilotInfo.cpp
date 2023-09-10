#include <iostream>
using namespace std;

int main()
{
    struct Planes {
        char planeType[30];
        char model[30];
        int releaseYear;
        char ID[20];
        char pilotNames[70];
        int enemiesDestroyed;
        double accuracy;
        int maxPlaneAltitude;
    }Hartman,redBaron,Rudel;

    cout << "Enter plane type: " << endl;
    gets_s(Hartman.planeType);
    cout << "Enter plane model: " << endl;
    gets_s(Hartman.model);
    cout << "Enter release year: " << endl;
    cin >> Hartman.releaseYear;
    cin.ignore();
    cout << "Enter plane ID:" << endl;
    gets_s(Hartman.ID);
    cout << "Enter pilot names: " << endl;
    gets_s(Hartman.pilotNames);
    cout << "Planes destroyed"<<endl;
    cin >> Hartman.enemiesDestroyed;
    cout << "Fire accuracy: "<<endl;
    cin >> Hartman.accuracy;
    cout << "Max altitude: "<<endl;
    cin >> Hartman.maxPlaneAltitude;
    cin.ignore();
    cout << " " << endl;

    cout << "Enter plane type: " << endl;
    gets_s(redBaron.planeType);
    cout << "Enter plane model: " << endl;
    gets_s(redBaron.model);
    cout << "Enter release year: " << endl;
    cin >> redBaron.releaseYear;
    cin.ignore();
    cout << "Enter plane ID:" << endl;
    gets_s(redBaron.ID);
    cout << "Enter pilot names: " << endl;
    gets_s(redBaron.pilotNames);
    cout << "Planes destroyed" << endl;
    cin >> redBaron.enemiesDestroyed;
    cout << "Fire accuracy: " << endl;
    cin >> redBaron.accuracy;
    cout << "Max altitude: " << endl;
    cin >> redBaron.maxPlaneAltitude;
    cin.ignore();
    cout << " " << endl;

    cout << "Enter plane type: " << endl;
    gets_s(Rudel.planeType);
    cout << "Enter plane model: " << endl;
    gets_s(Rudel.model);
    cout << "Enter release year: " << endl;
    cin >> Rudel.releaseYear;
    cin.ignore();
    cout << "Enter plane ID:" << endl;
    gets_s(Rudel.ID);
    cout << "Enter pilot names: " << endl;
    gets_s(Rudel.pilotNames);
    cout << "Planes destroyed" << endl;
    cin >> Rudel.enemiesDestroyed;
    cout << "Fire accuracy: " << endl;
    cin >> Rudel.accuracy;
    cout << "Max altitude: " << endl;
    cin >> Rudel.maxPlaneAltitude;
    
    cout << endl;

    cout << "Hartman" << endl;
    cout << Hartman.planeType << endl;
    cout << Hartman.model << endl;
    cout << Hartman.releaseYear << endl;
    cout << Hartman.ID << endl;
    cout << Hartman.pilotNames << endl;
    cout << Hartman.enemiesDestroyed << endl;
    cout << Hartman.accuracy << endl;
    cout << Hartman.maxPlaneAltitude << endl;
    cout << endl;

    cout << "Red Baron" << endl;
    cout << redBaron.planeType << endl;
    cout << redBaron.model << endl;
    cout << redBaron.releaseYear << endl;
    cout << redBaron.ID << endl;
    cout << redBaron.pilotNames << endl;
    cout << redBaron.enemiesDestroyed << endl;
    cout << redBaron.accuracy << endl;
    cout << redBaron.maxPlaneAltitude << endl;
    cout << endl;

    cout << "Rudel" << endl;
    cout << Rudel.planeType << endl;
    cout << Rudel.model << endl;
    cout << Rudel.releaseYear << endl;
    cout << Rudel.ID << endl;
    cout << Rudel.pilotNames << endl;
    cout << Rudel.enemiesDestroyed << endl;
    cout << Rudel.accuracy << endl;
    cout << Rudel.maxPlaneAltitude << endl;

    return 0;

}

