#include "pch.h"
#include"ArrEclipse.h"
#include"menu.h"
#include<conio.h>
using namespace System;

int main()
{
    ArregloEclipse* OBJETOarregloeclipse;
    OBJETOarregloeclipse = new ArregloEclipse();
    Eclipse* OBJETOeclipse;

    //variables:
    string TipoEclipse;
    string FechaEclipse;
    int HoraEclipse;
    bool SismoEclipse;
    bool LluviaEclipse;
    string VisibilidadEclipse;

    //darle vida al menu:

    while (1)
    {
        Console::Clear();
        int digitadoporelUSUARIO = menu();

        if (digitadoporelUSUARIO==1)
        {
            OBJETOarregloeclipse->mostrar();
        }
        if (digitadoporelUSUARIO==2)
        {
            cout << "\nIngrese el tipo de eclipse : ";
            cin >> TipoEclipse;
            cout << "\nIngrese la fecha del eclipse : ";
            cin >> FechaEclipse;
            cout << "\nIngrese la hora de eclipse : ";
            cin >> HoraEclipse;
            cout << "\n¿Hubo sismo? 0 = no; 1 = si : ";
            cin >> SismoEclipse;
            cout << "\n¿Hubo lluvias? 0 = no; 1 = si : ";
            cin >> LluviaEclipse;
            cout << "\nEn que continente hubo la mejor visibilidad : ";
            cin >> VisibilidadEclipse;
            //instancia del objeto
            OBJETOeclipse = new Eclipse();
            OBJETOeclipse->SETtipoeclipse(TipoEclipse);
            OBJETOeclipse->SETfecha(FechaEclipse);
            OBJETOeclipse->SEThora(HoraEclipse);
            OBJETOeclipse->SETsismo(SismoEclipse);
            OBJETOeclipse->SETlluvias(LluviaEclipse);
            OBJETOeclipse->SETtipoeclipse(VisibilidadEclipse);
            //guardar objeto
            OBJETOarregloeclipse->agregarEclipse(OBJETOeclipse);
        }
        if (digitadoporelUSUARIO==3)
        {
            int posicionarreglo;
            cout << "\nIngresar posicion a eliminar : ";
            cin >> posicionarreglo;
            OBJETOarregloeclipse->eliminar(posicionarreglo);
        }
        if (digitadoporelUSUARIO == 4) {
            exit(0);
        }
        cout << "\n\nPresione una tecla para continuar...";
        getch();
    }
    
   
    return 0;
}
