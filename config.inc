// Archivo de configuraciones generales del servidor. Aquí estará la conexión a la base de datos y las configuraciones globales.
#include <dbfile> // Archivo que contiene la función para realizar conexión a la base de datos.

Config_OnGameModeInit()
{
	print("\nIniciando servidor..\n");
	print("\n- Archivo de Configuraciones cargado.\n");

   	SetGameModeText("GM v1.0");
	SendRconCommand("hostname Servidor en pruebas");
	SendRconCommand("mapname Los Santos");
	SendRconCommand("weburl www.testing.com");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	DisableInteriorEnterExits();
	ManualVehicleEngineAndLights();
	AllowInteriorWeapons(0);
	EnableStuntBonusForAll(0);

	//Conexión a la base de datos
	DBConnection(DBHOST, DBUSER, DBNAME, DBPASS);
	return 1;
}
