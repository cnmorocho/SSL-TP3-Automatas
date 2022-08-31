#include <stdio.h>

// Casos:
// a) Si no reconoce la palabra retorna 1
// b) Si reconoce la palabra retorna 0


int automataCadena(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int pos = 0;
	
	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if(palabra[pos] == '\"') {
				estado = 1;
				pos++;
			}
			else
				palabraRechazada = 0;
			;
			break;
		case (1):
			estado = 2;
			;
			break;
		case (2):
			if (palabra[pos] == '\"')
				estado = 6;
			else
				estado = 3;
			;
			break;
		case (3):
			estado = 4;
			;
			break;
		case (4):
			if ((palabra[pos] >= 97 && palabra[pos] <= 122) || (palabra[pos] >= 65 && palabra[pos] <= 90) || (palabra[pos] >= 48 && palabra[pos] <= 57)) {
				estado = 5;
				pos++;
			}
			else
				palabraRechazada = 0;
			;
			break;
		case (5):
			estado = 6;
			;
			break;
		case (6):
			if ((palabra[pos] >= 97 && palabra[pos] <= 122) || (palabra[pos] >= 65 && palabra[pos] <= 90) || (palabra[pos] >= 48 && palabra[pos] <= 57))
				estado = 3;
			else
				estado = 7;
			;
			break;
		case (7):
			estado = 8;
			;
			break;
		case (8):
			if (palabra[pos] == '\"')
				estado = 9;
			else
				palabraRechazada = 0;
			;
			break;
		case (9):
			if (palabra[pos + 1] == NULL)
				return 0;
			else
				palabraRechazada = 0;
			;
			break;
		}
	}
	return 1;
}

int automataIdentificador(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1;
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			estado = 1;
			;
			break;
		case (1):
			if (palabra[pos] >= 97 && palabra[pos] <= 122) {
				estado = 2;
				pos++;
			}
			else
				palabraRechazada = 0;
			;
			break;
		case (2):
			estado = 3;
			;
			break;
		case (3):
			if ((palabra[pos] >= 97 && palabra[pos] <= 122) || (palabra[pos] >= 65 && palabra[pos] <= 90) || (palabra[pos] >= 48 && palabra[pos] <= 57)) {
				estado = 4;
				pos++;
			}
			else
				palabraRechazada = 0;
		case (4):
			if (palabra[pos] == NULL)
				estado = 5;
			else
				estado = 2;
			;
			break;
		case (5):
			return 0;
			;
			break;
		}
	}
	return 1;
}

int automataChar(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if (palabra[pos] == 'c')
				estado = 1;
			else
				palabraRechazada = 0;
			; break;
		case (1):
			if (palabra[pos] == 'h')
				estado = 2;
			else
				palabraRechazada = 0;
			; break;
		case (2):
			if (palabra[pos] == 'a')
				estado = 3;
			else
				palabraRechazada = 0;
			; break;
		case (3):
			if (palabra[pos] == 'r' && palabra[pos + 1] == NULL)
				return 0;
			else
				palabraRechazada = 0;
			; break;
		}
		pos++;
	}
	return 1;
}

int automataPrint(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if (palabra[pos] == 'p')
				estado = 1;
			else
				palabraRechazada = 0;
			; break;
		case (1):
			if (palabra[pos] == 'r')
				estado = 2;
			else
				palabraRechazada = 0;
			; break;
		case (2):
			if (palabra[pos] == 'i')
				estado = 3;
			else
				palabraRechazada = 0;
			; break;
		case (3):
			if (palabra[pos] == 'n')
				estado = 4;
			else
				palabraRechazada = 0;
			; break;
		case (4):
			if (palabra[pos] == 't' && palabra[pos + 1] == NULL)
				return 0;
			else
				palabraRechazada = 0;
			; break;
		}
		pos++;
	}
	return 1;
}

