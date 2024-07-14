float messDat[12];//Ein Array fom typ float mit 12(0-11) Elementen wird deklariert
char text[groesse];//Ein Array fom typ char wird mit der konstanten "groesse" initialisiert 
messDat[20] = 12; //fuehrt zu undefined behaviour. Es wird ausserhalb des Arrays '12' geschrieben. Es kann irgendeine Speicherstelle ueberschriben werden.