int automataDouble(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if (palabra[pos] == 'd')
				estado = 1;
			else
				palabraRechazada = 0;
			; break;
		case (1):
			if (palabra[pos] == 'o')
				estado = 2;
			else
				palabraRechazada = 0;
			; break;
		case (2):
			if (palabra[pos] == 'u')
				estado = 3;
			else
				palabraRechazada = 0;
			; break;
		case (3):
			if (palabra[pos] == 'b')
				estado = 4;
			else
				palabraRechazada = 0;
			; break;
		case (4):
			if (palabra[pos] == 'l')
				estado = 5;
			else
				palabraRechazada = 0;
			; break;
		case (5):
			if (palabra[pos] == 'e' && palabra[pos + 1] == NULL)
				return 0;
			else
				palabraRechazada = 0;
			; break;
		}
		pos++;
	}
	return 1;
}

int automataInt(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if (palabra[pos] == 'i')
				estado = 1;
			else
				palabraRechazada = 0;
			; break;
		case (1):
			if (palabra[pos] == 'n')
				estado = 2;
			else
				palabraRechazada = 0;
			; break;
		case (2):
			if (palabra[pos] == 't' && palabra[pos + 1] == NULL)
				return 0;
			else
				palabraRechazada = 0;
			; break;
		}
		pos++;
	}
	return 1;
}

int automataPalabraReservada(char palabra[]) {
	int automata1 = automataInt(palabra);
	int automata2 = automataChar(palabra);
	int automata3 = automataPrint(palabra);
	int automata4 = automataDouble(palabra);

	if (automata1 == 0 || automata2 == 0 || automata3 == 0 || automata4 == 0)
		return 0;
	else
		return 1;
}

int automataOperador(char operador[]) {
	if ((operador[0] == '+' || operador[0] == '-' || operador[0] == '*' || operador[0] == '/' || operador[0] == '^' || operador[0] == '=') && operador[1] != NULL)
		return 0;
	else
		return 1;
}

int automataConstante(char palabra[]) {
	int estado = 0;
	int palabraRechazada = 1; // 0 es true, 1 es false
	int tamanoPalabra = sizeof(palabra) / sizeof(char); // tamaño del palabra
	int pos = 0;

	while (palabraRechazada != 0) {
		switch (estado) {
		case (0):
			if (palabra[pos] >= 48 && palabra[pos] <= 57) {
				estado = 1;
				pos++;
			}
			else
				palabraRechazada = 0;
				;
			break;
		case (1):
			if (palabra[pos] == '.') {
				estado = 3;
				pos++;
			}
			else if (palabra[pos] == NULL)
				estado = 2;
			else
				estado = 0;
			;
			break;
		case (2):
			return 0;
			;
			break;
		case (3):
			if (palabra[pos] >= 48 && palabra[pos] <= 57) {
				estado = 4;
				pos++;
			}
			else
				palabraRechazada = 0;
			;
			break;
		case (4):
			if (palabra[pos] == NULL)
				return 0;
			else
				estado = 3;
			;
			break;
		}
	}
	return 1;
}


int main()
{
	// Casos de prueba
	// char str[] = "123";
	// char str[] = "+";
	// char str[] = "print";
	// char str[] = "\"ASD123asd\"";
	// char str[] = "soyUnIdentificador123";
	// char str[] = "\"\"";
	char str[] = "holamundo";

	int esPalabraReservada = automataPalabraReservada(str);
	printf("\n%s es una palabra reservada? %s", str ,esPalabraReservada == 0 ? "Verdadero" : "Falso");

	
	int esCadena = automataCadena(str);
	printf("\n%s es una cadena?: %s", str, esCadena == 0 ? "Verdadero" : "Falso");

	
	int esIdentificador = automataIdentificador(str);
	printf("\n%s es un identificador? %s", str, esIdentificador == 0 ? "Verdadero" : "Falso");

	
	int esConstante = automataConstante(str);
	printf("\n%s es una constante? %s", str, esConstante == 0 ? "Verdadero" : "Falso");

	int esOperador = automataOperador(str);
	printf("\n%s es un operador? %s", str, esOperador == 0 ? "Verdadero" : "Falso");

	return 0;
}